#include <stdio.h>
#include <stdlib.h>
int main() {
 char *mas[6];
 char *mas_dynamic;
 mas[0] = (char *) 'H';
 mas[1] = (char *) 'e';
 mas[2] = (char *) 'l';
 mas[3] = (char *) 'l';
 mas[4] = (char *) 'o';
 printf("%c\n%c\n%c\n%c\n%c", (char *) mas[0], (char *)
mas[1], (char *) mas[2], (char *) mas[3], (char *) mas[4]);
 mas_dynamic = (char*) malloc(sizeof(char)*5);
 mas_dynamic[0] = 'H';
 mas_dynamic[1] = 'e';
 mas_dynamic[2] = 'l';
 mas_dynamic[3] = 'l';
 mas_dynamic[4] = 'o';
 printf("\n%c\n%c\n%c\n%c\n%c", mas_dynamic[0],
mas_dynamic[1], mas_dynamic[2], mas_dynamic[3],
mas_dynamic[4]);
 free(mas_dynamic);
}