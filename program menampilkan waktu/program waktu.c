#include<stdio.h>
#include<time.h>

   void tampilkan_kalender() {
   time_t DETIK;
   struct tm *info;
   char buffer[80];
   char HARI[10];


   time(&DETIK);
   info = localtime(&DETIK);
   strftime(buffer,80, "%A, %d %B %Y - %H:%M:%S", info);


   strftime(HARI,10,"%A", info);
   if (strcmp(HARI,"Sunday")==0) {
                printf("\n Sekarang hari MINGGU \n");
   }
   else if (strcmp(HARI,"Monday")==0) {
                printf("\n Sekarang hari SENIN \n");
   }
    else if (strcmp(HARI,"Tuesday")==0 ){
                printf("\n Sekarang hari SELASA \n");
   }
    else if (strcmp(HARI,"Wednesday")==0 ){
                printf("\n Sekarang hari RABU \n");
   }
    else if (strcmp(HARI,"Thursday")==0 ){
                printf("\n Sekarang hari KAMIS \n");
   }
    else if (strcmp(HARI,"friday")==0 ){
                printf("\n Sekarang hari JUM'AT \n");
   }
    else if (strcmp(HARI,"Saturday")==0 ){
                printf("\n Sekarang hari SABTU \n");
   }

   printf("Sekarang adalah hari & tanggal : | %s |\n", buffer);
   }





   int main ()
   {
       time_t AWAL=0, AKHIR=0;

            time(&AWAL);
            while(1){
                time(&AKHIR);
                if (AKHIR - AWAL > 0){
                    tampilkan_kalender();
                    AWAL = AKHIR;
                }
            }
            return 0;
   }



