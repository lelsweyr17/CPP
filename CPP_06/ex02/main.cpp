#include <iostream>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base *createAClass(void) {
	return new A;
}

Base *createBClass(void) {
	return new B;
}

Base *createCClass(void) {
	return new C;
}

Base *generate(void) {
	int random = rand() % 3;
	Base *(*function[3])() = {&createAClass, &createBClass, &createCClass};
	std::cout << ((random == 0) ? "Create A" : ((random == 1) ? "Create B" : "Create C")) << std::endl;
	return function[random]();
}

void identify_from_pointer(Base *p) {
	if (dynamic_cast<A *> (p) != NULL) {
		std::cout << "Pointer is a A" << std::endl;
	}
	else if (dynamic_cast<B *> (p) != NULL) {
		std::cout << "Pointer is a B" << std::endl;
	}
	else if (dynamic_cast<C *> (p) != NULL) {
		std::cout << "Pointer is a C" << std::endl;
	}
	else {
		std::cout << "Pointer is no A, B or C" << std::endl;
	}
}

void identify_from_reference(Base &p) {
	try{
		A &a = dynamic_cast<A &> (p);
		std::cout << "Reference is a A" << std::endl;
		return ;
	}
	catch(const std::exception& e){
	}
	try{
		B &b = dynamic_cast<B &> (p);
		std::cout << "Reference is a B" << std::endl;
		return ;
	}
	catch(const std::exception& e){
	}
	try{
		C &c = dynamic_cast<C &> (p);
		std::cout << "Reference is a C" << std::endl;
		return ;
	}
	catch(const std::exception& e){
	}
	std::cout << "Reference if not A, B or C" << std::endl;
}

int main() {
	srand(time(NULL));
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
}