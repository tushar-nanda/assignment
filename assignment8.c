// q1
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j<=i)
//             {
//                 printf("*");
//             }    
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q2
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j<= 5; j++)
//         {
//             if (6-i<=j)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q3
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j<= 5; j++)
//         {
//             if (j<=6-i)
//             {
//                 printf("*");
//             }
            
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

// Q4
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j<= 5; j++)
//         {
//             if (i<=j)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

// Q5
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j<= 9; j++)
//         {
//             if (6-i<=j && j<=i+4)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");        
//     }
//     return 0;
// }

// Q6
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j<= 9; j++)
//         {
//             if (i<=j && j<=10-i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
            
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

// Q7
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j<= 10; j++)
//         {
//             if (7-i<=j && j<=i+4)
//             {
//                 printf(" ");
//             }
//             else
//             printf("*");
            
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

// Q8
// #include<stdio.h>
// int main()
// {
//     int k;
//     for (int i = 1; i <= 4; i++)
//     {
//         k=1;
//         for(int j=1;j<=7;j++)
//         {
//             if(5-i<=j && j<=3+i)
//             {
//                 printf("%d",k);
//                 j<4?k++:k--;
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9
// #include<stdio.h>
// int main()
// {
//     int k;
//     for (int i = 1; i <= 4; i++)
//     {
//         k=1;
//         for (int j = 1; j <= 7; j++)
//         {
//             if(i<=j && j<=8-i)
//             {
//                 printf("%d",k);
//                 j<4?k++:k--;
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     } 
//     return 0;
// }

// q10
// #include<stdio.h>
// int main()
// {
//     int k;
//     for (int i = 1; i <= 4; i++)
//     {
//         k=1;
//         for (int j = 1; j<= 7; j++)
//         {
//             if (j<=5-i || 3+i<=j)
//             {
//                 printf("%d",k);
//                 j<4?k++:k--;
//             }
//             else
//             {printf(" ");
//             if(j==4)
//             k--;
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// Q11
// #include<stdio.h>
// int main()
// {
//     char k;
//     for (int i = 1; i <= 4; i++)
//     {
//         k='A';
//         for(int j=1;j<=7;j++)
//         {
//             if(5-i<=j && j<=3+i)
//             {
//                 printf("%c",k);
//                 j<4?k++:k--;
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// q12
// #include<stdio.h>
// int main()
// {
//     char k;
//     for (int i = 1; i <= 4; i++)
//     {
//         k='A';
//         for (int j = 1; j<= 7; j++)
//         {
//             if (i<=j && j<=8-i)
//             {
//                 printf("%c",k);
//                 j<4?k++:k--;
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");        
//     }
//     return 0;
// }

// q13
// #include<stdio.h>
// int main()
// {
//     char k;
//     for (int i = 1; i <= 7; i++)
//     {
//         k='A';
//         for (int j = 1; j<= 13; j++)
//         {
//             if (j<=8-i || 6+i<=j)
//             {
//                 printf("%c",k);
//                 j<7?k++:k--;
//             }
//             else{
//             printf(" ");
//             if(j==7)
//             k--;
//             }
//         }
//         printf("\n");        
//     }
//     return 0;
// }

// q14
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(j<=i)
//                 { if(j==1 ||i==j || i==5)
//                     printf("*");
//                   else
//                   printf(" ");
//                 }
                
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// q15
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(6-i<=j)
//                 { if(j==5 ||6-i ==j|| i==5)
//                     printf("*");
//                   else
//                   printf(" ");
//                 }
                
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// q16
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(6-i<=j && j<=4+i)
                
//                 {
//                     if(j==6-i || j== 4+i || i==5)
//                     printf("*");
//                     else
//                     printf(" ");
//                 }
//             else
//                 printf(" ");
//         }
//         printf("\n");
            
//     }
//     return 0;
// }

// q17
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(i<=j && j<=10-i)
                
//                 {
//                     if(j==10-i || j==i || i==1)
//                     printf("*");
//                     else
//                     printf(" ");
//                 }
//             else
//                 printf(" ");
//         }
//         printf("\n");
            
//     }
//     return 0;
// }

// q18
// #include<stdio.h>
// int main()
// {
//     int k;
//     for (int i = 1; i <= 7; i++)
//     {
//         i<=4?k++:k--;
//         for (int j = 1; j <= 7; j++)
//         {
//             if (5-k<=j && j<=3+k)
//             {
//                printf("*");        
//             }         
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// q19
#include<stdio.h>
int main()
{
    char a[10]={"mysirg"};
    int k=0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if((4-i<=j && j<=6+i)||(14-i<=j && j<=16+i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if(i<=j && j<=20-i)
            {   if (i==1 && 7<=j && j<=12)
                {
                printf("%c",a[k]);
                k++;
                }
                else
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}