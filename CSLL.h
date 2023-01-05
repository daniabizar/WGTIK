#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)


struct playList{
    string Artis;
    string Judul;
    string Genre;
    int playtime;
};

typedef playList infotype;
typedef struct element *adr;
struct element{
    infotype info;
    adr next;
};
struct listLagu{
    adr first;
};

void createList_1301213128(listLagu &L);
adr createElement_1301213128(infotype laguBaru);
void insertLast_1301213128(listLagu &L, adr pLagu);
void deleteFirst_1301213128(listLagu &L, adr pLagu);
void showSemuaLagu_1301213128(listLagu L);

#endif // CSLL_H_INCLUDED
