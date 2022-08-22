// 1. Write a program to find the Nth term of the Fibonnaci series.
// #include<stdio.h>
// int main()
// {
//     int prev=0,curr=1,next,n=5;
//     for (int  i = 1; i < n-1; i++)
//     {
//         next=prev+curr;
//         prev=curr;
//         curr=next;
//     }
//     printf("the %dth term of the fibonaaci seires is %d",n,next);
//    return 0;
// }

// 2. Write a program to print first N terms of Fibonacci series
// #include<stdio.h>
// int main()
// {
//     int prev=0,curr=1,next,n=5;
//     printf("%d\t",prev);
//     for (int i = 1; i < n-1; i++)
//     {
//         next=prev+curr;
//         printf("%d\t",next);
//         prev=curr;
//         curr=next;
//     }
//     return 0;
// }

// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
// #include<stdio.h>
// int main()
// {
//     int pre=0,flag=0,cur=1,next,n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         next=pre+cur;
//         pre=cur;
//         cur=next;
//         if(next==n){
//         flag=1;
//         break;
//         }
//     }
//     if (flag==1 || n==0  )
//     {
//         printf("yes it is in fibonacci series");
//     }
//     else
//     printf("not a fibonacci number");   
//     return 0;
// }

// 4. Write a program to calculate HCF of two numbers
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     for (int i = (a<b?a:b); i >= 1; i--)
//     {
//         if(a%i==0 && b%i==0)
//         {
//             printf("hcf of the entered number is %d",i);
//             break;
//         }
//     }
    
//     return 0;
// }

// 5. Write a program to check whether two given numbers are co-prime
// numbers or no
// #include<stdio.h>
// int main()
// {
//     int a,b,i;
//     scanf("%d%d",&a,&b);
//     for ( i = (a<b?a:b) ; i >=1; i--)
//     {
//         if (a%i==0 && b%i==0)
//         {
//             break;
//         }
//     }
//     if (i==1){
//         printf("the numbers are co prime ");
//     }
//     else 
//     printf("not co prime");
//     return 0;
// }

// 6. Write a program to print all Prime numbers under 100
// #include<stdio.h>
// int main()
// {
//     int i,n,flag=0,count=0;
//     for ( n = 2; n <= 100; n++)
//     {
//         flag=0;
//         for ( i = 2; i <= n/2; i++)
//         {
//             if (n%i==0)
//             {
//                 flag=1;
//             }
            
//         }
//         if(flag==0)
//         {
//             printf("%d\t",n);
//             count++;
//         }
        
//     }
//     // printf("the number of prime number is %d",count);
    
//     return 0;
// }

// 7. Write a program to print all Prime numbers between two given numbers
// #include<stdio.h>
// int main()
// {
//     int i,n,flag=0,count=0;
//     int a,b;
//     scanf("%d%d",&a,&b);
//     for ( n = a; n <= b; n++)
//     {
//         flag=0;
//         for ( i = 2; i <= n/2; i++)
//         {
//             if (n%i==0)
//             {
//                 flag=1;
//             }
//         }
//         if(flag==0)
//         {
//             printf("%d\t",n);
//             count++;
//         }
//     }
//     // printf("the number of prime number is %d",count);   
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number
// #include<stdio.h>
// int main()
// {
//     int i,n,flag=0;
//     int a;
//     scanf("%d",&a);
//     for (int i = 2; i < a/2; i++)
//     {
//         if(a%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0)
//     {a=a+1;
//     }
//     for ( n = a; ; n++)
//     {
//         flag=0;
//         for ( i = 2; i <= n/2 ; i++)
//         {
//             if(n%i==0)
//             flag=1;
//         }
//         if(flag==0)
//         {
//             printf("%d",n);
//             break;
//         }
//     }
//     return 0;
// }

// 9. Write a program to check whether a given number is an Armstrong number
// or no
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n1,n2,nod=0,arm=0,rem;
//     scanf("%d",&n1);
//     n2=n1;
//     while (n1!=0)
//     {
//         n1=n1/10;
//         nod++;
//     }
//     n1=n2;
//     while (n1!=0)
//     {
//         rem=n1%10;
//         n1=n1/10;
//         arm=arm+pow(rem,nod);
//     }
//     if(arm==n2)
//     {
//         printf("its a armstrong number");
//     }
//     else
//     printf("not a arm stron number");    
//     return 0;
// }

// 10. Write a program to print all Armstrong numbers under 1000
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n1,n2,nod,arm,rem;
//     for(int n1=1;n1<=1000;n1++)
//     {
//         nod=0;
//         arm=0;
//         rem=0;
//         n2=n1;
//         while (n1!=0)
//             {
//                 n1=n1/10;
//                 nod++;
//             }
//         n1=n2;
//         while (n1!=0)
//         {
//             rem=n1%10;
//             n1=n1/10;
//             arm=arm+pow(rem,nod);
//         }
//         if(arm==n2)
//         {
//         printf("%d \t",arm);
//         }
//         n1=n2;

//     }
//     return 0;
// }
