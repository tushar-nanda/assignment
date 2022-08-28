// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the use
// #include<stdio.h>
// int main()
// {
//     int a[10],sum=0;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//         sum=sum+a[i];
//     }
//     printf("the sum is %d",sum);
    
//     return 0;
// }

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     float sum=0;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//         sum=sum+a[i];
//     }
//     printf("the avergae is %.2f",sum/10);
//     return 0;
// }

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     int sumeven=0,sumodd=0;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//         if (a[i]%2==0)
//         {
//             sumeven+=a[i];
//         }
//         else
//         sumodd+=a[i];
//     }
//     printf("the sum of odd number are %d and even are %d",sumodd,sumeven);
    
//     return 0;
// }

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
// #include<stdio.h>
// int main()
// {
//     int a[10],max;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     max=a[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if(max<a[i])
//         {
//             max=a[i];
//         }
//     }
//     printf("the max of all is %d",max);    
//     return 0;
// }

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user
// #include<stdio.h>
// int main()
// {
//     int a[10],min;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     min=a[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if(min>a[i])
//         {
//             min=a[i];
//         }
//     }
//     printf("the max of all is %d",min);    
//     return 0;
// }

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
// #include<stdio.h>
// int main()
// {
//     int a[10],temp;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     for (int i = 0; i < 10-1; i++)
//     {
//         for (int j = 1+i; j < 10; j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
        
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }

// 7. Write a program to find second largest in an array.Take array values from the user.
// #include<stdio.h>
// int main()
// {
//     int a[6],largest,s_largest;
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     largest=a[0];
//     s_largest=a[0];
//     for (int i = 1; i < 6; i++)
//     {
//         if (a[i>largest])
//         {
//             s_largest=largest;
//             largest=a[i];
//         }
//         else if (s_largest<a[i])
//         {
//             s_largest=a[i];
//         }
//     }
//     printf("%d",s_largest);
//     return 0;
// }

// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.
// #include<stdio.h>
// int main()
// {
//     int a[6];
//     int smallest,s_smallest;
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     smallest=a[0];
//     s_smallest=a[0];
//     for (int i = 1; i < 6; i++)
//     {
//         if (a[i]<smallest)
//         {
//             s_smallest=smallest;
//         }
//         else if (s_smallest>a[i])
//         {
//             s_smallest=a[i];
//         }
        
//     }
//     printf("the answer is %d",s_smallest);
//     return 0;
// }

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 9; i >= 0; i--)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int b[10];
//     for (int i = 0; i < 10; i++)
//     {
//         b[i]=a[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t",b[i]);
//     }
//     return 0;
// }