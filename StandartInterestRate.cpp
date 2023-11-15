//
// Created by ludow on 15.11.2023.
//

#include "StandartInterestRate.h"

StandartInterestRate* StandartInterestRate::instance_ = nullptr;

StandartInterestRate::StandartInterestRate() {
}

StandartInterestRate* StandartInterestRate::GetInstance() {

    if ((instance_ == nullptr))
        instance_ = new StandartInterestRate();

    return instance_;
}

void StandartInterestRate::SetZinssatz(double newZinssatz) {
    zinssatz_ = newZinssatz;
}

double StandartInterestRate::GetZinssatz() {
    return zinssatz_;
}
