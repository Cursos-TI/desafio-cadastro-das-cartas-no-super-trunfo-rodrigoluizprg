#include <stdio.h>

int main() {
  char  C1Estado;
  char  C1Codigo[4];
  char  C1Cidade[20];
  unsigned long int C1Populacao;
  float C1Area;
  float C1PIB;
  int   C1PontosTur;
  float C1DensidadePop;
  float C1PIBPerCapita;
  float C1SuperPoder;

  char  C2Estado;
  char  C2Codigo[4];
  char  C2Cidade[20];
  unsigned long int C2Populacao;
  float C2Area;
  float C2PIB;
  int   C2PontosTur;  
  float C2DensidadePop;
  float C2PIBPerCapita;  
  float C2SuperPoder;

  int ComparaPopulacao;
  int ComparaArea;
  int ComparaPIB;
  int ComparaPontosTur;
  int ComparaPIBPerCapita;
  int ComparaDensidade;
  int ComparaSuperPoder;  

  printf("Informe os dados da carta 1:\n");

  printf("Estado: ");
  scanf(" %c", &C1Estado);

  printf("Código: ");
  scanf("%s", C1Codigo);  

  printf("Cidade: ");
  scanf("%s", C1Cidade);  

  printf("População: ");
  scanf("%ld", &C1Populacao);    

  printf("Área: ");
  scanf("%f", &C1Area);     

  printf("PIB: ");
  scanf("%f", &C1PIB); 
  
  printf("Pontos Turísticos: ");
  scanf("%d", &C1PontosTur);    

  C1DensidadePop = (float) C1Populacao / C1Area;
  C1PIBPerCapita = (float) C1PIB / C1Area;
  C1SuperPoder = (float) C1Populacao + C1Area + C1PIB + C1PontosTur + C1PIBPerCapita + (1.0 / C1DensidadePop);  

  printf(" \n");
  printf("Informe os dados da carta 2:\n");

  printf("Estado: ");
  scanf(" %c", &C2Estado);

  printf("Código: ");
  scanf("%s", C2Codigo);  

  printf("Cidade: ");
  scanf("%s", C2Cidade); 

  printf("População: ");
  scanf("%ld", &C2Populacao);    

  printf("Área: ");
  scanf("%f", &C2Area);     

  printf("PIB: ");
  scanf("%f", &C2PIB); 
  
  printf("Pontos Turísticos: ");
  scanf("%d", &C2PontosTur);   

  C2DensidadePop = (float) C2Populacao / C2Area;
  C2PIBPerCapita = (float) C2PIB / C2Area;  
  C2SuperPoder = (float) C2Populacao + C2Area + C2PIB + C2PontosTur + C2PIBPerCapita + (1.0 / C2DensidadePop);

  ComparaPopulacao = C1Populacao > C2Populacao;
  ComparaArea = C1Area > C2Area;
  ComparaPIB = C1PIB > C2PIB;
  ComparaPontosTur = C1PontosTur > C2PontosTur;
  ComparaPIBPerCapita = C1PIBPerCapita > C2PIBPerCapita;
  ComparaDensidade = C1DensidadePop < C2DensidadePop;
  ComparaSuperPoder = C1SuperPoder > C2SuperPoder;  

  printf(" \n");
  printf("Carta 1:\n");
  printf("Estado: %c \n", C1Estado);
  printf("Código: %s \n", C1Codigo);
  printf("Cidade: %s \n", C1Cidade);
  printf("População: %ld \n", C1Populacao);
  printf("Área: %.2f \n", C1Area);
  printf("PIB: %.2f \n", C1PIB);
  printf("Pontos Turísticos: %d \n", C1PontosTur);
  printf("Densidade Populacional: %.2f \n", C1DensidadePop);
  printf("PIB Per Capita: %.2f \n", C1PIBPerCapita);
  printf("Super Poder: %.2f \n", C1SuperPoder);

  printf(" \n");
  printf("Carta 2:\n");
  printf("Estado: %c \n", C2Estado);
  printf("Código: %s \n", C2Codigo);
  printf("Cidade: %s \n", C2Cidade);
  printf("População: %ld \n", C2Populacao);
  printf("Área: %.2f \n", C2Area);
  printf("PIB: %.2f \n", C2PIB);
  printf("Pontos Turísticos: %d \n", C2PontosTur);  
  printf("Densidade Populacional: %.2f \n", C2DensidadePop);
  printf("PIB Per Capita: %.2f \n", C2PIBPerCapita);  
  printf("Super Poder: %.2f \n", C2SuperPoder);

  printf("\nComparação de Cartas:\n");

  printf("População: Carta %d venceu (%d)\n", ComparaPopulacao ? 1 : 2, ComparaPopulacao);
  printf("Área: Carta %d venceu (%d)\n", ComparaArea ? 1 : 2, ComparaArea);
  printf("PIB: Carta %d venceu (%d)\n", ComparaPIB ? 1 : 2, ComparaPIB);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", ComparaPontosTur ? 1 : 2, ComparaPontosTur);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", ComparaDensidade ? 1 : 2, ComparaDensidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", ComparaPIBPerCapita ? 1 : 2, ComparaPIBPerCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", ComparaSuperPoder ? 1 : 2, ComparaSuperPoder); 

  return 0;
}