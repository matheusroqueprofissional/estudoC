int main (void) {

    ///primeira funçao
int primeiraparte(void)
{
    ///declarando variavel i com valor 10
   int i = 10;
   /// ponteiro apontara para o endereço de I
   int *ponteiro = &i;
   system("cls");

   printf("\n_______INICIO PARTE1____________");
   printf("\n\nvalor da variavel......: %d\n",i);
   printf("endereço da variavel...: %d\n",&i);
   ///print valor do ponteiro
   printf("valor do ponteiro......: %d\n",*ponteiro);
   ///print endereço do ponteiro
   printf("endereço do ponteiro...: %d\n",ponteiro);

   printf("\n\n");
    }
///inicio da segunda funcao
int segundaparte(void){

    ///nessa funçao é possivel ver que o ponteiro
    ///é um valor atualizavel voce não precisa fica pedindo pra ele alterar seu valor
   int x = 10;
   int *ponteiro2 = &x;


   printf("\n_______INICIO PARTE2____________");
   printf("\nponteiro antes de alterar: %d\n",*ponteiro2);
   x = 30;
   printf("ponteiro depois de alterar: %d",*ponteiro2);
   x = 40;
   printf("\nponteiro depois de alterar: %d\n\n\n",*ponteiro2);

   printf("\n\n");
    }
  int terceiraparte(void){
  printf("\n_______INICIO PARTE3____________");
  ///variaveis
  int x = 30;
  char y = 'a';
  double z = 20.50;
  ///ponteiros
  int *ponteiro; ponteiro= &x;
  char *ponteiro2; ponteiro2 = &y;
  double *ponteiro3; ponteiro3 = &z;

    ///ponteiros com diferentes tipos de variaveis
  printf("\nENDEREÇO de X: %d",ponteiro);
  printf("\nVALOR de X: %d\n",*ponteiro);

  printf("\nENDEREÇO de Y: %d",ponteiro2);
  printf("\nVALOR de Y: %c\n",*ponteiro2);

  printf("\nENDEREÇO de Z: %d",ponteiro3);
  printf("\nVALOR de Z: %f\n",*ponteiro3);
printf("\n\n");
  }
  void quartaparte(void){
      ///somando dois ponteiros
      printf("\n_______INICIO PARTE4____________\n");
      int x = 10;
      int *ponteiro = &x;
      int y = 30;
      int *ponteiro2 = &y;
      int resultado = *ponteiro+*ponteiro2;
      printf("%d\n",resultado);
  }
     primeiraparte();
     segundaparte();
     terceiraparte();
     quartaparte();


}
