//
// Created by lenovo on 2022/11/6.
//
#include<stdio.h>

char num0[5][10]={
        "XXX","X.X","X.X","X.X","XXX"
};
char num1[5][10]={
        "..X","..X","..X","..X","..X"
};
char num2[5][10]={
        "XXX","..X","XXX","X..","XXX"
};
char num3[5][10]={
        "XXX","..X","XXX","..X","XXX"
};
char num4[5][10]={
        "X.X","X.X","XXX","..X","..X"
};
char num5[5][10]={
        "XXX","X..","XXX","..X","XXX"
};
char num6[5][10]={
        "XXX","X..","XXX","X.X","XXX"
};
char num7[5][10]={
        "XXX","..X","..X","..X","..X"
};
char num8[5][10]={
        "XXX","X.X","XXX","X.X","XXX"
};
char num9[5][10]={
        "XXX","X.X","XXX","..X","XXX"
};

//void print(int n) {
//    if (n == 0) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num0[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 1) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num1[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 2) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num2[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 3) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num3[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 4) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num4[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 5) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num5[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 6) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num6[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 7) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num7[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 8) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num8[i]);
//            if (i != 4) printf("\n");
//        }
//    } else if (n == 9) {
//        for (int i = 0; i < 5; i++) {
//            printf("%s", num9[i]);
//            if (i != 4) printf("\n");
//        }
//    }
//}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        print(a[i]);
    }


    return 0;
}