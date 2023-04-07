#include <stdio.h>

int main() {
    int n, i, j, k;
    int arr[100];
    int sum1, sum2;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    printf("Pozitif tamsay�lar� girin: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Alt k�meleri dola�
    for (i = 0; i < (1 << n); i++) {
        sum1 = 0;
        sum2 = 0;
        k = i;
        // Alt k�meyi olu�tur
        for (j = 0; j < n; j++) {
            if (k % 2 == 1) {
                sum1 += arr[j];
            } else {
                sum2 += arr[j];
            }
            k /= 2;
        }
        // Alt k�melerin eleman toplamlar�n� kontrol et
        if (sum1 == sum2 && sum1 != 0 && sum2 != 0) {
            printf("Evet\n");
            return 0;
        }
    }

    printf("Hay�r\n");
    return 0;
}
