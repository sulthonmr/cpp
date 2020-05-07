#include <stdio.h>
#include <string.h>
int main()
{
    char kata[30];
    char antonim[30];
    printf("**********************\n");
    printf("AnTonim Kata\n");
    printf("**********************\n");
    printf("Menu :\n");
    printf("\tA. Baru\n");
    printf("\tB. Salah\n");
    printf("\tC. Banyak\n");
    printf("\tD. Boros\n");
    printf("\tE. Berani\n\n");
    printf("Pilih kata pada menu : ");
    scanf("%s",kata);
    
    (strcmp(kata,"Baru")==0) ? (strcpy(antonim,"Lama")) : (strcmp(kata,"Salah")==0) ? (strcpy(antonim,"Benar")) : (strcmp(kata,"Banyak")==0) ? (strcpy(antonim,"Sedikit")) : (strcmp(kata,"Boros")==0) ? (strcpy(antonim,"Hemat")) : (strcmp(kata,"Berani")==0) ? (strcpy(antonim,"Takut")) : (strcpy(antonim,"Input tidak valid"));
    
    printf("\nAntonim katanya = %s", antonim);
    
    return 0;
}
