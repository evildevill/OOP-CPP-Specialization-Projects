// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// // int main(){
// //     int a = 2, b = a >> 1;
// //     int c = b >> a;
// //     int d = 1 << c;
// //     int e = d << d;

// //     cout << e;
// // }

// // int main(){
// //     short s = 1;
// //     int i = 2;
// //     float f = 4.;
// //     cout << i/static_cast<float>(s) + i/2 + i/f;
// //     return 0;
// // }

// // int main(){
// //     int i = 2;
// //     float f = 1;

// //     cout << (static_cast<float>(i) >> 1);
// // }

// // int op(int i, int j = 1){
// //     return i * j;
// // }

// // int op(char a, char b){
// //     return b - a;
// // }

// // int op(float x, float y){
// //     return x / y;
// // }

// // int main(){
// //     cout << op(2) << op('c', 'a') << op(4.f, 2.f);
// // }

// // float combine(float x1 = 0.0, float x2 = 1.0){
// //     return x2 + x1;
// // }

// // int main (){
// //     cout << combine() + combine(1.) + combine(2., 3.);
// // }

// // int main()
// // {
// //     int i = 0, k = 1;

// //     while (i == 0)
// //     {
// //         if (k > 1)
// //         {
// //             i = k;
// //         }
// //         ++k;
// //     }
// //     cout << k;
// // }

// // int main()
// // {
// //     int k = 3;
// //     if (k > 0)
// //     {
// //         if (k != 3)
// //         {
// //             k--;
// //         }
// //         if (k == 3)
// //             k++;
// //     }
// //     if (k < 0)
// //     {
// //         k = 5;
// //     }
// //     cout << k;
// // }

// // What is the output of the following snippet?
// // #include <iostream>
// // using namespace std;
// // char dol(char *x)
// // {
// //     return *x;
// // }
// // char *do2(char *y)
// // {
// //     return y;
// // }
// // char *do3(char &z)
// // {
// //     return &z;
// // }

// // int main()
// // {
// //     char sign = '1';
// //     cout << dol(do2(do3(sign)));
// // }

// // void swap(float *x, float *y)
// // {
// //     float z = *x;
// //     *x = *y;
// //     *y = z;
// // }

// // int main()
// // {
// //     vector<float> t = {3., 2., 1.};
// //     swap(&t[0], &t[2]);
// //     cout << t[1];
// // }

// // int main()
// // {
// // string s = "123";
// // s.append(s.substr(2)).push_back(s[s.length() - 2]);
// // cout << s;

// //     // bool b1 = !true;
// //     // bool b2 = !b1 && false;
// //     // bool b3 = b2 || true;
// //     // if (b3)
// //     //     cout << "true";
// //     // else
// //     //     cout << "false";

// //     int i = 2;
// //     string s = "2";
// //     cout << s == i;
// // }

// // int main()
// // {
// // int i = 2;
// // float f = 1;
// // cout << (static_cast<float>(i) >> 1);
// // string s = "123";
// // s.append(s.substr(2)).push_back(s[s.length() - 2]);
// // cout << s;
// // int i = 2, j = i++, k = i++;
// // cin >> i;
// // cout << k - i << j - i;

// //
// // int i = 2;
// // string s = "2";
// // cout << s == i;

// // string s1 = "brick";
// // string s2 = "block";
// // string s;
// // s1.swap(s2);
// // s2.swap(s);
// // s.swap(s2);
// // cout << s1;

// // int main()
// // {

// // }

// // int main()
// // {

// //     /

// // }

// // namespa/

// int main()
// {

//     vector<float *> ft = {new float[1], new float[1], new float[1]};
//     for (int i = 0; i < 3; i++)
//     {
//         float *p = ft[i];
//         *p = i;
//     }
//     cout << *ft[1];
//     for (int i = 0; i < 3; i++)
//     {
//         delete[] ft[i];
//     }

//     // int i, k = 1;
//     // for (i = 0; i < 3; i += 2)
//     // {
//     //     k++;
//     // }
//     // cout << k;

//     // Universe::Galaxy *= 2;
//     // {
//     //     using namespace Universe;
//     //     Planet++;
//     // }
//     // cout << Universe::Galaxy << Universe::Planet;

//     // vector<char> text(5);

//     // char *char1 = text.data() + 2, *char2 = char1  + 2;
//     // cout  << char2 - text.data();

//     //     double eval(double x)
//     //     {
//     //         return x / (.5 * x);
//     //     } // Add a semicolon here

//     //     void use(double n)
//     //     {
//     //         int v = 1 / n;
//     //         v = eval(v);
//     //         cout << v;
//     //     }
//     // }
//     // int main()
//     // {
//     //     use(1.f);
//     // }

//     // int a = 0x02, b = 001;
//     // int c = a ^ b;
//     // int d = c | a;
//     // int e = d & 0;
//     // cout << e;

//     // string replicate(string s = "x", int r = 1)
//     // {
//     //     string t;
//     //     while (r--)
//     //         t += s;
//     //     return t;
//     // }

//     // int main()
//     // {
//     //     string pattern = "a";
//     //     cout << replicate(pattern);
//     // }

//     //     int i = 2, j = i++, k = i++;
//     //     cin >> i;
//     //     cout << k - i << j - i;

//     // bool b1 = !true;
//     // bool b2 = !b1 && false;
//     // bool b3 = b2 || true;
//     // if (b3)
//     //     cout << "true";
//     // else
//     //     cout << "false";

//     // int i = 1, k = i << 1;

//     // switch (k)
//     // {
//     // case 1:
//     //     i += 1;
//     //     break;
//     // case 2:
//     //     i += 2;
//     //     break;
//     // default:
//     //     i += 3;
//     // }
//     // cout << i;

//     // int i = 1, k = i & 0;
//     // do
//     // {
//     //     k++;
//     //     if (k > 1)
//     //         i = k;
//     // } while (i < 2);
//     // cout << k;

//     // vector<double> arr = {1e-1, 1e0, 1e1};
//     // double *ptr = arr.data() + 2;
//     // cout << arr[1] - *ptr;
// }