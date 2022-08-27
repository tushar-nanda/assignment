// 1. Write a recursive function to print first N natural numbers
// #include<stdio.h>
// void printn(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printn(n);
//     return 0;
// }
// void printn(int n)
// {
//     if(n>=1)
//     {
//         printn(n-1);
//         printf("%d\t",n);
//     }
// }

// 2. Write a recursive function to print first N natural numbers in reverse order
// #include<stdio.h>
// void printn(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printn(n);
//     return 0;
// }
// void printn(int n)
// {
//     if(n>=1)
//     {
//         printf("%d\t",n);
//         printn(n-1);
//     }
// }

// 3. Write a recursive function to print first N odd natural numbers
// #include<stdio.h>
// void printoff(int);
// int main()
// {
//     int n=5;
//     printodd(n);
//     return 0;
// }
// void printodd(int n)
// {
//     if(n==0)
//     return;
//     printodd(n-1);
//     printf("%d",2*n-1);
// }

// 4. Write a recursive function to print first N odd natural numbers in reverse order
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printodd(n);
//     return 0;
// }
// void printodd(int n)
// {
//     if(n==0)
//     return ;
//     printf("%d\t",2*n-1);
//     printodd(n-1);
// }

// 5. Write a recursive function to print first N even natural numbers
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printeven(n);
//     return 0;
// }
// void printeven(int n)
// {
//     if(n==0)
//     return ;
//     printeven(n-1);
//     printf("%d\t",2*n);
// }

// 6. Write a recursive function to print first N even natural numbers in reverse order
// #include<stdio.h>
// void printeven(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printeven(n);
//     return 0;
// }
// void printeven(int n)
// {
//     if(n==0)
//     return ;
//     printf("%d\t",2*n);
//     printeven(n-1);
// }

// 7. Write a recursive function to print squares of first N natural numbers
// #include<stdio.h>
// void squares(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     squares(n);
//     return 0;
// }
// void squares(int n)
// {
//     if(n==0)
//     return ;
//     squares(n-1);
//     printf("%d\t",n*n);
// }

// 8. Write a recursive function to print binary of a given decimal number
// #include<stdio.h>
// void dtob(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     dtob(n);
//     return 0;
// }
// void dtob(int n)
// {
//     if(n>0)
//     {
//         dtob(n/2);
//         printf("%d",n%2);
//     }
// }

// 9. Write a recursive function to print octal of a given decimal number
// #include<stdio.h>
// void dtoo(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     dtoo(n);
//     return 0;
// }
// void dtoo(int n)
// {
//     if(n>0)
//     {
//         dtoo(n/8);
//         printf("%d",n%8);
//     }
// }

// 10. Write a recursive function to print reverse of a given number
// #include<stdio.h>
// #include<math.h>
// int rev(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the resverse is %d",rev(n));
//     return 0;
// }
// int rev( int n)
// {
//     if(n>0)
//     {
//         return (n%10)*pow(10,(int)log10(n))+ rev(n/10);
//     }
// }