#include "Minesweeper_operations.c"



int main()
{
  char c;
  init();

  system("cls");
  display();

  do
  {
    c = getch();
    if(c == 'w')
    moveCursor(-1); // moves cursor up
    else if(c == 's')
    moveCursor(1); // moves cursor down
    else if(c == 'd')
    moveCursor(10); // moves cursor right
    else if(c == 'a')
    moveCursor(-10); // moves cursor left
    else if(c == ' ')
    click(px,py);
    if(c == 'f')
    flag();

    system("cls");
    display();
    if(lose == 1)
    printf("YOU LOST!!!");
    if(win == 90)
    printf("YOU WIN!!!!");
  }while(c!='e' && lose == 0 && win != 90);

  getch();
  system("cls");

  return 0;
}
