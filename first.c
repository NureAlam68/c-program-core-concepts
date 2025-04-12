// #include <stdio.h>
// int main() {
//     printf("Hello, World!!!\n");
//     printf("This is my first C program\n");
//     printf("I am learning C programming");
//     return 0;
// } 

// variable declaration and initialization
// #include <stdio.h>
// int main() {
//     int a = 10; // integer variable
//     float b = 20.5; // float variable
//     char c = 'A'; // character variable

//     printf("Integer: %d\n", a);
//     printf("Float: %.2f\n", b);
//     printf("Character: %c\n", c);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     long long int a = 1234567890123456789; // long long integer variable
//     printf("Long Long Integer: %lld\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     double a = 1343523.455656; // double variable
//     printf("Double: %lf\n", a); // print double with 2 decimal places
// }

#include <stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c", &a, &b, &c, &d);
    printf("%d\n%lld\n%.2f\n%c", a, b, c, d);
    return 0;
}