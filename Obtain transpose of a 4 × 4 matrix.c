#include <stdio.h>
int main() {
    int mat[4][4], trans[4][4];
    printf("Enter 4x4 matrix:\n");
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) scanf("%d",&mat[i][j]);

    for(int i=0;i<4;i++) for(int j=0;j<4;j++) trans[j][i] = mat[i][j];

    printf("Transpose:\n");
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}
