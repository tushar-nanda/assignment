// 1. Write a program to calculate sum of first N natural numbers
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+i;
//     }
//     printf(" the sum is %d",sum);
    
//     return 0;
// }

// 2. Write a program to calculate sum of first N even natural numbers
// #include<stdio.h>
// int main()
// {
//     int sum=0,n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+2*i;
//     }
//     printf("the sum is %d",sum);
    
//     return 0;
// }

// 3. Write a program to calculate sum of first N odd natural numbers
// #include<stdio.h>
// int main()
// {
//     int sum=0,n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+(2*i)-1;
//     }
//     printf("the sum is %d",sum);   
//     return 0;
// }

// 4. Write a program to calculate sum of squares of first N natural numbers
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+i*i;
//     }
//     printf("the sum is %d",sum);
//     return 0;
// }

// 5. Write a program to calculate sum of cubes of first N natural numbers
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+i*i*i;
//     }
//     printf("the sum is %d",sum);
//     return 0;
// }

// 6. Write a program to calculate factorial of a number
// #include<stdio.h>
// int main()
// {
//  int fact=1,n;
//  scanf("%d",&n);
//  if (n>0){
//  while(n!=1){
//     fact=fact*n;
//     n--;
//  }}
//  printf("the factorial is %d",fact);
// return 0;
// }

// 7. Write a program to count digits in a given number
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a,count=0;
//     scanf("%d",&a);
//     while (a!=0)
//     {
//     a=a/10;
//     count++;
//     }
//     printf("the number of digits is %d", count);
//     return 0;
// }

// 8. Write a program to check whether a given number is a Prime number or
// not
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int flag=0,n;
//     scanf("%d",&n);
//     for (int i = 2; i < sqrt(n); i++)  
//     {
//         if (n%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1)
//         printf("not prime");
//     else
//     printf("prime number");
//     return 0;
// }

// 9. Write a program to calculate LCM of two numbers
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     for (int i = 1; i <= a*b; i++)
//     {
//         if(i%a==0 && i%b==0)
//         {
//             printf("the LCM of %d and %d is %d",a,b,i);
//             break;
//         }
//     }
//     return 0;
// }

// 10. Write a program to reverse a given number
// #include<stdio.h>
// int main()
// {
//     int n,remainder,reverse=0;
//     scanf("%d",&n);
//     while (n!=0)
//     {
//         remainder=n%10;
//         n=n/10;
//         reverse=reverse*10+remainder;
//     }
//     printf("the revrse is %d",reverse);
    
//     return 0;
// }
