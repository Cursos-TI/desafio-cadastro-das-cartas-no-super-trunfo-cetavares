#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Carta 1:
    char CodigoA1[5] = "A01";
    char EstadoA1 = 'A';
    char CidadeA1[20] = "Florianopolis";
    int PopulacaoA1 = 537211;
    float AreaA1 = 674.844;
    float PIBA1 = 21312446.73;
    int TuristicosA1 = 13;
    

    // Carta 2:
    char CodigoB1[5] = "B01";
    char EstadoB1 = 'B';
    char CidadeB1[20] = "Paraty";
    int PopulacaoB1 = 45243;
    float AreaB1 = 924.296;
    float PIBB1 = 1955302.792;
    int TuristicosB1 = 9;
    

    printf ("Digite o Codigo de sua Carta: \n");
    scanf ("%s" , &CodigoA1 , &CodigoB1);
    printf ("Codigo da Carta: %s \n" , CodigoA1 , CodigoB1);
    printf ("Estado: %c \n" , EstadoA1 , EstadoB1);
    printf ("Cidade: %s \n" , CidadeA1 , CidadeB1);
    printf ("Populacao: %i \n" , PopulacaoA1 , PopulacaoB1);
    printf ("Area da Cidade: %.3f \n" , AreaA1 , AreaB1);
    printf ("PIB da Cidade: %.2f \n" , PIBA1 , PIBB1);
    printf ("Numero de Pontos Turisticos: %i \n" , TuristicosA1 , TuristicosB1);



    return 0;
}
