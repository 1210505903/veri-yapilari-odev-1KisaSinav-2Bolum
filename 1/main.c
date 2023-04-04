#include <stdio.h>
#include <stdlib.h>

int main() {
    int s, kume[100], tekrar = 0, eksik = 0;
    
    printf("Kac sayi iceren s kumesi: ");
    scanf("%d",&s);
    
    for (int i = 0; i < s; i++) {
        kume[i] = i + 1; 
    }
    
    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            if (kume[i] == kume[j]) {
                tekrar = kume[i];
                break;
            } 
        }
    }
    
    for (int i = 0; i < s; i++) {
        if (kume[i] != i + 1) {
            eksik = i + 1;
            break;
        }
    }
    
    printf("Tekrar eden sayi: %d\nEksik sayi: %d\n", tekrar, eksik);
    
    return 0;
}
