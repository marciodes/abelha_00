#include <stdio.h>

int main() {
    float valorTotal, desconto, valorFinal;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);

    if (valorTotal >= 300.00 && valorTotal <= 500.00) {
        desconto = valorTotal * 0.05;
    } else if (valorTotal > 500.00 && valorTotal <= 1000.00) {
        desconto = valorTotal * 0.10;
    } else if (valorTotal > 1000.00) {
        desconto = valorTotal * 0.15;
    } else {
        desconto = 0.00;
    }

    valorFinal = valorTotal - desconto;

    printf("Valor final da compra: R$%.2f\n", valorFinal);

    return 0;
}
