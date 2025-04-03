#pragma once

#include <iostream>
#include <string>

namespace adapter {

    using Data = std::string;
    using SpecialData = std::string;

    class IInterface {
    public:
        virtual void method(const Data data) = 0;
    };

    class Service {
    public:
        void serviceMethod(const SpecialData& specialData) {
            std::cout << "Service: " << specialData << std::endl;
        }
    };

    class Adapter : public IInterface {
    private:
        Service* adapter;

    public:
        void method(const Data data) override {
            SpecialData specialData = convertToServiceFormat(data);
            adapter->serviceMethod(specialData);
        }

    private:
        SpecialData convertToServiceFormat(const Data& data) {
            return data + "_specialXML";
        }
    };
}