#include <stdio.h>
 int main(int argc, char **argv)
{
    unsigned int randval[3];
    FILE *f;
    f = fopen("/dev/random", "r");
    fread(&randval, sizeof(unsigned int), 3, f);
    fclose(f);

      printf("%u\n", randval);

   return 0;
}
