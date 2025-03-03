#pragma once

#include "./Interfaces.h"

#include <iostream>

class ArdekoChair : public IChair {
public:
    void sitOn() const override {
        std::cout << "������ �� ������������� ������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};

class ArdekoSofa : public ISofa {
public:
    void lieOn() const override {
        std::cout << "������ �� ������������� ������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};

class ArdekoCoffeeTable : public ICoffeeTable {
public:
    void placeItems() const override {
        std::cout << "���������� ���� �� ������������� �������.\n";
    }

    bool hasLegs() const override {
        return true;
    }
};