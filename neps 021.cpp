#include<bits/stdc++.h>

int main() {
    int n, cont=0;
    scanf("%d", &n);

    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);

    }

    for (int i=0; i<n; i++){
        if(a[i-1]>a[i] && a[i]<a[i+1]){
            cont++;
        }
    }

    if(cont>1){
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}
