#include <stdio.h>

void citireMat(int a[10][10], int m, int n) {
    printf("Introduceti elementele matricei:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void afisareMat(int a[10][10], int m, int n) {
    printf("Matricea este:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void verif(int a[10][10], int m, int n, int vectCt[10], int *count) {
    *count = 0; // Inițializăm numărul de linii constante
    for (int i = 0; i < m; i++) {
        int ok = 1; // Presupunem că linia este constantă
        for (int j = 0; j < n - 1; j++) { // Verificăm fiecare element al liniei
            if (a[i][j] != a[i][j + 1]) {
                ok = 0; // Dacă găsim elemente diferite, linia nu este constantă
                break;
            }
        }
        if (ok) {
            vectCt[*count] = i; // Salvăm indexul liniei constante
            (*count)++;         // Incrementăm numărul de linii constante
        }
    }
}

int main() {
    int a[10][10], m, n;
    int vectCt[10];
    int count;

    printf("Introduceti dimensiunile matricei (m n): ");
    scanf("%d %d", &m, &n);

    citireMat(a, m, n);
    afisareMat(a, m, n);

    verif(a, m, n, vectCt, &count);

    printf("Liniile constante sunt:\n");
    for (int i = 0; i < count; i++) {
        printf("Linia %d\n", vectCt[i]);
    }

    return 0;
}
