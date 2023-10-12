#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
    int add_result=0;
    add_result = a + b;
    return add_result; 
}

int square(int n)
{
    return (n*n); 
}

int get_max(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main(int argc, char *argv[])
{
    int a, b; //매개변수랑 똑같이 잡을필요 없음. 
    
    a = 3;
    b = 10;
    printf("sumTwo result : %i\n", sumTwo(a,b));
    
    printf("square result : %i\n", square(a));
    
    printf("get_max result : %i\n", get_max(a,b));
    
          
    system("PAUSE");
    return 0;
}
