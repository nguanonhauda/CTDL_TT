#include<stdio.h>
#include<stdbool.h>
int main () {
    int n , x ; 
    scanf("%d %d" , &n , &x);
    int mssv[10000] ; 
    int diem[10000] ; 

    for ( int i = 0 ; i < n ; i++){
        int m , D ; 
        scanf("%d %d", &m , &D);
        mssv[i] = m ; 
        diem[i] = D ; 
    }
    bool test = false ; 
    for ( int i = 0 ; i < n ; i++){
        if ( mssv[i] == x ){
            printf("%d\n", diem[i]);
            test = true ; 
            break; 
        }
    }
    if (!test){
        printf("No data\n") ; 
    }
    return 0 ; 
}