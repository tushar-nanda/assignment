// 1. Write a program to print unit digit of a given number
// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     printf("the unit digit of given input is %d",(a%10));
//     return 0;
// }

// 2. Write a program to print a given number without its last digit.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("the number without its last digit is %d",(a/10));
//     return 0;
// }

// 3. Write a program to swap values of two int variables
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the value of a and b");
//     scanf("%d%d",&a,&b);
//     printf("a=%d and b=%d",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("\n the values after swaping a=%d and b=%d",a,b);
//     return 0;
// }

// 4. Write a program to swap values of two int variables without using a third variable.
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the value of a and b");
//     scanf("%d%d",&a,&b);
//     printf("a=%d and b=%d",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\n the values after swaping a=%d and b=%d",a,b);
//     return 0;
// }

// 5. Write a program to input a three-digit number and display the sum of the digits.
// #include<stdio.h>
// int main(){
//     int a,c;
//     printf("enter a 3 digit number ");
//     scanf("%d",&a);
//     c=((a%10)+((a/10)%10)+(a/100));
//     printf("the sum of its digits is %d",c);
//     return 0;
// }

// 6. Write a program which takes a character as an input and displays its ASCII code.
// #include<stdio.h>
// int main(){
//     char a;
//     scanf("%c",&a);
//     printf("\nthe ascii code of %c is %d",a,a);
//     return 0;
// }

// 7. Write a program to find the position of first 1 in LSB.
// #include<stdio.h>
// int main(){
//     int x=8,result,count=0;
//     while(x!=0){
//     result=x&1;
//     count++;
//     if(result == 1)
//         {
//             printf("first 1 occur at %dth position",count);
//             break;
//         }
//     x=x>>1;
//     }
//     return 0;
// }

// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.
// #include<stdio.h>
// int main(){
//     int x=1;
//     int r=x&1;
//     if(r==1){
//         printf("the number is odd");
//     }
//     else 
//     printf("the number is even");
//     return 0;
// }

// 9. Write a program to print size of an int, a float, a char and a double type variable
// #include<stdio.h>
// int main(){
//     int a;
//     printf(" the size of int varibale is %d",sizeof(int));
//     printf(" \nthe size of float varibale is %d",sizeof(float));
//     printf(" \nthe size of char varibale is %d",sizeof(char));
//     printf(" \nthe size of double varibale is %d",sizeof(double));
//     printf(" \nthe size of short int varibale is %d",sizeof(short int));
//     printf(" \nthe size of long int varibale is %d",sizeof(long int));
//     return 0;
// }

// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     printf("\n the number after converting the last digit into 0 is %d",(a/10)*10);
//     return 0;
// }

// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("the appended number is %d",(a*10+b));
//     return 0;
// }

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.
// #include<stdio.h>
// int main(){
//     float a;
//     printf("entert the amount of rupees that you want to concvert into USD =\t");
//     scanf("%f",&a);
//     printf("\n the convert amount is $ %f USD",a/76.23);
//     return 0;
// }

// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter a 3 digit number ");
//     scanf("%d",&a);
//     printf("the number after roating its digits is %d",((a%10)*100)+(a/10));
//     return 0;

// }