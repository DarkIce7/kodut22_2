#include <stdio.h>
#include <math.h>

int elementideArv();
int skalaarneK();
int veergudeArv(int, int);

int main(void) {

  //Massiivi loomine
  int elemente = elementideArv();
  float massiiv[elemente];

  // Maassiivi arvude sisestus
  int i;
  printf("Sisestage reaalarvulised massiivi A arvud: .\n");
  for (i = 0; i < elemente; ++i)  {
    scanf("%f", &massiiv[i]);
  };

  //Maatriksi loomine
  int skalaarne_k = skalaarneK();
  int veerud = veergudeArv(elemente, skalaarne_k);

  float maatriks[skalaarne_k][veerud];

  return 0;
}

// Massiivi elementide arvu sisestus
int elementideArv(){
    int elemendid;
    do {
      do {
        printf("Sisestage massiivi A täisarvuline elementide arv n: .\n");
        scanf("%d", &elemendid);
      } while (elemendid < 1);//massiivi A elementide arv n peab olema suurem või võrdne 1ga
    } while (elemendid > 10); //massiivi A elementide arv n peab olema väiksem või võrdne 10ga
    return elemendid;
};

//Ridade k sisestus
int skalaarneK(){
    int skalaarne;
    do {
    printf("Sisestage positiivne skalaarne k: ");
    scanf("%d", &skalaarne);
  } while (skalaarne <= 0); //Skalaarne k peab olema positiivne
    return skalaarne;
};

//Maatrikis veergude arv
int veergudeArv(int elemendid, int skalaarne_k) {
  int arv, arv2, tulemus;
  arv = elemendid/skalaarne_k;
  arv2 = elemendid%skalaarne_k;
  if (arv2 == 0) {
    tulemus = arv;
  } else {
    tulemus = arv + 1;
  };
  return tulemus;
};
