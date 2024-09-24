/*Exercicio

Crie um programa que receba um número inteiro e uma função que reteorne 1 se o número digitado for
positivo, ou retorne 0 caso o número digitado seja negativo.

*/

int funcao_retorno(int a)
{
    
    if (a > 0)
    {
        return 1;
    }
        
    else
    {
        return 0;
    }

}

int main()
{
    int numero;
    printf("Digite um numero inteiro qualquer, positivo ou negativo.\n");
    scanf("%d", &numero);
    
    int cafe = funcao_retorno(numero);
    
    if (numero > 0)
    {
        printf("Retorno: %d. O numero %d eh positivo\n", cafe, numero);
    }

    else
    {
        printf("Retorno: %d. O numero %d eh negativo\n", cafe, numero);
    }

    system ("pause");
    return 0;
}