#include<Minesweeper_operations.h>>
char grid[10][10], key[10][10];
int mine[10];
int px = 0, py = 0;
int win = 0, lose = 0;
int firstClick = 0;

int main ()
{
  char c;
  init ();
clrscr();
  display ();
  do
  {
    c = getch ();
    if (c == 'w')
    moveCursor (-1); // moves cursor up
    else if (c == 's')
    moveCursor (1); // moves cursor down
    else if (c == 'd')
    moveCursor (10); // moves cursor right
    else if (c == 'a')
    moveCursor (-10); // moves cursor left
    else if (c == ' ')
    click(px,py);
    if (c == 'f')
    flag ();
   clrscr();
    display ();
    if (lose == 1)
    printf ("YOU LOST!!!");
    if (win == 90)
    printf ("YOU WIN!!!!");
  }while (c!='e' && lose == 0 && win != 90);
  getch ();
  clrscr();
  return 0;
}
