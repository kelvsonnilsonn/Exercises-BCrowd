#include <stdio.h>

int main(){
    int n;
    double v1, v2, v3;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%lf%lf%lf", &v1, &v2, &v3);
        printf("%.1f\n", (v1 * 2 + v2 * 3 + v3 * 5) / 10);
    }

    return 0;
}