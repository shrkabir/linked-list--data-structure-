#include <iostream>
#include "numberlist.h"

using namespace std;

int main()
{
    NumberList L1;
    L1.IsEmpty();
    L1.InsertnumAtFirst(4);
    L1.InsertnumAtFirst(6);
    L1.InsertAtFirst(8);
    L1.Display();
    L1.IsEmpty();
   // L1.MakeEmpty();
    L1.IsEmpty();
    L1.InsertAtMiddle(10,6);
    L1.Display();
    L1.InsertAtLast(12);
    L1.Display();
    cout<<"after delete first node";
    L1.DeleteAtFirst();
    L1.Display();
    return 0;
}
