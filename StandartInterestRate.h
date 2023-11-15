//
// Created by ludow on 15.11.2023.
//

#ifndef STANDARTINTERESTRATE_H
#define STANDARTINTERESTRATE_H
#include <iostream>

using namespace std;

class StandartInterestRate {

protected:
    StandartInterestRate();

    static StandartInterestRate* instance_;

    double zinssatz_ = 3.0;

public:
    static StandartInterestRate* GetInstance();
    void SetZinssatz(double newZinssatz);
    double GetZinssatz();
};



#endif //STANDARTINTERESTRATE_H
