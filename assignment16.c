// 1. Write a program to calculate the sum of two matrices each of order 3x3
// #include<stdio.h>
// int main()
// {
//     int a[3][3],b[3][3];
//     int c[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int  j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int  j = 0; j < 3; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
    
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j]=a[i][j] +b[i][j];
//         }
        
//     }
//      for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
        
//     }
//     printf(" \t+\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
        
//     }
//     printf(" =\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t",c[i][j]);
//         }
//         printf("\n");
        
//     }   
//     return 0;
// }

// 2. Write a program to calculate the product of two matrices each of order 3x3.
// #include<stdio.h>
// int main()
// {
//     int a[3][3],b[3][3],c[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
  
//         }
        
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&b[i][j]);
//             /* code */
//         }
        
//     }
//     int sum;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum=0;
//             for (int k = 0; k < 3; k++)
//             {
//                 sum=sum+a[i][k]*b[k][j];
//                 c[i][j]=sum;
//             }
            
//         }   
//     }
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%3d\t",c[i][j]);
//         }
//         printf("\n");
        
//     }
    
    
//     return 0;
// }

// 3. Write a program in C to find the transpose of a given matrix
// #include<stdio.h>
// int main()
// {
//     int a[3][3],b[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             b[j][i]=a[i][j];
//         }
//     }    
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%2d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4. Write a program in C to find the sum of right diagonals of a matrix.
// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
        
//     }
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if(i==j)
//            {
//             sum=sum+a[i][j];
//            }
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }
//     printf("the sum of principle dagonal is %d",sum);
//     return 0;
// }

// 5. Write a program in C to find the sum of left diagonals of a matrix.
// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
        
//     }
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if(i+j==2)
//            {
//             sum=sum+a[i][j];
//            }
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }
//     printf("the sum of principle dagonal is %d",sum);
//     return 0;
// }

// 6. Write a program in C to find the sum of rows and columns of a Matrix
// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }
//         for (int i = 0; i < 3; i++)
//     {
//         sum=0;
//         for (int j = 0; j < 3; j++)
//         {
//            sum=sum+a[i][j];
//         }
//         printf("\n the sum of row %d is %d",i+1,sum);
//     }
//        for (int i = 0; i < 3; i++)
//     {
//         sum=0;
//         for (int j = 0; j < 3; j++)
//         {
//            sum=sum+a[j][i];
//         }
//         printf("\n the sum of column %d is %d",i+1,sum);
//     }

//     return 0;
// }

// 7. Write a program in C to print or display the lower triangular of a given matrix
// #include<stdio.h>
// int main()
// {
//     int a[3][3];
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
        
//     }
        
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }

//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if(i>j)
//            {
//             a[i][j]=0;
//            }
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 8. Write a program in C to print or display an upper triangular matrix.
// #include<stdio.h>
// int main()
// {
//     int a[3][3];
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }

//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if(i<j)
//            {
//             a[i][j]=0;
//            }
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix
// #include<stdio.h>
// int main()
// {
//     int a[3][3];
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            scanf("%d",&a[i][j]); 
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d\t",a[i][j]); 
//         }
//         printf("\n");
//     }
//   int dense=0,sparse=0;
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if(a[i][j]==0)
//            {
//             sparse++;
//            }
//            else
//             dense++;
//         }
//     }
//     printf("\n");
//     if(spare>dense)
//      printf("it is a  sparse matrix");
//      else
//      printf("dense matrix");
//     
//     return 0;
// }




#include<stdio.h>
int main()
{
    int a[3][3];
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&a[i][j]); 
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d\t",a[i][j]); 
        }
        printf("\n");
    }
  int sum=0,max=0,index;
        for (int i = 0; i < 3; i++)
    {
     sum=0;
        for (int j = 0; j < 3; j++)
        {
           sum=sum+a[i][j];
        }
         if(sum>max)
        { max=sum;
         index=i;}
    }
    printf("\n");
    for(int j=0;j<3;j++)
    printf("%d\t",a[index][j]);
    
    return 0;
}