import pypaq
import argparse
import os
from multiprocessing import Pool, cpu_count

BUFFER_SIZE = 10 * 1024 * 1024  # 10 MB buffer size, adjust as needed

def compress_chunk(chunk):
    return pypaq.compress(chunk)

def compress_large_file(input_file, output_file):
    with open(input_file, 'rb') as f:
        with Pool(cpu_count()) as pool:
            chunks = iter(lambda: f.read(BUFFER_SIZE), b'')
            compressed_chunks = pool.map(compress_chunk, chunks)

        with open(output_file, 'ab') as output_f:
            for compressed_chunk in compressed_chunks:
                output_f.write(compressed_chunk)

    print(f"Compression of {input_file} successful. Compressed file saved as {output_file}")

def main():
    parser = argparse.ArgumentParser(description="pypaq Compression Tool")
    parser.add_argument("input_file", help="Input file path")
    parser.add_argument("output_file", help="Output file path")

    args = parser.parse_args()

    compress_large_file(args.input_file, args.output_file)

if __name__ == "__main__":
    main()




# from pyPAQ import PAQ
# import argparse
# import os
# from multiprocessing import Pool, cpu_count

# BUFFER_SIZE = 10 * 1024 * 1024  # 10 MB buffer size, adjust as needed

# def compress_chunk(chunk):
#     return PAQ.compress(chunk)

# def compress_large_file(input_file, output_file):
#     with open(input_file, 'rb') as f:
#         with Pool(cpu_count()) as pool:
#             chunks = iter(lambda: f.read(BUFFER_SIZE), b'')
#             compressed_chunks = pool.map(compress_chunk, chunks)

#         with open(output_file, 'ab') as output_f:
#             for compressed_chunk in compressed_chunks:
#                 output_f.write(compressed_chunk)

#     print(f"Compression of {input_file} successful. Compressed file saved as {output_file}")

# def main():
#     parser = argparse.ArgumentParser(description="PAQ6 Compression Tool")
#     parser.add_argument("input_file", help="Input file path")
#     parser.add_argument("output_file", help="Output file path")

#     args = parser.parse_args()

#     compress_large_file(args.input_file, args.output_file)

# if __name__ == "__main__":
#     main()


# from pyPAQ import PAQ
# import argparse
# import os

# BUFFER_SIZE = 10 * 1024 * 1024  # 10 MB buffer size, adjust as needed

# def compress_large_file(input_file, output_file):
#     with open(input_file, 'rb') as f:
#         while True:
#             chunk = f.read(BUFFER_SIZE)
#             if not chunk:
#                 break

#             compressed_chunk = PAQ.compress(chunk)

#             with open(output_file, 'ab') as output_f:
#                 output_f.write(compressed_chunk)

#     print(f"Compression of {input_file} successful. Compressed file saved as {output_file}")

# def main():
#     parser = argparse.ArgumentParser(description="PAQ6 Compression Tool")
#     parser.add_argument("input_file", help="Input file path")
#     parser.add_argument("output_file", help="Output file path")

#     args = parser.parse_args()

#     compress_large_file(args.input_file, args.output_file)

# if __name__ == "__main__":
#     main()


# from pyPAQ import PAQ
# import argparse
# import os

# def compress_file(input_file, output_file):
#     with open(input_file, 'rb') as f:
#         data = f.read()

#     compressed_data = PAQ.compress(data)

#     with open(output_file, 'wb') as f:
#         f.write(compressed_data)

#     print(f"Compression successful. Compressed file saved as {output_file}")

# def decompress_file(input_file, output_file):
#     with open(input_file, 'rb') as f:
#         compressed_data = f.read()

#     decompressed_data = PAQ.decompress(compressed_data)

#     with open(output_file, 'wb') as f:
#         f.write(decompressed_data)

#     print(f"Decompression successful. Decompressed file saved as {output_file}")

# def main():
#     parser = argparse.ArgumentParser(description="PAQ6 Compression Tool")
#     parser.add_argument("mode", choices=["compress", "decompress"], help="Select mode: compress or decompress")
#     parser.add_argument("input_file", help="Input file path")
#     parser.add_argument("output_file", help="Output file path")

#     args = parser.parse_args()

#     if args.mode == "compress":
#         compress_file(args.input_file, args.output_file)
#     elif args.mode == "decompress":
#         decompress_file(args.input_file, args.output_file)

# if __name__ == "__main__":
#     main()
