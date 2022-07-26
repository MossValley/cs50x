#include <stdio.h>
#include <math.h>

int main(void)
{
  long card = 0;
  do
  {
    printf("Number: ");
    scanf("%li", &card);
  } while (card == 0);

  int card_array[16] = {};
  int last_index = 0;
  // this step effectively reverses the card number
  while (card)
  {
    int result = card % 10;
    card_array[last_index] = result;
    card = card / 10;

    printf("result %i\n", result);
    printf("card %li\n", card);
    last_index++;
  }

  printf("last index: %i\n", last_index);

  // multiply each second digit from last by 2

  int step_one_array[16] = {};
  int step_one_index = 0;
  for (int i = 1; i < last_index; i += 2)
  {
    int digit = card_array[i];
    printf("digit: %i\n", digit);
    int multiplied_digit = digit * 2;

    printf("multiplied digit: %i\n", multiplied_digit);

    // check if result is more than one digit long

    while (multiplied_digit)
    {
      int result = multiplied_digit % 10;
      multiplied_digit = multiplied_digit / 10;
      printf("result %i\n", result);
      printf("mDigit %i\n", multiplied_digit);
      step_one_array[step_one_index] = result;
      step_one_index++;
      printf("s1index %i\n", step_one_index);
    }
  }

  // add these multiplied digits together
  int sum_step_one = 0;
  for (int i = 0; i < step_one_index; i++)
  {
    sum_step_one += step_one_array[i];
    printf("sum step: %i\n", sum_step_one);
  }

  // add sum to other numbers not multiplied by two
  printf("sum: %i\n", sum_step_one);
  int step_two = sum_step_one;

  for (int i = 0; i < last_index; i += 2)
  {
    int digit = card_array[i];
    printf("digit: %i", digit);
    step_two += digit;
    printf("sum step2: %i\n", step_two);
  }
  printf("final sum: %i\n", step_two);
  // is the last digit 0?
  int last = step_two % 10;

  if (last == 0)
  {
    printf("success: %i\n", last);
  }
  else
  {
    printf("fail: %i\n", last);
  }
}
