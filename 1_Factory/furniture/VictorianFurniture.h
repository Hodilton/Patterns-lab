#pragma once

#include "./Interfaces.h"

#include <iostream>

class VictorianChair : public IChair {
public:
    void sitOn() const override {
        std::cout << "������ �� ������������� ������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};

class VictorianSofa : public ISofa {
public:
    void lieOn() const override {
        std::cout << "������ �� ������������� ������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};

class VictorianCoffeeTable : public ICoffeeTable {
public:
    void placeItems() const override {
        std::cout << "���������� ���� �� ������������� �������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};