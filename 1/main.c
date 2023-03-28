#include <stdio.h>
#include <stdlib.h>

int main()
{
int s, kume[100], tekrar, eksik;
printf("Kac sayi iceren s kumesi: ");
scanf("%d",&s);

for (int i=1; i<=s; i++) {
    kume[i-1] = i; 
}

for (int i=0; i<s; i++) {
    for (int j=i+1; j<s; j++) {
        if (kume[i] == kume[j]) {
            tekrar = kume[i];
            eksik = j+1;
            goto son;
        } 
    }
}
son:
printf("Tekrar eden sayi: %d\nEksik sayi: %d\n", tekrar, eksik);
}
