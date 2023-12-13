#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <zlib.h>

void compressFile(const std::string &inputFileName, const std::string &outputFileName) {
    std::ifstream inputFile(inputFileName, std::ios::binary);
    std::ofstream compressedFile(outputFileName, std::ios::binary);
    std::stringstream compressedData;

    if (!inputFile || !compressedFile) {
        std::cerr << "Error opening files." << std::endl;
        return;
    }

    // Read the entire file into a stringstream
    compressedData << inputFile.rdbuf();

    // Get the string data
    std::string data = compressedData.str();

    // Compress the data
    z_stream defstream;
    defstream.zalloc = Z_NULL;
    defstream.zfree = Z_NULL;
    defstream.opaque = Z_NULL;

    if (deflateInit(&defstream, Z_DEFAULT_COMPRESSION) != Z_OK) {
        std::cerr << "Failed to initialize zlib." << std::endl;
        return;
    }

    defstream.avail_in = data.size();
    defstream.next_in = (Bytef *)data.c_str();

    defstream.avail_out = data.size() + 1024;  // Add some buffer
    defstream.next_out = (Bytef *)malloc(defstream.avail_out);

    if (deflate(&defstream, Z_FINISH) != Z_STREAM_END) {
        std::cerr << "Failed to compress data." << std::endl;
        deflateEnd(&defstream);
        return;
    }

    // Write the compressed data to the output file
    compressedFile.write(reinterpret_cast<char *>(defstream.next_out), defstream.total_out);

    // Clean up
    deflateEnd(&defstream);
    free(defstream.next_out);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input_file> <output_file>" << std::endl;
        return 1;
    }

    std::string inputFileName = argv[1];
    std::string outputFileName = argv[2];

    compressFile(inputFileName, outputFileName);

    std::cout << "Compression completed successfully." << std::endl;

    return 0;
}
