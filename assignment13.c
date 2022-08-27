// 1. Write a recursive function to calculate sum of first N natural numbers
// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the sum is %d",sum(n));
//     return 0;
// }
// int sum(int n)
// {
//     if(n==0)
//     return 0;
//     return n+sum(n-1);
// }

// 2. Write a recursive function to calculate sum of first N odd natural numbers
// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the sum of N odd natural number is %d",sum(n));
//     return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//     return 1;
//     return (2*n-1)+sum(n-1);
// }

// 3. Write a recursive function to calculate sum of first N odd natural number
// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the sum of N odd natural number is %d",sum(n));
//     return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//     return 1;
//     return (2*n-1)+sum(n-1);
// }

// 4. Write a recursive function to calculate sum of squares of first n natural numbers
// #include<stdio.h>
// int sums(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the sum is %d",sums(n));
//     return 0;
// }
// int sums(int n)
// {
//     if(n==1)
//     return 1;
//     return (n*n)+sums(n-1);
// }

// 5. Write a recursive function to calculate sum of digits of a given number
// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n=123;
//     printf("the sum is %d",sum(n));
//     return 0;
// }
// int sum(int n)
// {
//     if(n>0)
//     {
//         return sum(n/10)+n%10;
//     }
// }

// 6. Write a recursive function to calculate factorial of a given number
// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the factorial is %d",fact(n));
//     return 0;
// }
// int fact(int n)
// {
//     if(n==0 || n==1)
//     return 1;
//     return n*fact(n-1);
// }

// 7. Write a recursive function to calculate HCF of two numbers
// #include<stdio.h>
// int hcf(int,int)
// int main()
// {
//     int result,a,b;
//     scanf("%d%d",&a,&b);
//     result=a>b?hcf(a,b):hcf(b,a);
//     printf("%d",result);
//     return 0;
// }
// int hcf(int a,int b)
// {
//     if(b==0)
//     {
//         return a;
//     }
//     return hcf(b,a%b);
// }

// 8. Write a recursive function to print first N terms of Fibonacci series
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     printf("%d\t",fibo(i));
//     return 0;
// }
// int fibo(int n)
// {
//     if(n==0 || n==1)
//     return n;
//     return fibo(n-1)+fibo(n-2);
// }

//9. Write a program in C to count the digits of a given number using recursion.
// #include<stdio.h>
// int digit(int);
// int main()
// {
//     int n=245;
//     printf("%d",digit(n));
//     return 0;
// }
// int digit(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
    
//     return 1+digit(n/10);
// }

// 10. Write a program in C to calculate the power of any number using recursion
// #include<stdio.h>
// int power(int,int);
// int main()
// {
//     int a=2,b=3;
//     printf("the result is %d",power(2,3));
//     return 0;
// }
// int power(int a,int b)
// {
//     if(b==0)
//     return 1;
//     return a*power(a,b-1);
// }