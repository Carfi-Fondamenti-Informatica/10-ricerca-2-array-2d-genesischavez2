#include <iostream>
#include "lib.h"
using namespace std;
void init (char mat[], int n){
    for(int i=0;i<n;i++){
        mat[i]= ' ';
    }
}
void init(char mat[5][15]){
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}
void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}
void inserimento(char mat[], int pos){
    char n[pos*10];
    init(n,pos*10);
    cin>> n;
    for(int i=0; i<pos; i++){
        mat[i] = n[i];
    }
}

int ricerca( char nomi[5][15], char cognomi[5][15],char nome[], char cognome[] ) {
    for(int i=0; i<5; i++){
        for(int j=0; j<15; j++){
            if(cognomi[j][i]!=cognome[j] || nomi[j][i]!=nome[j]){
                break;
            }
            if(j==15){
                return i;
            }
        }
    }
    return -1;
}
