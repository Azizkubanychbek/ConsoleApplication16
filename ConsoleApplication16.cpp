#include <iostream>
class Figure {
public:
	Figure() {}
	virtual void print_info() const {
		std::cout << "Name : Figure\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners : A = " << A << " B = " << C << " C = " << C << std::endl;
		std::cout << "\n";
	}
	void check() const {
		if (true) {
			std::cout << "Правильная ";
		}
		else {
			std::cout << "Heправильная ";
		}
	}
protected:

	int a, b, c;
	int A, B, C;
};
class Triangle :public Figure {
public:
	Triangle() {}
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;

	}
	void print_info() const override {
		std::cout << "Name : Triangle\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners : A = " << A << " B = " << B << " C = " << C << std::endl;
		std::cout << "\n";
	}
	void check() const {
		if (A+B+C==180) {
			std::cout << "Правильная ";
		}
		else {
			std::cout << "Heправильная ";
		}
	}


};
class Quadrate :public Figure {
public:
	Quadrate() {}
	Quadrate(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->d = d;


	}
	void print_info() const override {
		std::cout << "Name : Quadrate\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << " D = " << D << std::endl;
		std::cout << "\n";
	}
	void check() const {
		if (A + B + C + D == 360) {
			std::cout << "Правильная";
		}
		else {
			std::cout << "Heправильная";
		}
	}

protected:
	int d;
	int D;

};
class Prtr :public Triangle {
public:

	Prtr(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, C = 90)
	{

	}
	void print_info() const override {

		std::cout << "Name : Prtr\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << std::endl;
		std::cout << "\n";
	}

};
class Rbtr :public Triangle {
public:


	Rbtr(int a, int b, int A, int B) :Triangle(a, b, c = a, A, B, C = A)
	{

	}
	void print_info() const override {
		std::cout << "Name : Rbtr\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << std::endl;
		std::cout << "\n";
	}

};
class Rtr :public Triangle {
public:


	Rtr(int a) :Triangle(a, a, a, 60, 60, 60)
	{
	}
	void print_info() const override {
		std::cout << "Name : Rtr\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << std::endl;
		std::cout << "\n";
	}

};
class Prmu :public Quadrate {
public:
	Prmu(int a, int b) :Quadrate(a, b, a, b, 90, 90, 90, 90) {

	}
	void print_info() const override {
		std::cout << "Name : Prmu\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << " D = " << D << std::endl;
		std::cout << "\n";
	}
};
class Kv :public Quadrate {
public:
	Kv(int a) :Quadrate(a, a, a, a, 90, 90, 90, 90) {}
	void print_info() const override {
		std::cout << "Name : Kv\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << " D = " << D << std::endl;
		std::cout << "\n";
	}
};
class Par :public Quadrate {
public:
	Par(int a, int b, int A, int B) :Quadrate(a, b, a, b, A, B, A, B) {}
	void print_info() const override {
		std::cout << "Name : Par\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << C << " D = " << D << std::endl;
		std::cout << "\n";
	}
};
class Rm :public Quadrate {
public:
	Rm(int a, int A, int B) :Quadrate(a, a, a, a, A, B, A, B) {}
	void print_info() const override {
		std::cout << "Name : Rm\n";
		check();
		std::cout << "Sides : a = " << a << " b = " << a << " c = " << c << " a = " << d << std::endl;
		std::cout << "Corners : A = " << A << " A = " << B << " C = " << A << " D = " << B << std::endl;
		std::cout << "\n";
	}
};
void print_info(const Figure* figure) {
	figure->print_info();
}

int main()
{
	/*Triangle triangle(10, 20, 30, 40, 50, 60);
	Prtr prtr(29, 39, 59, 21, 33);
	//Rbtr rbtr(10, 20, 20, 10);
	Rtr rtr(15);
	Quadrate quadrate(10, 20, 30, 40, 50, 60, 70, 80);
	Prmu prmu(10, 20);
	Kv kv(20);
	Par par(10, 12, 60, 30);*/
	//Rm rm(10, 30, 60);
	//Rm* rm = new Rm(10, 30, 60);
	Rbtr* rbtr = new Rbtr(10, 12, 60, 60);
	print_info(rbtr);
	//print_info(rm);
	//delete rm;
	delete rbtr;
	Triangle* triangl = new Triangle(10, 20, 30, 40, 50, 60);
	print_info(triangl);
	Quadrate* quadrat = new Quadrate(10, 20, 30, 40, 50, 60, 70, 80);
	print_info(quadrat);
	delete triangl;
	delete quadrat;


}
