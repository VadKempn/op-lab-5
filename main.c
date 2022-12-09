#include <stdio.h>

int main() {
    int arr[6]={34, 45, 56, 67, 78, 89};
    printf("==============================\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d | ", arr[i]);
    }
    printf("\n==============================");
    int arr_1[2][2]={{2,1},{1,3}};
    int arr_2[2][2]={{1,2},{3,1}};
    int arr_3[2][2]={{0,0},{0,0}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                arr_3[i][j] += arr_1[i][k] * arr_2[k][j];
            }
        }
    }
    printf("\n%d %d\n%d %d", arr_3[0][0], arr_3[0][1], arr_3[1][0], arr_3[1][1]);
    return 0;
}
