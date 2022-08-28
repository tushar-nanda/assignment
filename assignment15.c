// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
// #include<stdio.h>
// int getmax(int arr[],int);
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]),max;
//     max=getmax(arr,n);
//     printf("the max is %d",max);
//     return 0;
// }
// int getmax(int arr[],int n)
// {
//     int max;
//     max=arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }


// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
// #include<stdio.h>
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int min;
//     min=getmin(arr,n);
//     printf("%d",min);
//     return 0;
// }
// int getmin(int arr[],int n)
// {
//     int min;
//     min=arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if(min>arr[i])
//         min=arr[i];
//     }
//     return min;
// }

// 3. Write a function to sort an array of any size. (TSRN)
// #include<stdio.h>
// void sort(int arr[],int);
// int main()
// {
//     int arr[]={2,6,4,5,9,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,n);
//     return 0;
// }
// void sort(int a[],int n)
// {
//     int temp;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 1+i; j < n; j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }

// 4.Write a function to rotate an array by n position in d direction. The d is an indicative 
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5,6},temp,shiftcount,n=sizeof(a)/sizeof(a[0]),direction;
//     printf("the matrix is ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\t %d",a[i]);
//     }
//     printf("\nhow many position you want to shift and tell the direstion also 1 for right and -1 for left");
//     scanf("%d%d",&shiftcount,&direction);
//     while (shiftcount!=0)
//     {
//         if(direction==1)
//         {
//             temp=a[n-1];
//             for (int i = n-1; i > 0; i--)
//             {
//                 a[i]=a[i-1];
//             }
//             a[0]=temp;
                
//         }
//         else if (direction==-1)
//         {
//             temp=a[0];
//             for (int i = 0; i < 5; i++)
//             {
//                 a[i]=a[i+1];
//             }
//             a[n-1]=temp;
//         }
//         shiftcount--;
        
//     }
//     printf("\n");
//      for (int i = 0; i < n; i++)
//     {
//         printf("\t %d",a[i]);
//     }
//     return 0;
// }

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element
// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,3,4,5};
//     int n=sizeof(a)/sizeof(a[0]);
//     printf("the 1st adjacent duplicate value is %d",dup(a,n));
//     return 0;
// }
// int dup(int a[],int n)
// {
//     for (int i = 0; i < n-1; i++)
//     {
//         if(a[i]== a[i+1])
//         return (a[i]);
//     }
//     return 0;
// }

// 6. Write a function in C to read n number of values in an array and display it in reverse 
// order.
// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5,6};
//     int n=sizeof(a)/sizeof(a[0]);
//     display(a,n);
//     return 0;
// }
// void display(int a[],int n)
// {
//     for (int i = n-1; i >= 0; i--)
//     {
//             printf("\t %d",a[i]);
//     }
    
// }

// 7. Write a function in C to count a total number of duplicate elements in an array
// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,1,4,5},
//     printf("the number of duplicate valuesis %d",countdup(a,n));
//     return 0;
// }
// int countdup(int a[],int n)
// {
//     int count=0;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 1+i; j < n; j++)
//         {
//             if (a[i]==a[j])
//             {
//                 count++;
//             } 
//         }
//     }
//     return count;
// }

// 8. Write a function in C to print all unique elements in an array.

// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,1,4,5},n=sizeof(a)/sizeof(a[0]);
//     printf("the number unique elements are ");
//     countdup(a,n);
//     return 0;
// }
// void countdup(int a[],int n)
// {
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         count=0;
//         for (int j = 1; j < n; j++)
//         {
//             if (a[i]==a[j])
//             {
//                 count++;
//             } 
//         }
//         if(count==0)
//         printf("%d\t ",a[i]);
//     }
    
// }

// 9. Write a function in C to merge two arrays of the same size sorted in descending 
// order
// #include<stdio.h>
// int main()
// {
//     int a[]={1,3,5,7,9},b={2,6,8,11,12};
//     int c[10],k=0,i=0,j=0;
//     for(int k=0;k<10;k++)
//     {
//         if(a[i]<b[j])
//         {
//             c[k]=a[i];
//             i++;
//         }
//         else{
//             c[k]=b[j];
//             j++;
//         }
//     }
//     for (k = 0;k < 10;k++)
//     {
//         printf("%d\t",c[k]);
//     }
    
//     return 0;
// }

//10
#include <stdio.h>
void main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;
	
	
       printf("\n\nCount frequency of each element of an array:\n");
       printf("------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
		  fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}
