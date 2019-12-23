#include <stdio.h>
int main()
{
   char name[50];
   FILE *file;
   file = (fopen("/Users/macbook/Desktop/student.txt", "r"));
   if(file == NULL)
   {
       printf("Error!");
   }
   char line [ 128 ]; /* or other suitable maximum line size */
   while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
   {
      printf("%s\n",line ); /* write the line */
   }
   
   fclose(file);
   return 0;
}