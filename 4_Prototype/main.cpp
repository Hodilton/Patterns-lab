#include "./Prototype.h"

#include <iostream>
#include <Windows.h>

using namespace prototype;

int main() {
	SetConsoleOutputCP(1251);

    CarPrototypeA original(100);
    
    IPrototype* copy = original.clone();
    copy->print();

    // �������� ��������� ��������� ���������
    SubclassPrototype subclassOriginal(50, 200);
    // ������������ ���������
    Prototype* subclassCopy = subclassOriginal.clone();
    subclassCopy->print();


    // ������� ������
    delete copy;
    delete subclassCopy;

	return 0;
}