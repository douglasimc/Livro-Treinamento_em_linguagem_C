#include <stdio.h>

int main()
{
   FILE *fptr;
   char c;

   fptr = fopen("empty-file.txt", "w");

   c = fgetc(fptr);
   if( ferror(fptr) )
   {
      perror("empty-file.txt"); // Função autocompletará com erro apresentado pelo sistema
      fclose(fptr);
      exit(1);
   }

   fclose(fptr);

   system("PAUSE");
   return(0);
}
