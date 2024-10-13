// #include <iostream>
// #include <vector>

// int main()
// {
//     int s, p1, p2, f, v;
//     std::cin >> s >> p1 >> p2 >> f >> v;
//     long long p{};

//     if (s * f <= v) {
//         if (s * f * 2 <= v) {
//             std::cout << 0;
//         }
//         else {
//             if (p1 <= p2) {
//                 p += p1 * (2 * s * f - v);
//             }
//             else
//                 p += p2 * (2 * s * f - v);
//         }
//    }
//     else {
//         if (p1 <= p2) {
//             p += p1 * (2 * s * f - v);
//         }
//         else {
//             p += p1 * (s * f - v) + p2 * (s * f);
//         }
//     }
//     std::cout << p;
//     return 0;
// }


// void func(int value) //что это такое?
// {
//     const int a = [value]() {
//         if(value == 1)
//         {
//             return 10;
//         }
//         if(value == 2)
//         {
//             return 20;
//         }
//         return 100;
//     }();
// }


#include <iostream>
 
int main() {
    int a[3][4] = { {1, 2, 3, 4} , {5, 6, 7, 8}, {9, 10, 11, 12} };
    int n = sizeof(a) / sizeof(a[0]);         // число строк
    int m = sizeof(a[0]) / sizeof(a[0][0]);   // число столбцов
      
    int *end = a[0] + n * m - 1;    // указатель на самый последний элемент 0 + 3 * 4 - 1 = 11
    for (int *ptr = a[0], i = 1; ptr <= end; ptr++, i++) {
        std::cout << *ptr << "\t";
        // если остаток от целочисленного деления равен 0,
        // переходим на новую строку
        if (i % m == 0) {
            std::cout << std::endl;
        }
    }
     
    return 0;
}