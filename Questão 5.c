#include <stdio.h>

void main(void)
{
    int q_paes = 0, q_broas = 0;
    float total = 0;
    
    printf("Digite a quantidade de pãoes franceses que foram vendidos: ");
    scanf("%d", &q_paes);
    printf("Digite a quantidade de broas que foram vendidas: ");
    scanf("%d", &q_broas);
    
    printf("O total arrecadado das vendas foi: %0.2f reais", total = (q_paes*0.12)+(q_broas*1.50));
    printf("\nA quantidade que deve ser guardada na conta poupança é de: %0.2f reais", total = total*0.1);
}
