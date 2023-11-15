#include <iostream>

#include "StandartInterestRate.h"

using namespace std;

int main() {

    StandartInterestRate* obj1 = StandartInterestRate::GetInstance();
    StandartInterestRate* obj2 = StandartInterestRate::GetInstance();

    cout << obj1->GetZinssatz() << endl;
    cout << obj2->GetZinssatz() << endl;

    obj1->SetZinssatz(3.15);

    cout << obj1->GetZinssatz() << endl;
    cout << obj2->GetZinssatz() << endl;

    return 0;
}
