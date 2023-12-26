// c data-type:

// integer--------- int
// float (6 digit)-------- float
// double(upto 16 digit after decimal) -----double
// character -----char = 'character'


// identifier:

// int ---- %d
// float ---%f
// double ----%Lf
// char ------%c


// variable:

// ~ data-type  variable-name ;

// int web;
// web = 30;
// or 
// int web = 20;


// int web = 20;
// int data = 30;

// or 

// int web = 30, data = 50;(because data type is same)

// printf("%d", web);  (to print int data)

// printf("%lf",data);



// // Online C compiler to run C program online
// #include <stdio.h>

// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
    
//     int web = 30;
//     double data = 67.78;
//     printf("web = "%d\n", web);
//     printf("data = "%lf", data);

//     return 0;
// }


// `````````````````````````````

// conditional statement:

// if 
// else
// switch


// if (){
// //body;

// }
// else{
// //body;
// }


// ```````````````````````````
// #include <stdio.h>
// int main(){
//     int mark = 70;
//     if (mark >= 80){
//         printf("you got A+");
// }
// else if (mark < 80 && mark > 70 ){
//     printf("you got A");
// }
// else if (mark <= 70 && mark > 60 ){
//     printf("you got A-");
// }
// else if (mark <=60 && mark > 50 ){
//     printf("you got B");
// }
// else if (mark < 80 && mark > 70 ){
//     printf("you got A");
// }
// else{
//     printf("fail");
// }
// }

// ``````````````````````````````````````
// home work:
// 1. grade
// 2. odd/even
// 3. p/negetive
// 4. addition, sum, multiplication, modulas, division

// ////////////////////////////////////////////
// task_1:
// #include <stdio.h>
// int main(){
//     int mark = 70;
//     if (mark >= 80){
//         printf("you got A+");
// }
// else if (mark < 80 && mark > 70 ){
//     printf("you got A");
// }
// else if (mark <= 70 && mark > 60 ){
//     printf("you got A-");
// }
// else if (mark <=60 && mark > 50 ){
//     printf("you got B");
// }
// else if (mark < 80 && mark > 70 ){
//     printf("you got A");
// }
// else{
//     printf("fail");
// }
// }
// ////////////////////////////////////////////////////////////////
// task_2:
// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int number;
//     printf("enter an integer number: ");
//     scanf("%d",&number);
//     if(number==0){
//         printf("%d  is neither positive nor negative number.\n",number);
//     }
//     else if(number%2==0){
//         printf(" the number %d is even.\n",number);
//     }
//     else{
//         printf("the number %d is odd.\n",number);

//     return 0;
//     }
// }

// //////////////////////////////////////////////////////////
// task_3:
// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int number;
//     printf("enter an integer number: ");
//     scanf("%d",&number);
//     if(number > 0){
//         printf("%d is a positive number\n",number);
//     }
//     else if (number < 0){
//         printf("%d is a negetive number\n",number);
//     }
//     else{
//         printf("the number is zero\n",number);
//     }
//     return 0;
//     }
// ////////////////////////////////////////////////////////////
// task_4:

// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     // Write C code here
//     int number1 = 8;
//     int number2 = 7;
//     int sum = number1 + number2;
//     int sub = number1 - number2;
//     int mul = number1 * number2;
//     int div = number1 / number2;
//     printf("total sumation is %d\n", sum);
//     printf("total subtraction is %d\n", sub);
//     printf("total multiplication is %d\n", mul);
//     printf("total division is %d", div);
    

//     return 0;
// }