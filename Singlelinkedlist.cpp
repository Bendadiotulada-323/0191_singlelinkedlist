#include <iostream>
using namespace std;

class node
{
    public:
        int noMhs;
        node *next;
};

class linkedlist
{ node *START;

public:
linkedlist()
    {
        START = NULL;
    }

void addnode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa";
        cin >> nim;
    
        node *nodebaru = new node;
        nodebaru->noMhs = nim;

        if (START == NULL || nim <= START ->noMhs)
        {
            if ((START != NULL) && (nim == START->noMhs))
            {
                cout << "\nDuplikasi nomhs tidak diijinkan|n";
                return;
            }
            nodebaru->next = START;
            START = nodebaru;
            return;
        }

        node *previous = START;
        node *current = START;

   