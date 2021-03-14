#include <stdio.h>

int main()
{
    int id;
    printf("Quantos anos vc tem?");
    scanf("%d",&id);
    printf("%d? Nossa, vc parece que tem %d anos !\n" ,id , id*2);
    system("PAUSE");
    return 0;
}