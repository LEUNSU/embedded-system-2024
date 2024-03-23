/*
  표준입출력
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
  char info[20] = "이은수";

  FILE* fp1;

  fp1 = fopen("LEE.txt", "w");

  if(fp1 == NULL)
  {
    fprintf(stderr, "Error");
    exit(1);
  }

  fprintf(fp1,"%s", info);
  printf("%s", info);
  printf("\n");

  fclose(fp1);

  char msg[20];
  FILE* fp2;

  fp1 = fopen("LEE.txt", "r");
  fscanf(fp1, "%s", msg);

  fp2 = fopen("LEEcopy.txt", "w");

  if(fp2 == NULL)
  {
    fprintf(stderr, "Error");
    exit(1);
  }
  fprintf(fp2, "%s", msg);

  fclose(fp2);
}
