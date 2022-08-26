// 1. Write a function to calculate LCM of two numbers. (TSRS)
// #include<stdio.h>
// int lcm(int,int);
// int lcm(int x,int y)
// {
//     for(int i=(x>y)?x:y;i<=x*y;i++)
//     {
//         if(i%x==0 && i%y==0)
//         {
//             return i;
//         }
//     }
// }
// int main()
// {
//     int a,b;
    // scanf("%d%d",&a,&b);
//     printf("the LCm is %d",lcm(a,b));
//     return 0;
// }

// 2. Write a function to calculate HCF of two numbers. (TSRS)
// #include<stdio.h>
// int hcf(int,int);
// int main()
// {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("the HCF is %d",hcf(a,b));
//     return 0;
// }
// int hcf(int x,int y)
// {
//     for (int i = x>y?x:y; i >= 1; i--)
//     {
//         if(x%i==0 && y%i ==0)
//         {
//             return i;
//         }
//     }
// }

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
// #include<stdio.h>
// int prime (int);
// int main()
// {
//     int n=12;
//     prime(n)==1?printf("prime"):printf("not prime");
//     return 0;
// }
// int prime (int N)
// {
//     int flag;
//     for(int i=2;i<=N/2;i++)
//     {
//         flag=0;
//         if(N%i==0)
//         {
//             return 0;
//         }
//         else flag=1;
//     }
// if (flag==1)
// {
//     return 1;
// }
// }

// 4. Write a function to find the next prime number of a given number. (TSRS)
// #include<stdio.h>
// int primenext(int);
// int main()
// {
//     int n=8;
//     printf("the next prime number is %d",primenext(n+1));
//     return 0;
// }
// int primenext(int n)
// {
//     int flag;
//     for (int i = n; ; i++)  
//     {
//         for (int j = 2; j <= i/2; j++)
//         {
//             flag=0;
//             if(i%j==0)
//             {
//                 break;
//             }
//             else
//             flag=1;
//         }
//         if(flag==1)
//         {
//             return i;
//         }
//     }
// }

// 5. Write a function to print first N prime numbers (TSRN)
// #include<stdio.h>
// void nextprimeuptoN(int );
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     nextprimeuptoN(N);
//     return 0;
// }
// void nextprimeuptoN(int n)
// {
//     int  flag,count=0;
//     for(int j=n+1; ; j++)
//     {
//         flag=0;
//         for (int i = 2; i <= j/2; i++)
//     {
//         if(j%i==0)
//         flag=1;
//     }
//     if (flag==0)
//     {
//         printf("%d\t",j);
//         count++;
//         if(count==n)
//         break;
//     }

//     }
// }

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
// #include<stdio.h>
// void primenumber(int,int);
// int main()
// {
//     int x,y;
//     scanf("%d%d",&x,&y);
//     primenumber(x,y);
//     return 0;
// }
// void primenumber(int a,int b)
// {
//     int n,flag=0;
//     for(n=a;n<=b;n++)
//     {
//         flag=0;
//     for (int  i = 2; i < n/2; i++)
//        {
//          if(n%i==0)
//             {
//                 flag=1;
//                 break;
//             }
//        }
//        if(flag==0)
//        printf("%d\t",n);
//     }
// }

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
// #include<stdio.h>
// void fibo(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     fibo(n);
//     return 0;
// }
// void fibo(int n)
// {
//     int prev=0,cur=1,next;
//     if(n==1)
//     {
//         printf("%d",prev);
//        goto L;
//     }
//     printf("%d\t%d\t",prev,cur);
//     for (int i = 0; i < n-2; i++)
//     {
//         next=cur+prev;
//         printf("%d\t",next);
//         prev=cur;
//         cur=next;
//     }
//     L:
     
//     return 0;
// }


// 8. Write a function to print PASCAL Triangle. (TSRN)
// #include<stdio.h>
// int fact(int n)
// {
//     int f=1;
//     while (n>=1)
//     {
//         f=f*n;
//         n--;
//     }
//     return f;
// }
// int combi(int n,int r)
// {
//     return (fact(n)/(fact(n-r)*fact(r)));
// }
// void pascal(int line)
// {
//     int k,r;
//     for (int i = 1; i <= line; i++)
//     {
//         k=1;
//         r=0;
//         for (int j = 1; j <= 2*line-1; j++)
//         {
//             if (line+1-i<=j && j<=line-1+i && k)
//             {
//                 printf("%2d",combi(i-1,r));
//                 k=0;
//                 r++;
//             }
//             else
//             {
//                 printf("  ");
//                 k=1;
//             }          
//         }
//         printf("\n");        
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     pascal(n);
//     return 0;
// }

// 9. Write a program in C to find the square of any number using the function
// #include<stdio.h>
// int square(int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the square of the given no is %d",square(n));
//     return 0;
// }
// int square(int N)
// {
//     return N*N;
// }

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
// #include<stdio.h>
// int fact(int n)
// { 
//     int f=1;
//     while(n!=1)
//     {
//         f=f*n;
//         n--;
//     }
//     return f;
// }
// int series(int n)
// {
//     int sum=0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+fact(i)/i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("the sum of series is %d",series(n));
//     return 0;
// }
