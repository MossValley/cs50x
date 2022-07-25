#include <stdio.h>

void pyramid_row(int n)
{
  for (int k = 0; k < n; k++)
  {
    printf("#");
  }
}

int main(void)
{
  int size = 0;
  do
  {
    printf("Height: ");
    scanf("%i", &size);
  } while (size < 1 || size > 8);

  for (int i = 0; i <= size; i++)
  {
    // print spaces on left
    for (int j = 0; j < size - i; j++)
    {
      printf(" ");
    }

    // left side of the pyramid
    pyramid_row(i);

    printf("  "); // two spaces between pyramids

    // right side of the pyramid
    pyramid_row(i);

    printf("\n");
  }
  printf("\n");
}
