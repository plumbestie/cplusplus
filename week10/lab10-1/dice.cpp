#include "dice.h"

void Dice ::roll()
{
  face = rand() % 6 + 1;
}
int Dice ::getFace()
{
  return face;
}
