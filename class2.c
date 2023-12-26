// ////////////(class_2)////////////////////////////////////////////////

// ````nested if``````

// practice_1:

// #include <stdio.h>

// int main() {
//     int number;
//     printf("enter an integer number: ");
//     scanf("%d",&number);
//     if(number > 0){
//         printf("%d is a positive number\n",number);
//             if(number==0){
//              printf("%d  is neither positive nor negative number.\n",number);
//                         }
//         else if(number%2==0){
//             printf(" the number %d is even.\n",number);
//                             }
//         else{
//             printf("the number %d is odd.\n",number);


//                 }
//         }

//     else if (number < 0){
//          printf("%d is a negetive number\n",number);
//             if(number==0){
//              printf("%d  is neither positive nor negative number.\n",number);
//                         }
//         else if(number%2==0){
//             printf(" the number %d is even.\n",number);
//                             }
//         else{
//             printf("the number %d is odd.\n",number);


//                 }
//         }

//     else{
//         printf("the number is zero\n",number);
//     }
//     return 0;
//     }

// ``````````
// #include <stdio.h>

// int main() {
//     // Write C code here
//     printf("Hello world");

//     return 0;
// }
// `````````````````````````

// to take input:
// int a;

// scanf("%d",&a); ..............{& = adress}

// second way:
// int a;
// int b;
// int c

// scanf("%d %d %d",&a,&b,&c);

// `````````
// #include <stdio.h>

// int main() {
//     // Write C code here
//     //printf("Hello world");
//     //int a,b,c
// //to take multiplevalue
// /*
//     int a;
//     int b;
//     int c;
//     printf("enter the value of a variable: ");
//     scanf("%d",&a);
//     printf("enter the value of b variable: ");
//     scanf("%d",&b);
//     printf("enter the value of c variable: ");
//     scanf("%d",&c);
// */

// //to take input multiple variable value in a single line
// /*
//     int a,b,c;
//     printf("Enter the value of a, b, c: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a>b && a>c){
//             printf("a is the bigger number");
//     }
//     else if(b>a && b>c){
//         printf("b is the bigger number");
//     }
//     else{
//         printf("c is the bigger number");
//     }
// */
// //nested if(the code hase some eroor)
// /*
//     int a,b,c;
//     printf("Enter the value of a, b, c: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a>b){
//         if(a>c){
//             printf("a is the bigger number");
//         }
//         else{
//             printf("a is not the bigger number");
//         }
//     }
//     else if(b>a){

//         if(b>c){
//             printf("b is the bigger number");
//         }
//         else{
//             printf("b is not the bigger number");
//         }
//     }
//     else{
//         printf("c is the bigger number");
//     }
// */
// //```````````````````````````
// //value swap need to fix
//     int a,b,c;
//     printf("Enter the value of a, b: ");
//     scanf("%d\n %d", &a, &b);
//     printf("before swapping a=%d\n b=%d:\n ",a,b);

//     c = a;
//     b = c;
//     a = b;

//     printf("afrter swapping a=%d\n b=%d",a,b);





//     return 0;
// }