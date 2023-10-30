#include <stdio.h>
#include <string.h>
int main(void) {
  char s1[25];
  char names[5][25];
  for(int i=0;i<5;i++)
    {
     printf("Enter name #%d",i+1);
     scanf("%s",s1);
     strcpy(names[i],s1);
   }
  for(int i=0;i<5;i++)
    printf("%s\n",names[i]);
  return 0;
}