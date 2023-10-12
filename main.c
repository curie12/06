#include <stdio.h>
#include <stdlib.h>

void tenstar() //출력값으로 반환할게 없기때문에 void 
{
    int i;
    for(i=0; i<10; i++)
             printf("*"); 
}
     

int main(int argc, char *argv[])
{
    int i;
    
    tenstar();
    tenstar();
    tenstar();
          
  system("PAUSE");	
  return 0;
}
