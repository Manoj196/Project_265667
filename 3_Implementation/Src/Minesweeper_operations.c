#include "Minesweeper_operations.h"
char grid[10][10], key[10][10];
int mine[10];
int px = 0, py = 0;
int win = 0, lose = 0;
int firstClick = 0;

// /* reads from keypress, doesn't echo */
// int getch(void)
// {
//     struct termios oldattr, newattr;
//     int ch;
//     tcgetattr( STDIN_FILENO, &oldattr );
//     newattr = oldattr;
//     newattr.c_lflag &= ~( ICANON | ECHO );
//     tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
//     ch = getchar();
//     tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
//     return ch;
// }

void init() // initializes all grid tiles to '.'
{
  int x, y;
  for(y = 0; y < 10; y++)
  {
    for(x = 0; x < 10; x++)
    {
      grid[x][y] = '.';
      key[x][y] = '0';
    }
  }
}

void display()//prints grid with the cursor represented by <>
{
  int x, y;
  for(y = 0; y < 10; y++)
  {
    for(x = 0; x < 10; x++)
    {
      if(px == x && py == y)
      printf("<%c>",grid[x][y]);
      else if(x == px + 1 && py == y)
      printf("%c",grid[x][y]);
      else
      printf(" %c",grid[x][y]);
    }
    printf("\n");
  }
}

void genMine()
{
  int x,y,p;
  srand(time(0));

  p = px*10 + py;

  for(x = 0; x < 10; x++)
  {
    mine[x] = rand()%100;
    for(y = x - 1; y >= 0; y--)
    {
      if((mine[y] == mine[x]) || (mine[x] == p))
      break;
    }
    if(y>=0)
    --x;
  }
}

void keygen()
{
  int i;
  int mx, my;
  for(i = 0; i < 10; i++)
  {
    mx = mine[i]/10;
    my = mine[i]%10;
    key[mx][my] = '*';
    (mx < 9)?key[mx + 1][my]++:i; // right
    (mx > 0)?key[mx - 1][my]++:i; // left
    (my > 0)?key[mx][my - 1]++:i; // top
    (my < 9)?key[mx][my + 1]++:i; // bottom
    (mx < 9) && (my > 0)?key[mx + 1][my - 1]++:i; // top right
    (mx > 0) && (my > 0)?key[mx - 1][my - 1]++:i; // top left
    (mx < 9) && (my < 9)?key[mx + 1][my + 1]++:i; // bottom right
    (mx > 0) && (my < 9)?key[mx - 1][my + 1]++:i; // bottom left
  }
}
void flag()
{
    if(grid[px][py] == '.')
        grid[px][py] = 'f';
    else if(grid[px][py] == 'f')
        grid[px][py] = '.';
}

void moveCursor(int n)// moves cursor depending on value of n
{
  int p = (px*10) + py;
  p = p + n;
  if(p < 0)
  p = p + 100;
  p = p % 100;
  px = p/10;
  py = p%10;
}

void click(int x, int y)
{
  if(firstClick == 0)
  {
    firstClick = 1;
    genMine();
    keygen();
  }
  if(key[x][y] == '*' && grid[x][y] != 'f')
  {
    for(x = 0; x < 10; x++)
    {
        if(grid[mine[x]/10][mine[x]%10] == 'f')
            grid[mine[x]/10][mine[x]%10] = 'x';
        else
            grid[mine[x]/10][mine[x]%10] = '*';
    }
    lose = 1;
    return;
  }
  if(key[x][y] == '0')
  {
    grid[x][y] = ' ';
    win++;
    if(x < 9 && grid[x+1][y] == '.') // right
    click(x+1,y);
    if(x > 0 && grid[x-1][y] == '.') // left
    click(x-1,y);
    if(y > 0 && grid[x][y-1] == '.') // top
    click(x,y-1);
    if(y < 9 && grid[x][y+1] == '.') // bottom
    click(x,y+1);
    if(x < 9 && y > 0 && grid[x+1][y-1] == '.') // top right
    click(x+1,y-1);
    if(x > 0 && y > 0 && grid[x-1][y-1] == '.') // top left
    click(x-1,y-1);
    if(x < 9 && y < 9 && grid[x+1][y+1] == '.') // bottom right
    click(x+1,y+1);
    if(x > 0 && y < 9 && grid[x-1][y+1] == '.') // bottom left
    click(x-1,y+1);
  }
  else if(grid[x][y] == '.')
  {
    grid[x][y] = key[x][y];
    win++;
  }
}


