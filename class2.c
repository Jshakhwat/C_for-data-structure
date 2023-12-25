#include <stdio.h>

int main() {
    int number;
    printf("enter an integer number: ");
    scanf("%d",&number);
    if(number > 0){
        printf("%d is a positive number\n",number);
            if(number==0){
             printf("%d  is neither positive nor negative number.\n",number);
                        }
        else if(number%2==0){
            printf(" the number %d is even.\n",number);
                            }
        else{
            printf("the number %d is odd.\n",number);


                }
        }

    else if (number < 0){
         printf("%d is a negetive number\n",number);
            if(number==0){
             printf("%d  is neither positive nor negative number.\n",number);
                        }
        else if(number%2==0){
            printf(" the number %d is even.\n",number);
                            }
        else{
            printf("the number %d is odd.\n",number);


                }
        }

    else{
        printf("the number is zero\n",number);
    }
    return 0;
    }
