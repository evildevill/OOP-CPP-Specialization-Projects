// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// namespace SpaceA
// {
//     int A;
// } // namespace s1
// namespace SpaceB
// {
//     int A;
// }
// namespace S
// {
//     int B = A + 2;
// } // namespace S2

// using namespace SpaceA, SpaceB;

// int main()
// {

//     string s = "AB";
//     s.append(s).push_back(s[s.length() - 1]);
//     cout << s << endl;

//     int i = 2;
//     float f = 5.8;

//     f = static_cast<int>(f);
//     i = static_cast<float>(i);
//     cout << f/i;
//     SpaceA::A = SpaceB::A = 1;
//     std::cout << A + 1;

//     int i = 2;
//     string s = "2";
//     cout << s + i;

//     short s = 1;
//     int i = 2;
//     float f = 4.4;
//     double d = 8.8;

//     cout << s/i + f/i + d/s;

//     short s = 1;
//     int i = 2;
//     float f = 4.4;
//     double d = 6.6;

//     cout << i/static_cast<float>(s) + int(f)/i + (long)d/s << endl;
//     return 0;

//     int i = 2;
//     float f = 4.4;

//     cout << f % static_cast<float>(i) << endl;

//     string s = "0123";
//     cout << s.substr(1, 3).substr(2).substr();

//     string s1 = "aleph";
//     string s2 = "alpha";
//     string s;

//     s1.swap(s2);
//     s2.swap(s);
//     s.swap(s2);
//     cout << s2;
//     int * it[3];
//     for (int i = 0; i < 3; i++)
//     {
//         it[i] = new int [i + 1];
//         for (int j = 0; j < i + 1; j++)
//         {
//             it[i][j] = 10 * i + j;
//         }
//     }
//     cout << it[2][4];
//     for (int i = 0; i < 3; i++)
//     {
//         delete [] it[i];
//     } 

//     string s1 = "Ab";
//     string s2 = "Abc";

//     cout << s1.compare(s2) << endl;
    

//     vector<float *> ft = { new float[3], new float[3], new float[3] };
//     float *p = nullptr;

//     for (int i = 0; i < 3; i++)
//     {
//         p = ft[i];
//         *p = p[1] = *(p + 2) = 10 * i;
//     }

//     cout << ft[1][1];
//     delete [] ft[0];
//     delete [] ft[1];
//     delete [] ft[2];

//     S::A = S::A + 1;

//     {
//         using namespace S;
//         ++B;
//     }
//     cout << S::B << S::A << endl;
//     {
//         using namespace S1;
//         S2::A = A + 1;
//     }
//     {
//         using namespace S2;
//         S1::A = A + 1;
//     }

//     cout << S1::A << S2::A << endl;

//     vector<string> t = {"alpha", "beta", "gamma"};
//     int *cnt = new int[3], *p = &cnt[0];

//     for (int i = 0; i < t.size(); i++)
//     {
//         *p++ = t[i].length();
//     }
//     cout << cnt[0] << cnt[1] << cnt[2] << endl;
//     delete [] cnt;

//     string s1 = "1";
//     string s2 = "12";

//     cout << s1.compare(s2) << endl;

//     cout << s << "b" + "c";

//     string s = "a";

//     cout << s << "b" + "c";
//     string s = "ABC";
//     for (int i = 1; i < s.length(); i += 2)
//     {
//         s[i - 1] = s[i] + 'a' - 'A';
//     }
//     cout << s;
// }

// struct A
// {
//     int a;
//     char b;
// };

// struct B
// {
//     char a;
//     int b;
// };

// int main()
// {
//     A a = {2, 'A'};
//     B b = {'C', 1};

//     cout << b.a - a.b - b.b + a.a << endl;
// }

// struct A
// {
//     int a;
//     float b;
// };

// struct B
// {
//     int b;
//     float a;
// };

// struct C
// {
//     A a;
//     B b;
// };

// int main()
// {
//     C c1 = {1, 2, 3, 4}, c2 = {5, 6, 7, 8};
//     cout << c1.b.a + c2.a.b << endl;
// }

// vector<vector<float>> arr = {
//     {.1, 1., 10.},
//     {10., .1, 1.},
//     {.1, 10., 1.}};

// float x = 1.;
// for (int i = 0; i < 3; i++)
// {
//     x *= arr[i][i];
// }
// cout << x << endl;

// vector<int> t(5);

// for (int i = 0; i < 5; i++)
//     t[i] = 2 * i * i;

// cout << t[4] / t[1] << endl;

// int i = 1, j = 2, k;

// i = i << j;
// j = j << i;
// k = j >> i;

// cout << k << endl;

// float a;
// int i = 0;

// for (a = .009; a < 1e2; a *= 1e1)
//     i++;
// cout << i << endl;

// int i = 1, j = 2;

// if (i > j && j > i)
// {
//     i++;
// }
// if (i > j || j > i)
// {
//     j++;
// }
// if (i | j)
// {
//     i++;
// }
// if (i & j)
// {
//     j++;
// }

// cout << i * j << endl;

// int i = 10;
// float a = -1.0;

// while (i < 0)
// {
//     a = a + 10.0 * a / -10;
//     --i;
// }
// cout << i << endl;

// int i = 2;
// float a = 3;
// bool f1 = i > a, f2 = a > i, f3 = a / i > i / a;

// if (f3)
//     if (f2)
//         i += 1;
//     else
//         i += 2;
// else if (f1)
//     i += 3;
// else
//     i += 4;

// cout << i << endl;

// int i = 10;
// float a = 10.0;

// while (i > a)
// {
//     i /= 2;
//     a /= 10;
// }
// cout << a << endl;


