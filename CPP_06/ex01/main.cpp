#include <iostream>

typedef struct  data {
	std::string s1;
	std::string s2;
	int         a;
}               Data;

void *serialize(void) {
	Data *data = new Data;
	for (int i = 0; i < 10; i++) {
		data->s1 += static_cast<char> ((rand() % (128 - 33)) + 33);
	}
	for (int i = 0; i < 10; i++) {
		data->s2 += static_cast<char> ((rand() % (128 - 33)) + 33);
	}
	data->a = rand();
	std::cout << "s1:\t" << data->s1 << std::endl;
	std::cout << "s2:\t" << data->s2 << std::endl;
	std::cout << "n:\t" << data->a << std::endl << std::endl;

	return reinterpret_cast<void *> (data);
}

Data *deserialize(void *raw) {
	return reinterpret_cast<Data *> (raw);
}

int main() {
	srand(time(NULL));
	void *a = serialize();
	Data *data = deserialize(a);

	std::cout << "s1:\t" << data->s1 << std::endl;
	std::cout << "s2:\t" << data->s2 << std::endl;
	std::cout << "n:\t" << data->a << std::endl;
	delete data;
}