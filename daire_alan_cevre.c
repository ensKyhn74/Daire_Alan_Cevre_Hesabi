#include <stdio.h>
#define PI 3.14
// Klavyeden girilen yarıçapa göre dairenin alanını ve çevresini hesaplar

int main() 

{

 double yaricap;
 
 printf("dairenin yaricapini girin: ");
 scanf("%lf",&yaricap);
 
 double alan = PI * yaricap * yaricap;
 double cevre = 2 * PI * yaricap;
 
 printf("dairenin alani: %lf  cevresi: %lf\n",alan,cevre);
 
 return 0;

}