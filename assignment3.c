// 1. Write a program to check whether a given number is positive or non-positive.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     (a>0)?printf("positive"):printf("negative");
//     // if(a>0)
//     // printf("positive");
//     // else
//     // printf("non positive");
//     return 0;
// }

// 2. Write a program to check whether a given number is divisible by 5 or not
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     a%5 == 0?printf("divisible by 5"):printf("not divisible by 5");
//     return 0;
// }

// 3. Write a program to check whether a given number is an even number or an odd
// number.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     a%2 == 0 ?printf("even"):printf("odd");
//     return 0;
// }

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     a&1==1?printf("odd"):printf("even"); // here we have use masking
//     return 0;
// }

// 5. Write a program to check whether a given number is a three-digit number or not.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a>99 && a<1000)
//     printf("its a 3 digit number");
//     else 
//     printf("its not");
//     return 0;
// }

// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     a>b?printf("%d",a):printf("%d",b);
//     return 0;
// }

// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("quaratic equation of form ax^2 + bx + c=0 \n enter the value of a , b  and c");
//     scanf("%d%d%d",&a,&b,&c);
//     if(b*b- 4*a*c>0)
//     printf("the roots are real and distinct");
//     else if (b*b-4*a*c==0)
//     printf("the roots are real and equal");
//     else printf("roots are imaginary"); 
//     return 0;
// }

// 8. Write a program to check whether a given year is a leap year or not.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a%400==0)
//         printf("its a leap year");
//     else if(a%4==0)
//         printf("its a leap year");
//     else
//         printf("its an non leap year");
//     return 0;
// }
// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         if(a>c)
//         printf("%d",a);
//         else
//         printf("%d",c);
//     }
//     else{
//         if(b>c)
//         printf("%d",b);
//         else
//         printf("%d",c);
//         }
//     return 0;
// }

// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
// #include<stdio.h>
// int main(){
//     float cp,sp;
//     scanf("%f%f",&cp,&sp);
//     if (sp>=cp)
//         printf("the profit %% is %f %%",(sp-cp)*100/cp);
//     else
//         printf("the loss %% is %f %%",(cp-sp)*100/cp);    
//     return 0;
// }

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
// #include<stdio.h>
// int main(){
//     int a,b,c,d,e;
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
//     printf("pass");
//     else
//     printf("fail");
//     return 0;
// }

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
// #include<stdio.h>
// int main(){
//     char a;
//     scanf("%c",&a);
//     if(a>='a'&&a<='z')
//     printf("lower case");
//     else if (a>='A'&&a<='Z')
//     printf("upper case");
//     else printf("you enter a different cahracter");
//     return 0;
// }

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a%3==0&&a%2==0)
//     printf("it is divisible by 2 and 3");
//     else
//     printf("it is not ");
//     return 0;
// }

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a%3==0||a%7==0)
//     printf("it is divisible by 7 or 3");
//     else
//     printf("it is not ");
//     return 0;
// }

// 15. Write a program to check whether a given number is positive, negative or zero.
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a>0)
//     printf("positive");
//     else if(a<0)
//     printf("negative");
//     else printf("it is 0");
//     return 0;
// }

// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
// #include<stdio.h>
// int main(){
//     char a;
//     scanf("%c",&a);
//     if(a>='a'&&a<='z')
//     printf("lower case");
//     else if (a>='A'&&a<='Z')
//     printf("upper case");
//     else if (a>='0'&&a<='9')
//     printf("you enter a digit");
//     else
//     printf("you enter a special character");
//     return 0;
// }
 
// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
//  #include<stdio.h>
//  int main(){
//     int a,c,b;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a+b>c && b+c>a && c+a>b)
//     printf("the triangle is valid");   
//     else
//     printf("the triangle is not valid");   
//     return 0;
//  }

// 18. Write a program which takes the month number as an input and display number of
// days in that month
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the number of month for ex janauray 1 or august  8  = \t");
//     scanf("%d",&a);
//     if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
//     printf("the months is of 31 days");
//     else if(a==2)
//     printf("28 or 29 days");
//     else if(a==4||a==6||a==9||a==11)
//     printf("the month is of 30 days");
//     else
//     printf("you enter a wrong month number");
//     return 0;
// }