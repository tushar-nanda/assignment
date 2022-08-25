// 1. Write a function to calculate the area of a circle. (TSRS)
// #include<stdio.h>
// float area (float);
// int main()
// {
//     float radius,ar;
//     scanf("%f",&radius);
//     ar=area(radius);
//     printf("the area of circle is %.2f",ar);
//     return 0;
// }

// float area (float r)
// {
//     float A;
//     A=(22/7.0)*r*r;
//     return A;      
// }

// 2. Write a function to calculate simple interest. (TSRS)
// #include<stdio.h>
// float simple(float,float,float);
// int main()
// {
//     float si,p,r,t;
//     scanf("%f%f%f",&p,&r,&t);
//     si=simple(p,r,t);
//     printf("the simple interset is %.2f",si);
//     return 0;
// }

// float simple (float pr ,float ra ,float ti)
// {
//     return pr*ra*ti/100.0;
// }

// 3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
// #include<stdio.h>
// int evenodd(int);
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     printf("1 is for even and 0 is for odd \n%d",evenodd(a));
//     return 0;
// }

// int evenodd(int number)
// {
//     if(number%2==0)
//     return 1;
//     else
//     return 0;
// }
 
//  4. Write a function to print first N natural numbers (TSRN)
// #include<stdio.h>
// void natural(int);
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     natural(N);
//     return 0;
// }
// void natural(int n)
// {
//     int i=1;
//     while(i<=n)
//     {
//         printf("%d\t",i);
//         i++;
//     }
// }

// 5. Write a function to print first N odd natural numbers. (TSRN)
// #include<stdio.h>
// void oddnatural(int);
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     oddnatural(N);
//     return 0;
// }
// void oddnatural(int n)
// {
//     int i=1;
//     while(i<=n)
//     {
//         printf("%d\t",2*i-1);
//         i++;
//     }
// }

// 6. Write a function to calculate the factorial of a number. (TSRS)
// #include<stdio.h>
// int factorial (int);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",factorial(n));
//     return 0;
// }
// int factorial (int N)
// {
//     int fact=1,i=1;
//     while(i<=N)
//     {
//         fact=fact*i;
//         i++;
//     }
//     return fact;
// }

// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)
// #include<stdio.h>
// int ncr(int,int);
// int fact(int);
// int main()
// {
//     int n,r;
//     scanf("%d%d",&n,&r);
//     printf("the ncr is %d",ncr(n,r));
//     return 0;
// }
// int ncr(int N, int R)
// {
//     int result;
//     result=(fact(N))/(fact(N-R)*fact(R));
// }
// int fact(int no)
// {
//     int f=1,i;
//     for ( i = 1; i <= no; i++)
//     {
//         f=f*i;
//     }
//     return f;   
// }

// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)
// #include<stdio.h>
// int npr(int,int);
// int fact(int);
// int main()
// {
//     int n,r;
//     scanf("%d%d",&n,&r);
//     printf("the npr is %d",npr(n,r));
//     return 0;
// }
// int npr(int N, int R)
// {
//     int result;
//     result=(fact(N))/(fact(N-R));
// }
// int fact(int no)
// {
//     int f=1,i;
//     for ( i = 1; i <= no; i++)
//     {
//         f=f*i;
//     }
//     return f;   
// }

// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
// #include<stdio.h>
// int check(int,int);
// int main()
// {
//     int no,di;
//     scanf("%d%d",&no,&di);
//     check(no,di)==1?printf("found"):printf("not found");
//     return 0;
// }
// int check(int number,int digit)
// {
//     int rem;
//     while (number!=0)
//     {
//         rem=number%10;
//         if(rem==digit)
//         {
//             return 1;
//         }
//         number=number/10;
//     }
//     return 0;
// }

// 10. Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
// #include<stdio.h>
// void primefact(int);
// int main()
// {
//     int n=36;
//     primefact(n);
//     printf("\b.");
//     return 0;
// }
// void primefact(int N)
// {
//     int i=2;
//     while(N!=1)
//     {
//         while(N%i==0)
//         {
//             N=N/i;
//             printf("%d ,",i);
//         }
//         i++;
//     }
// }