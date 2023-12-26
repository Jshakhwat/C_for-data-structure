// class_3:

// switch case;



// #include <stdio.h>
// int main(){
//     int number1;
//     int number2;
//     char oparator;
    
//     printf("enter a operator +,-,*: ");
//     scanf("%c",&oparator);


//     printf("enter 1st number: ");
//     scanf("%d",&number1);

//     printf("enter 2nd number: ");
//     scanf("%d",&number2);

//     switch(oparator){
//     case '+':
//         printf("%d + %d is = %d\n",number1,number2,number1+number2);
//         break;
//     default:
//         printf("the input is invalid!");

//     }
//    return 0;
// }

// nasted switch case:
// ////nested switch case
// #include <stdio.h>
// int main(){
//     int number;

//     printf("enter a number: ");
//     scanf("%d",&number);


//     switch(number>0){
//     case 1:
//         printf("the number is positive");
//         break;
//     case 0:
//             switch(number<0){
//                 prinf("The number is Negetive");
//                 break;
//                 case 1:
//                     printf()

//             }
        
   

//     default:
//         printf("the input is invalid!");

//     }
//    return 0;
// }(need to fix)
// ```````````````````````````````````````````````````````````````````````````````
// area of triangle;


// ````````````````````````````````

// loop(for loop, while loop, do while loop)
// ````````````````````````````````
// for loop:
// for (intilize; condition; increment/decrement)
// {
// //body
// }

// for(i=1;i<10;i++)
// {
// printf("%d",i);
// }
// ````````````````````````````````````````
// for increment = i++;(i = i+1) or i = i + 2;
// for decrement = i--;(i = i-1) or i = i - 2;
// ```````````
// #include <stdio.h>
// int main(){
//     int i;
//     for(i = 1; i<=10; i++)
//     {
//         printf("%d\n",i);
//     }

// }
// ```````````````````````````to see odd number 1 to 100```````````````````````````````````
// #include <stdio.h>
// int main(){
//     int i;
//     for(i = 1; i<=100; i=i+2)
//     {
//         printf("%d\n",i);
//     }

// }