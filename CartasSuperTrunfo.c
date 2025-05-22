#include <stdio.h>

int main() {
  char  C1Estado;
  char  C1Codigo[4];
  char  C1Cidade[20];
  int   C1Populacao;
  float C1Area;
  float C1PIB;
  int   C1PontosTur;
  float C1DensidadePop;
  float C1PIBPerCapita;

  char  C2Estado;
  char  C2Codigo[4];
  char  C2Cidade[20];
  int   C2Populacao;
  float C2Area;
  float C2PIB;
  int   C2PontosTur;  
  float C2DensidadePop;
  float C2PIBPerCapita;  

  printf("Informe os dados da carta 1:\n");

  printf("Estado: ");
  scanf(" %c", &C1Estado);

  printf("Código: ");
  scanf("%s", C1Codigo);  

  printf("Cidade: ");
  scanf("%s", C1Cidade);  

  printf("População: ");
  scanf("%d", &C1Populacao);    

  printf("Área: ");
  scanf("%f", &C1Area);     

  printf("PIB: ");
  scanf("%f", &C1PIB); 
  
  printf("Pontos Turísticos: ");
  scanf("%d", &C1PontosTur);    

  C1DensidadePop = (float) C1Populacao / C1Area;
  C1PIBPerCapita = (float) C1PIB / C1Area;

  printf(" \n");
  printf("Informe os dados da carta 2:\n");

  printf("Estado: ");
  scanf(" %c", &C2Estado);

  printf("Código: ");
  scanf("%s", C2Codigo);  

  printf("Cidade: ");
  scanf("%s", C2Cidade); 

  printf("População: ");
  scanf("%d", &C2Populacao);    

  printf("Área: ");
  scanf("%f", &C2Area);     

  printf("PIB: ");
  scanf("%f", &C2PIB); 
  
  printf("Pontos Turísticos: ");
  scanf("%d", &C2PontosTur);   

  C2DensidadePop = (float) C2Populacao / C2Area;
  C2PIBPerCapita = (float) C2PIB / C2Area;  

  printf(" \n");
  printf("Carta 1:\n");
  printf("Estado: %c \n", C1Estado);
  printf("Código: %s \n", C1Codigo);
  printf("Cidade: %s \n", C1Cidade);
  printf("População: %d \n", C1Populacao);
  printf("Área: %.2f \n", C1Area);
  printf("PIB: %.2f \n", C1PIB);
  printf("Pontos Turísticos: %d \n", C1PontosTur);
  printf("Densidade Populacional: %.2f \n", C1DensidadePop);
  printf("PIB Per Capita: %.2f \n", C1PIBPerCapita);

  printf(" \n");
  printf("Carta 2:\n");
  printf("Estado: %c \n", C2Estado);
  printf("Código: %s \n", C2Codigo);
  printf("Cidade: %s \n", C2Cidade);
  printf("População: %d \n", C2Populacao);
  printf("Área: %.2f \n", C2Area);
  printf("PIB: %.2f \n", C2PIB);
  printf("Pontos Turísticos: %d \n", C2PontosTur);  
  printf("Densidade Populacional: %.2f \n", C2DensidadePop);
  printf("PIB Per Capita: %.2f \n", C2PIBPerCapita);  

  return 0;
}