#include <stdio.h>

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

    for (int k = 0; k < i; k++)
    {
      // left side of the pyramid
      printf("#");
    }

    printf("  "); // two spaces between pyramids

    for (int l = 0; l < i; l++)
    {
      // right side of the pyramid
      printf("#");
    }
    printf("\n");
  }
  printf("\n");
}
