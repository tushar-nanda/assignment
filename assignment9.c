// 1. Write a program which takes the month number as an input and display
// number of days in that month
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the month number ");
//     scanf("%d",&n);
//     switch(n)
//     {
//         case 1 :
//             printf("31 number of days");
//             break;
//         case 3:
//             printf("31 number of days");
//             break;
//         case 5:
//             printf("31 number of days");
//             break;
//         case 7 :
//             printf("31 number of days");
//             break;
//         case 8:
//             printf("31 number of days");
//             break;
//         case 10 :
//             printf("31 number of days");
//             break;
//         case 4 :
//             printf("30 number of days");
//             break;
//         case 6 :
//             printf("30 number of days");
//             break;
//         case 9 :
//             printf("30 number of days");
//             break;
//         case 11 :
//             printf("30 number of days");
//             break;
//         case 2 :
//             printf(" 28 or 29 number of days");
//             break;
//         default:
//         printf("entered wrong number of days");
//     }
//     return 0;
// }

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// #include<stdio.h>
// int main()
// {
//     char choice;
//     float a,b,c;
//     printf(" enter a choice \n a. Addition \n b. Subtraction \n c. Multiplication\n d. Division\n e. Exit");
//     scanf("%c",&choice);
//     printf("enter the two numbers");
//     scanf("%f%f",&a,&b);
//     switch (choice)
//     {
//     case 'a':
//         c=a+b;
//         break;
//     case 'b':
//         c=a-b;
//         break;
//     case 'c':
//         c=a*b;
//         break;
//     case 'd':
//         c=a/b;
//         break;
//     default:
//         printf("enter a invalid choice");
//         break;
//     }
//     printf("the result is %.2f",c);
//     return 0;
// }

// 3.3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.

// #include<stdio.h>
// int main()
// {
//     int choice;
//     printf("press 1.monday\n 2. tuesday \n 3. Wednesday \n 4. thrusday \n 5. friday \n 6.saturday\n 7. sunday");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         printf("Write it on your heart that every day is the best day in the year.");
//         break;
//     case 2:
//         printf("Today’s goals: Coffee and kindness. Maybe two coffees, and then kindness.");
//         break;
//     case 3:
//         printf("If you’re changing the world, you’re working on important things. You’re excited to get up in the morning");
//         break;
//     case 4:
//         printf("When you arise in the morning, think of what a precious privilege it is to be alive, to breathe, to think, to enjoy, to love");
//         break;
//     case 5:
//         printf("I like freedom. I wake up in the morning and say, ‘I don’t know, should I have a popsicle or a donut?’ You know, who knows");
//         break;
//     case 6:
//         printf("Smile in the mirror. Do that every morning and you’ll start to see a big difference in your life.");
//         break;
//     case 7:
//         printf("Some people dream of success, while other people get up every morning and make it happen");
//         break;
//     default:
//         printf("envalid choice");
//         break;
//     }
//     return 0;
// }



// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     char choice;
//     printf("enter the choice \na. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
//     printf("\nb. Check whether a given set of three numbers are lengths of sides ofa right angled triangle or not");
//     printf(" \nc. Check whether a given set of three numbers are equilateral triangle or not");
//     printf(" \nd. exit =");
//     scanf("%c",&choice);
//     printf("\n enter the three sides if triangle");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a+b>c && b+c > a && c+a>b)
//     {
//         switch (choice)
//         {
//             (a==b || b==c || c==a)?printf("yes isoscles trinagle"):printf("not a isoscles triangle");
//             break;
//         case 'b':
//             (c*c==a*a + b*b || a*a==b*b + c*c || b*b==a*a +c*c)?printf("its is right angle triangle"):printf("not a right angle trinagle");
//             break;
//         case 'c':
//             (a==b && b==c)?printf("equilateral triangle"):printf("not an equilateral triangle");
//             break;
//          case '4':
//              break;
//         default:
//             printf("entered a invalid choice");
//             break;
//         }
//     }
//     else
//     printf("the sides are not valid");
//     return 0;
// }

// 5..
// #include<stdio.h>
// int main()
// {
//     int var;
//     printf("enter the choice 1 or 2 or 3 = ");
//     scanf("%d",&var);
//     switch (var)
//     {
//     case 1:
//         printf("good");
//         break;
//     case 2:
//         printf("better");
//         break;
//     case 3:
//         printf("best");
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

// 6. Program to check whether a year is a leap year or not. Using switch
// statement
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     switch(n%100==0)
//     {
//         case 1:
//             switch (n%400 == 0)
//             {
//             case 1:
//                 printf("leap year");
//                 break;
//             case 0:
//                 printf("non leap year");
//             }
//             break;
//         case 0:
//             switch (n%4==0)
//             {
//             case 1:
//                 printf("leap year");
//                 break;
//             case 0:
//                 printf("non leap year");
//                 break;
//             }
//             break;
//     }
//     return 0;
// }

// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
// #include<stdio.h>
// int main()
// {
//     float n,amount;
//     scanf("%f",&n);
//     switch (n<=50)
//     {
//     case 1: amount=n*0.5;
//         break;
//     case 0: switch (n<=150)
//                 {
//                         case 1:amount= 50*0.50 + (n-50)*0.75;
//                             break;
//                         case 0: 
//                                 switch (n<=250)
//                                 {
//                                 case 1:
//                                     amount=50*0.50 + 100*0.75 + (n-150)*1.20;
//                                     break;
//                                case 0:
//                                     amount=50*0.50 + 100*0.75 + 100*1.20 + (n-250)*1.5;
//                                 }
//                             break;
//                 }
//         break;
//     }
//     amount=amount + amount*20/100;
//     printf("the total charges is %f",amount);
//     return 0;
// }

// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
// #include<stdio.h>
// int main()
// {
//     int n;
//     float a;
//     scanf("%d",&n);
//     switch (n!=0)
//     {
//         case 1: switch (n>0)
//                 {
//                     case 1:
//                         a=(n)-(2*n);
//                         break;
//                     case 0:
//                         a=n-(2*n);
//                         break;
//                 }
//                 break;
//         case 0:
//             printf("0 is neither +ve nor -ve");
//             break;
//     }
//     printf("%.1f",a);
//     return 0;
// }

// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     switch(n%2==0)
//     {
//         case 1:
//             n=n+1;
//             printf("%d",n);
//             break;
//         case 0:
//             printf("you entered a odd number");
//             break;
//     }
//     return 0;
// }

// 10. C program to find all roots of a quadratic equation using switch case
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float a,b,c,D;
//     printf("enter a,b,c for a*x^2 + b*x + c=0");
//     scanf("%f%f%f",&a,&b,&c);
//     D=b*b-4*a*c;
//     switch(D>=0)
//     {
//         case 1:
//                 printf("\nthe roots are %.1f and %.1f ",((-b+sqrt(D))/(2*a)),((-b-sqrt(D))/(2*a)));
//                 break;
//         case 0:
//                 printf("the roots are imaginary");
//                 break;
//     }
//     return 0;
// }