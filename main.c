#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int validadata(int dia, int mes, int ano);
main(){
  int dia, mes, ano, valido;
  printf("Digite o dia: ");
  scanf("%i", &dia);
  getchar();
  printf("Digite o mês: ");
  scanf("%i", &mes);
  getchar();
  printf("Digite o ano: ");
  scanf("%i", &ano);
  getchar();
  valido = validadata(dia, mes, ano);
  if(valido == 1)printf("\nData válida");
  else{printf("\nData inválida");}
  getchar();}
int validadata(int dia, int mes, int ano){
  int valido = 0;
  int bis;
  if(((ano % 4 == 0)&&(ano % 100 != 0))||(ano % 400 == 0)){
    bis = 1;
  }
  else{
    bis = 0;
  }
  switch(mes){
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12:   
      if(dia > 0 && dia <= 31){
        valido = 1;
      }
    break;
    case 4:
    case 6: 
    case 9: 
    case 11:
      if(dia > 0 && dia <= 30){
        valido = 1;
      }
    break;
    case 2:
      if(bis == 1){
        if(dia > 0 && dia <= 29){
          valido = 1;
        }
      }
      else{
        if(dia > 0 && dia <= 28){
          valido = 1;
        }
      }
    break;
  }
  return valido;
}