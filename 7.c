#include <stdio.h>
#include <stdlib.h>

enum Car {
	Passenger,
	Cargo,
	Bus,
	Racing
};

struct Rectangle
{
    double x, y;//Координаты левого верхнего угла
    double width;//Ширина
    double height;//Высота
};

enum {
    PLAY = 0b0001,
    PAUSE = 0b0010,
    RECORD = 0b0100,
};

union {
    struct {
        unsigned char Play : 1;
        unsigned char Pause : 1;
        unsigned char Record : 1;
    };
    unsigned char flags;
} condition;


int main()
{
    //1
  printf("%d", Bus);

  //2
    struct Rectangle rect;

    rect.x = 0;
    rect.y = 0;

    rect.width = 5;
    rect.height = 10;

    printf("\n\nArea: %lf\n", rect.width * rect.height);
    printf("Perimeter: %lf\n\n", 2 * (rect.width + rect.height));

    //3
    scanf("%x", &condition.flags);
    if (condition.Play)
        printf("Play is on\n");
    else
        printf("Play is off\n");

    if (condition.Pause)
        printf("Pause is on\n");
    else
        printf("Pause is off\n");

    if (condition.Record)
        printf("Record is on\n");
    else
        printf("Record is off\n");

	return 0;
}
