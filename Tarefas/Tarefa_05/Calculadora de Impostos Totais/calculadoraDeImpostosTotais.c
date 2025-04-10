#include <stdio.h>

int main()
{
    double cotacaoDolar, aliquota, valorProdutoUSD, valorFreteUSD;
    scanf("%lf %lf %lf %lf", &cotacaoDolar, &aliquota, &valorProdutoUSD, &valorFreteUSD);

    double valorProdutoBRL = valorProdutoUSD * cotacaoDolar;
    double valorFreteBRL = valorFreteUSD * cotacaoDolar;
    double valorTotal = valorProdutoBRL + valorFreteBRL;
    double valorTaxaImportacao = valorTotal * 0.60;

    if (valorProdutoUSD >= 2500)
    {
        valorTaxaImportacao = valorProdutoBRL * 0.60;
    }

    double valorFinal = (valorProdutoBRL + valorFreteBRL + valorTaxaImportacao) / (1 - (aliquota / 100));

    if (valorProdutoUSD >= 2500)
    {
        valorFinal = (valorProdutoBRL + 0 + valorTaxaImportacao) / (1 - (aliquota / 100));
    }

    double valorICMS = valorFinal * (aliquota / 100);
    double valorImpostoTotal = valorTaxaImportacao + valorICMS;

    if (valorProdutoUSD >= 2500)
    {
        valorFinal = valorTotal + valorImpostoTotal;
    }

    printf("%.2lf\n", cotacaoDolar);
    printf("%.2lf\n", valorProdutoBRL);
    printf("%.2lf\n", valorFreteBRL);
    printf("%.2lf\n", valorTotal);
    printf("%.2lf\n", valorTaxaImportacao);
    printf("%.2lf\n", valorICMS);
    printf("%.2lf\n", valorImpostoTotal);
    printf("%.2lf\n", valorFinal);

    if (valorProdutoUSD >= 2500)
    {
        printf("Impostos calculados sem o frete");
    }

    else
    {
        printf("Impostos calculados com o frete");
    }

    return 0;
}