#include<bits/stdc++.h>

int main() {
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);

    if(t1<t2 && t2<t3){
        printf("1\n2\n3\n");
    }
    else if(t1<t3 && t3<t2){
        printf("1\n3\n2\n");
    }
    else if(t2<t1 && t1<t3){
        printf("2\n1\n3\n");
    }
    else if(t2<t3 && t3<t1){
        printf("2\n3\n1\n");
    }
    else if(t3<t2 && t2<t1){
        printf("3\n2\n1\n");
    }
    else {
        printf("3\n1\n2\n");
    }

    return 0;
}
