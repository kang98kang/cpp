#include <iostream>

int main()
{
	int wow = 0;
	std::cin >> wow;
	if (wow >= 10) {
		std::cout << "WOW \n";
	}
	else {
		std::cout << "OMG \n";
	};

	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	if (a < b) {
		std::cout << "큰 수는 " << b << "\n";
	}
	else if (b < a) {
		std::cout << "큰 수는 " << a << "\n";
	}
	else {
		std::cout << "같은 숫자 \n";
	};

	int five = 0;

	std::cin >> five;

	if (five == 5 || five == 10) {
		std::cout << "만세 \n";
	}
	else {
		std::cout << "재도전 \n";
	};

	int first = 0;
	int second = 0;
	
	std::cin >> first >> second;

	if (first == 7 && second == 9) {
		std::cout << "인증됨 \n";
	}
	else {
		std::cout << "재시도 \n";
	};

	int start = 3;
	for (int i = start; i < 11; i++) {
	std::cout << i << "\n";
	}

	int min = 0;
	int max = 0;
	std::cin >> min >> max;
	for (int i = min; i <= max; i++) {
		std::cout << i << "\n";
	}

	for (int i = 0; i < 25; i++) {
	std::cout << "PIZZAHOT \n";
	}

	int input = 0;
	std::cin >> input;
	for (int i = 0; i < input; i++) {
		std::cout << "## \n";
	}

	for (int i = 10; i > 0; i--) {
		std::cout << i << "\n";
	}

	int magic = 0;
	if ((magic * 2 + 20) / 5 != 100) {
		std::cout << "MAGIC!\n";
	}

	int c = 0;
	int d = 0;
	std::cin >> c >> d;
	for (int i = c; i <= d; i++) {
		std::cout << i;
	}

	int one = 0;
	int two = 0;
	int three = 0;
	
	std::cin >> one >> two >> three;
	if (one + two + three > 10) {
		std::cout << one * two * three;
	}
	else {
		std::cout << "0\n";
	}

	int countdown = 0;
	std::cin >> countdown;

	for (int i = countdown; i >= 0; i--) {
		std::cout << i << "\n";
	}
	std::cout << "발사!\n";

	for (int i = 5; i > -6; i--) {
		std::cout << i << " ";
	}

}

