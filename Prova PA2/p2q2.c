#include <stdio.h>
#include <stdlib.h>

int copiarString(char str1[100], char str2[100]) {
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    
    str2[i] = '\0';
    
    printf("String copiada: %s", str2);
    return 1;
}

int main() {
    char str1[100] = "bia linda";
    char str2[100];
    
    copiarString(str1, str2);
    return 0;
}
