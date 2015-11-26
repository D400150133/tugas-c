#include <stdio.h>
#include <math.h>
 //return value
 float fungsiku(int x,int m)
 {
     float y;
     //proses
     y = sqrt((5*pow(x,3))-pow(x,m-1)+12);
     return y;
 }
 int main ()
 {
     /*variabel huruf tidak harus sama dengan yang ditas, nanti a terbaca sebagai x dan b terbaca sebagai m*/
     int a,b;
     //perintah memasukkan nilai
     printf("masukkan nilai X = ");scanf("%d",&a);
     printf("masukkan nilai M = ");scanf("%d",&b);
     float y = 0;
     //pemanggilan fungsiku
     y = fungsiku(a,b);
     printf("hasilnya nilai y = %f\n",y);
     return 0;
 }
