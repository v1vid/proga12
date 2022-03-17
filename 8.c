#include <stdio.h>
#include <string.h>

int main() {
    char first[256];
    char second[256];

    gets(first);
    gets(second);

    //1
    char *third = strcat(first, second);
    printf("%s", third);

    //4
    int n;
    printf("\nn = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (first[i] == second[i])
        {
            printf("%d элемент совпадает\n", i);
        }
        else
        {
            printf("%d элемент не совпадает\n", i);
        }
    }

    //7
    printf("Длина равна %d\n", strlen(first));

    //10
    int *ptr;
	ptr = strpbrk(first, second);
	if (ptr)
    	{
      	  printf("Символ: %c\n", *ptr);
   	 }
	else
   	 {
    	   printf("Таких символов нет!\n");
   	 }

   	 //11
    int length;
	length = strspn(first, second);
	printf("Длина последовательности: %d\n", length);

    return 0;
}
