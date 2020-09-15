#include "stdio.h"
#include "stdlib.h"

extern void lcdprintf(char *pcStr,...);
extern int diag_touch_screen(void);
extern void lcdputchar(int pos_x,int pos_y,char c);
extern void System_init();
extern void Draw_picture(void);

int main()
{

    System_init();
    lcdprintf(" ");
    Draw_picture();
    diag_touch_screen();
	while(1);
	return 0;
}