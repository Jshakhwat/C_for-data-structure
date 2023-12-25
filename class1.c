// #ifndef CLASS1_H_INCLUDED
// #define CLASS1_H_INCLUDED



// #endif // CLASS1_H_INCLUDED
// Task_1
#include <stdio.h>
int main(){
    int mark = 70;
    if (mark >= 80){
        printf("you got A+");
}
else if (mark < 80 && mark > 70 ){
    printf("you got A");
}
else if (mark <= 70 && mark > 60 ){
    printf("you got A-");
}
else if (mark <=60 && mark > 50 ){
    printf("you got B");
}
else if (mark <= 50 && mark > 40 ){
    printf("you got C");
}
else{
    printf("fail");
}
}



