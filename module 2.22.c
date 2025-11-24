#include <stdio.h>

void sayhello(){
    printf("HELLO,STUDENT! YOU JUST CALLED ME BACK!\n");

}

void studentWork(void(*callbackfunc)()){
    printf("STUDENT IS DOING HOMEWORK..\n");

    callbackfunc();
}
int main(){
    studentWork(sayhello);
    return 0;

}
