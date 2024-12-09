// #include<iostream>
// int fibonacci(int n)
// {
//     int cnt;
//     int firstFib;
//     int secondFib;
//     int fib;

//     firstFib = 1;
//     secondFib = 1;
//     cnt = 2; /* n = 1 ╩Р n = 2 й╠льеп */

//     if (n == 1)
//         return 1;
//     else if (n == 2)
//         return 1;
//     else
//     {
//         while (cnt < n)
//         {
//             fib = firstFib + secondFib;
//             firstFib = secondFib;
//             secondFib = fib;
//             cnt = cnt + 1;
//         }
//     }
//     return fib;
// }

// void main(void)
// {
//     int n;
//     n = input();
//     output(fibonacci(n));
// }