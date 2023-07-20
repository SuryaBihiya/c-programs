#include<stdio.h>
#include<ctype.h>

int main(){
// Q.1 : Area of a square(from L6-L10)

// float side;
// printf("Side of a Square\n");
// scanf("%f" , &side);

// printf("Area of square of your given side is %f",side*side);


//Q.2 : Area of a Circle(from L15-L22)

// float radius;
// float pi=3.14;

// printf("Radius of a Circle");
// scanf("%f", &radius);

// float area=pi*radius*radius;
// printf("Area of a Circle is : %f",area);


//Q.3 : Perimeter of a Rectangle(from L27-L36)

// int length;
// int width;

// printf("Length of a Rectangle\n");
// scanf("%d", &length);

// printf("Width of a Rectangle\n");
// scanf("%d", &width);

// printf("Perimeter of a Rectangle of Your Given Sides : %d",length*width);

//Q.4 : Cube of a Number(from L40-L45)

// int number;

// printf("Enter a Number\n");
// scanf("%d", &number);

// printf("Cube of Your Given Number : %d", number*number*number);


// int number;
// printf("Enter a Number\n");
// scanf("%d",&number);

// printf("%d",number % 2 == 0);

// int isMonday=1;
// int isRaining=0;

// printf("%d", isMonday || isRaining);

// int number;
// printf("Enter a Number\n");
// scanf("%d", &number);

// printf("%d", (number>9) && (number<100));

// Average of three Numbers

// int n1,n2,n3;
// printf("Enter three Numbers\n");
// scanf("%d", &n1);
// scanf("%d",&n2);
// scanf("%d", &n3);

// // int average;

// // average=(n1+n2+n3)/3;

// printf(" Average of Your Given three Numbers : %d", (n1+n2+n3)/3);

//Que.Write a program if given character is digit or not

// char input;
// printf("Enter a Digit/Alphabet\n");
// scanf("%c",&input);

// int is_digit =isdigit(input);
// printf("Given Value %c is %s a digit",input,is_digit ? "" : "not");



//Que.Write a program to print Smallest Number

// int num1,num2;
// printf("Enter 1st Number \n");
// scanf("%d",&num1);
// printf("Enter 2nd Number \n");
// scanf("%d",&num2);

//way 1 : // (num2>num1) ? printf("%d is smallest number",num1) : printf("%d is smallest number",num2);
//way 2: 
// int smallest=num1;
// (num2<smallest) && (smallest=num2);
// printf("the smallest number is %d",smallest);


//Que. Print the Numbers from 0 to n, if n is given by user.
// int num;
// printf("Enter a Number : ");
// scanf("%d",&num);

//with While Loop

// int i=0;
// while(i<=num){
// printf("%d\n",i);
// i++;
// }

//with For Loop

// int i;
// for(i=0;i<=num;i++){
//     printf("%d\n",i);
// }

//with do while Loop

// printf("\n\nHere is Your Numbers : \n");
// int i=0;
// do{
// printf("                        %d\n",i);
//     i++;
// }while(i<=num);

// Que. Write a Program to check if a student passed of failed,
// 1. Marks>30 is Pass
// 2. Marks<=30 is Fail

// int marks;
// printf("Enter Marks : ");
// scanf("%d" , &marks);

// if(marks>30 && marks<=100){
//     printf("PASS");
// }
// else if(marks<=30){
//     printf("FAIL");
// }
// else{
//     printf("You entered an Invalid Marks");
// }

// Witih Ternary Operator :

// int marks;
// printf("Enter Marks : ");
// scanf("%d",&marks);

// (marks>30 && marks<=100) ? printf("PASS") : printf("");
// (marks<30) ? printf("FAIL") : printf("");
// (marks<=100) ? printf("") : printf("You entered Invalid marks");

// Que. Write a Program to give Grades to a Student
// 1. Marks < 30     is C
// 2. 30<=Marks<70   is B
// 3. 70<=Marks<90   is A
// 4. 90<=Marks<=100 is A+

// int marks;
// printf("Enter Marks : ");
// scanf("%d", &marks);

// if(marks>=0 && marks<30){
//     printf("Gardes of Your Marks : C");
// }
// else if(marks<70 && marks>=30){
//     printf("Grades of Your marks : B");
// }
// else if(marks>=70 && marks<90){
//     printf("Grades of Your Marks : A");
// }
// else if(marks>=90 && marks<=100){
//     printf("Grades of Your Marks : A+");
// }
// else{
//     printf("You entered Invalid Marks");
// }

// with Ternary Operator

// int marks;
// printf("Full Marks : 100");
// printf("                         Enter Marks : ");
// scanf("%d", &marks);

// (marks>=0 && marks<30) ?    printf("                        Grade : C") : printf("");
// (marks>=30 && marks<70) ?   printf("                        Grade : B") : printf("");
// (marks>=70 && marks<90) ?   printf("                        Grade : A") : printf("");
// (marks>=90 && marks<=100) ? printf("                        Grade : A+") : printf("");
// (marks<0 || marks>100) ?    printf("              You've entered Invalid Marks") : printf("");

// Que. Write a Program to find a Character entered by user is Upper case or not.

// char letters;
// printf("Enter an Alphabet : ");
// scanf("%c", &letters);

// if(letters>='a' && letters<='z'){
//     printf("Lowercase");
// }
// else if(letters>='A' && letters<= 'Z'){
//     printf("Uppercase");
// }
// else{
//     printf("It seems You haven't entered an Alphabet");
// }

// with Ternary Operator

// (letters>='a' && letters<='z') ? printf("Lowercase") : printf("");
// (letters>='A' && letters<='Z') ? printf("Uppercase") : printf("");
// ((letters>='a' && letters<='z') || (letters>='A' && letters<='Z')) ? printf("") : printf("It seems You haven't entered an Alphabet");

// Que. Write a Program to check if a given number is Natural Number or not.

int num;
printf("Enter a Number");
scanf("%d", &num);

if(num<=0){
    printf("Not Natural Number");
}
else{
    printf("Natural Number");
}


return 0;
}