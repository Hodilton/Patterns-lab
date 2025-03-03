#pragma once

#include "./Interfaces.h"

#include <iostream>

class ModernChair : public IChair {
public:
    void sitOn() const override {
        std::cout << "������ �� ������-������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};

class ModernSofa : public ISofa {
public:
    void lieOn() const override {
        std::cout << "������ �� ������-������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};

class ModernCoffeeTable : public ICoffeeTable {
public:
    void placeItems() const override {
        std::cout << "���������� ���� �� ������-�������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};