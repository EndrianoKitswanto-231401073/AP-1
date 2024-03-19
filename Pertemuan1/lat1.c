  #include <stdio.h>

  int main(){
    int nim;
    char kom, nama[50];
    float ip;

    printf("Hello World\n");
    printf("Masukkan Nama : ");
    gets(nama); //get string
    printf("Masukkan Nim : ");
    scanf("%d", &nim);
    printf("Masukkan KOM : ");
    scanf(" %c", &kom);
    printf("Masukkan IP : ");
    scanf("%f", &ip);
    printf("Nama : ");
    puts(nama); //put string
    printf("Nim : %d\n", nim);
    printf("Kom : %c\n", kom);
    printf("IP : %.3f\n", ip);  
  }