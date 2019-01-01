#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  areas[0] = 100;
  char name[] = "Zed";
  areas[1] = name[0];
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };
  printf("The size of an int: %1ld\n", sizeof(int));
  printf("The size of areas (int[]): %1ld\n", sizeof(areas));
  printf("The number of ints in areas: %1ld\n", sizeof(areas) / sizeof(int));
  printf("The firt area is %d, the 2nd %d.\n", areas[0], areas[1]);
  printf("The size of a char: %1ld\n", sizeof(char));
  printf("The size of name (char[]): %1ld\n", sizeof(name));
  printf("The number of chars: %1ld\n", sizeof(name) / sizeof(char));
  printf("The size of full_name (char[]): %1ld\n", sizeof(full_name));
  printf("The number of chars: %1ld\n", sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
  return 0;
}
