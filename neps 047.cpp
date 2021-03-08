#include<bits/stdc++.h>

int main() {
    int n, cont=0;
    scanf("%d", &n);
    int x[n];

    for (int i=0; i<n; i++){
        scanf("%d", &x[i]);
    }

    for (int i=0; i<n; i++){
        if(x[i]==1 && x[i+1]==0 && x[i+2]==0 && i+1<n && i+2<n){
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}
