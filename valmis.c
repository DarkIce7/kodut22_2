#include <stdio.h>

int elementideArv(char[]);
void sisestus(int elemente, float[elemente]);
int skalaarneK(char[]);
int veergudeArv(int, int);
void t22tlus(int reapikkus, int ridadeArv, float maatriks[ridadeArv][reapikkus], int elemente, float massiiv[elemente]);
void v2ljastus(int reapikkus, int ridadeArv, float maatriks[ridadeArv][reapikkus]);

int main(void) {

  // Massiivi elementide arv
  int elemente = elementideArv("Sisestage massiivi A täisarvuline elementide arv n: \n");

  // Massiivi loomine
  float massiiv[elemente];
  sisestus(elemente, massiiv);

  // Maatriksi ridade ja veergude arvutamine
  int reapikkus = skalaarneK("Sisestage positiivne skalaarne k: \n"); // k arvutamine
  int ridadeArv = veergudeArv(elemente, reapikkus); // veergude arvutamine

  // Maatriksi loomine
  float maatriks[ridadeArv][reapikkus];
  t22tlus(reapikkus, ridadeArv, maatriks, elemente, massiiv);

  // Maatriksi välja printimine
  v2ljastus(reapikkus, ridadeArv, maatriks);

  return 0;
};

// Massiivi elementide
int elementideArv(char M []){
    int elemendid;
    do {
      do {
        printf("%s", M);
        scanf("%d", &elemendid);
      } while (elemendid < 1);//massiivi A elementide arv n peab olema suurem või võrdne 1ga
    } while (elemendid > 10); //massiivi A elementide arv n peab olema väiksem või võrdne 10ga
    return elemendid;
};

// Maassiivi arvude sisestus
void sisestus(int elemente, float massiiv[elemente]) {
  int i, j;
  printf("Sisestage reaalarvulised massiivi A arvud: \n");
  for (i = 0; i < elemente; ++i)  {
    scanf("%f", &massiiv[i]);
  };
};

//Ridade k sisestus
int skalaarneK(char N[]){
    int skalaarne;
    do {
    printf("%s", N);
    scanf("%d", &skalaarne);
  } while (skalaarne <= 0); //Skalaarne k peab olema positiivne
    return skalaarne;
};

//Maatrikis veergude arv
int veergudeArv(int elemendid, int skalaarne_k) {
  int arv, arv2, tulemus;
  arv = elemendid / skalaarne_k;
  arv2 = elemendid % skalaarne_k;
  if (arv2 == 0) {
    tulemus = arv;
  } else {
    tulemus = arv + 1;
  };
  return tulemus;
};

// Maatriksi arvud
void t22tlus(int reapikkus, int ridadeArv, float maatriks[ridadeArv][reapikkus], int elemente, float massiiv[elemente]) {
  int m, l;
  int n = 0;
  for (int m = 0; m < ridadeArv; m++) {
    for (int l = 0; l < reapikkus; l++) {
      maatriks[m][l] = massiiv[n];
      n++;
    };
  };
};

// Maatriksi välja printimine
void v2ljastus(int reapikkus, int ridadeArv, float maatriks[ridadeArv][reapikkus]) {
  int g, h;
  printf("Maatriks: \n");
  for (g = 0; g < ridadeArv; g++) {
    for (h = 0; h < reapikkus; h++) {
      printf("%f\t", maatriks[g][h]);
    };
    printf("\n");
  };
};
