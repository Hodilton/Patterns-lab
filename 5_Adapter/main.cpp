#include "./Adapter.h"
using namespace adapter;

class Client {
private:
	IInterface* interface;

public:
	Client(IInterface* interface) : interface(interface) {}

public:
	void analizeData(Data& data) {
		interface->method(data);
	}
};

int main() {
	Adapter adapter;
	Data data = "example";

	Client client(&adapter);
	client.analizeData(data);

	return 0;
}