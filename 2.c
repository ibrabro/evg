#include <stdio.h>
#include <stdlib.h>
int getSeven(int arg);
int isCh(int mas[]);
int ReverseM(int mas[]);
void printM(int mas[]);
void toNull(int *mas);
int num = 0;
int main(){
    
    char c;// = getchar();
    int buf[10];// = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    toNull(buf);

    while(scanf(" %c", &c)){                           //Добавили пробел до %c чтобы игнорировать нажатие кнопки Enter                           
        num++;
        printf("%d\n",c);
        // buf = getSeven(buf);     
        if(isCh(buf) == 0){
            printf("good\n");
            printM(buf);
        }           
        // printf("%c",c);
    }
}

int getSeven(int arg){
    // int res;
    int mas[10];
    // toNull(mas);
    for(int i = 9; arg != 0; i--){
        mas[i] = arg % 7;
        arg /= 7;        
    }
    return mas;
}

int isCh(int mas[]){
    // toNull(mas);
    // mas = ReverseM(mas);
    for(int i = 9; i > (10 - num); i--)
    {
        if(mas[i] % 2 != 0)
            return -1;  
    }
    return 0;
}

// int ReverseM(int mas[]){

// }

void printM(int mas[])
{
    // toNull(mas);
    for(int i = 0; i < 9; i++)
        printf("%d",mas[i]);
}

void toNull(int *mas)
{
    for(int i = 0; mas[i] = 0; i++);
        // printf("%d",mas[i]);
}