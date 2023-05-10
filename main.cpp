#include<iostream>
#include "LinklistUnit/utilities.h"
#include"LinklistUnit/exercise.h"

using namespace std;

int main() {
    LinkList L;
    InitialLinklistF(L);
    separate(L);
    printLinklist(L);

    return 0;
}
