#include <stdio.h>
#include <stdlib.h>

void func1() //출력값으로 반환할게 없기때문에 void 
{
    int x;
    printf("func1 x is at %p\n", &x); 
}
     

int main(int argc, char *argv[])
{
    int x;
    printf("main x is at %p\n", &x);
    func1();
          
    system("PAUSE");
    return 0;
}
