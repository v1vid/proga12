#include <stdio.h>
#define N 9 // РєРѕРЅСЃС‚Р°РЅС‚Р°

int main() {
    int massive[N] = {12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0; i < N; i++){
        printf("%d ", massive[i]);
    }

    printf("\n\n");

    int m1[2][2] = {2, 1, 1, 3};
    int m2[2][2] = {1, 2, 3, 1};
    int res[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i++)
    {
        printf("%d %d \n", res[i][0], res[i][1]);

    }

    return 0;
}