#include <stdio.h>

int elementideArv();
int skalaarneK();

int main(void) {

  //Massiivi A loomine
  int elemente = elementideArv();
  int massiivA[elemente];

  // Maassiivi A arvude sisestus
  int i;
  printf("Sisestage reaalarvulised massiivi A arvud: \n");
  for (i = 0; i < elemente; ++i)  {
    scanf("%d", &massiivA[i]);
  };

  int skalaarne_k = skalaarneK();

  return 0;
}

// Massiivi elementide arvu sisestus
int elementideArv(){
    int elemendid;
    do {
      do {
        printf("Sisestage massiivi A täisarvuline elementide arv n: ");
        scanf("%d", &elemendid);
      } while (elemendid < 1);//massiivi A elementide arv n peab olema suurem või võrdne 1ga
    } while (elemendid > 10); //massiivi A elementide arv n peab olema väiksem või võrdne 10ga
    return elemendid;
};

//Skalaarne k sisestus
int skalaarneK(){
    int skalaarne;
    do {
    printf("Sisestage positiivne skalaarne k: ");
    scanf("%d", &skalaarne);
  } while (skalaarne <= 0); //Skalaarne k peab olema positiivne
    return skalaarne;
};
