// for 6,5,4,3,2,1
// #include <iostream>
// using namespace std;

// int print_num(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << '\n';
//         return 0;
//     }
//     print_num(n - 1);
//     cout << n << '\n';
// }

// int main()
// {
//     print_num(6);

//     return 0;
// }

// // for 1,2,3,4,5,6
 #include <iostream>
 using namespace std;

 int print_num(int n)
 {
     if (n == 1)
     {
         cout << "1" << '\n';
         return 0;
     }
     print_num(n - 1);
     cout << n << '\n';
 }

 int main()
 {
     print_num(6);

     return 0;
 }
