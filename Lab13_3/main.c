#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(char s[100]);

int main() {
    char s[100];
    printf("Введите текст\n");
    fgets(s, 100, stdin);
    printf("Число слов написанных с большой буквы = %i\n",count(s));
}

int count(char s[100]){
    int cn=0;
    for (int i = 1; i<strlen(s);i++){
        if (s[i-1]==' ' && toupper(s[i])==s[i]) {cn++;}
    }
    return cn;
}
