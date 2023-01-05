#include "CSLL.h"

void createList_1301213128(listLagu &L){
    first(L) = NULL;
}

adr createElement_1301213128(infotype laguBaru){
    adr pLagu;
    pLagu = new element;
    next(pLagu) = NULL;
    info(pLagu) = laguBaru;
    return pLagu;
}

void insertLast_1301213128(listLagu &L, adr pLagu){
    adr Q;
    if(first(L) == NULL){
        first(L) = pLagu;
        next(pLagu) = first(L);
    }else{
        next(pLagu) = first(L);
        Q = first(L);
        while (next(Q) != first(L)){
            Q = next(Q);
        }
        next(Q) = pLagu;
    }
}

void deleteFirst_1301213128(listLagu &L, adr pLagu){
    adr Q;
    if (first(L) == next(first(L))){
        pLagu = first(L);
        next(pLagu) = NULL;
        first(L) = NULL;
    }else{
        Q = first(L);
        while (next(next(Q)) != first(L)){
            Q = next(Q);
        }
        pLagu = next(Q);
        next(Q) = first(L);
        next(pLagu) = NULL;
    }
}

void showSemuaLagu_1301213128(listLagu L){
    adr pLagu;
    if(first(L) == NULL){
        cout << "List Kosong" <<endl;
    }else{
        pLagu = first(L);
        while(next(pLagu) != first(L)){
            cout << " Artis: " << info(pLagu).Artis << " ,Judul: " << info(pLagu).Judul << " ,Genre: " << info(pLagu).Genre << " ,Jumlah Playtime: " << info(pLagu).playtime <<"(menit)" <<endl;
            pLagu = next(pLagu);
        }
        cout << endl;
    }
}

