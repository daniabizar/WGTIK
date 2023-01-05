#include <iostream>
#include "CSLL.h"

using namespace std;

int main()
{
    int n;
    infotype playList;
    listLagu L;
    adr pLagu,varPLAGU;
    createList_1301213128(L);
    cout << " List Diatas Sudah Terbuat" <<endl;
    cout <<endl;

    cout << "Jumlah data yang akan ditambahkan: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Masukkan Nama Artis: ";
        cin >> playList.Artis;
        cout << "Masukkan Judul Lagu: ";
        cin >> playList.Judul;
        cout << "Masukkan Genre Lagu: ";
        cin >> playList.Genre;
        cout << "Masukkan Jumlah Playtime: ";
        cin >> playList.playtime;
        pLagu = createElement_1301213128(playList);
        insertLast_1301213128(L, pLagu);
    }

    showSemuaLagu_1301213128(L);
    cout << " List Diatas Sudah Diisi Dengan insertLast" <<endl;
    cout <<endl;


    deleteFirst_1301213128(L, pLagu);
    showSemuaLagu_1301213128(L);
    cout << " List Diatas Sudah Terhapus Dengan deleteFirst" <<endl;
    cout <<endl;
    cout <<endl;

    cout << "Sudah Selesai" <<endl;

    return 0;
}
