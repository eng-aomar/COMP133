#include <stdio.h>
int main() {

   FILE *inp; // File pointer

   int sum = 0, score, input_status;

   inp = fopen("scores.dat", "r");
   // if the file is in another location, you have to write the full path  FILE *in = fopen("C:\\Users\\user\\Desktop\\output.txt","w");

   input_status = fscanf(inp, "%d", &score);
   while (input_status != EOF)
   {
      printf("%d ", score);
      sum += score;
      input_status = fscanf(inp, "%d",   &score);
   }
   printf("\nSum of exam scores is %d\n", sum);
   fclose(inp);
   return 0;
}
