// DESCOBRE A IDADE DO FILHO MAIS VELHO
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade1, idade2, idade3, idade4;

    printf("Digite a idade da dona Monica: ");
    scanf("%d", &idade1);
    printf("Digite a idade de um filho: ");
    scanf("%d", &idade2);
    printf("Digite a idade do outro filho: ");
    scanf("%d", &idade3);

    idade4 = idade1 - (idade2 + idade3);

    if (idade2 > idade3 && idade2 > idade4)
    {
        printf("A idade do filho mais velho: %d\n", idade2);
    }
    else if (idade3 > idade2 && idade3 > idade4)
    {
        printf("A idade do filho mais velho: %d\n", idade3);
    } else {
        printf("A idade do filho mais velho: %d\n", idade4);
    }
    
    return 0;
}
