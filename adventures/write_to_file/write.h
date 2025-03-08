#include <stdio.h>


void write(char str[]) {
    FILE *fp;

   fp = fopen("/home/mohsen/frr/c_program/test.txt", "w+");
   fprintf(fp, "String: %s\n", str);
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);

   printf("String: %s\n", str);
}

