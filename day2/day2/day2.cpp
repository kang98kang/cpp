#include <iostream>

int main()
{
	int exercise = 0;

	std::cout << "일주일 동안 운동을 몇 번 하셨나요? \n";
	std::cin >> exercise;
	std::cout << exercise << "번 하셨군요. 칭찬합니다! \n";

	int a = 0;
	std::cin >> a;
	std::cout << a << a << a;

	int aa = 0;
	int bb = 0;
	int cc = 0;

	std::cin >> aa >> bb >> cc;
	std::cout << aa << "\n" << bb << "\n" << cc << "\n";

	int first = 0;
	int second = 0;

	std::cin >> first >> second;
	std::cout << "두 숫자의 차는 " << first - second << " 입니다. \n";

	std::cout << first << "+" << second << "=" << first + second << "\n";
	std::cout << first << "*" << second << "=" << first * second << "\n";
	std::cout << first << "/" << second << "=" << first / second << "\n";

	if (first > second) {
		std::cout << "first가 second 보다 큽니다. \n";
	}
	else {
		std::cout << "second가 first 보다 크거나 같습니다. \n";
	};

	if (first > second) {
		std::cout << first << first << first << first << "\n";
	}
	else {
		std::cout << second << second << second << second << "\n";
	};
	
	int input = 0;
	std::cin >> input;
	std::cout << input << "입력함 \n";

	input++;

	std::cout << "input++을 수행하면 " << input << "이 됩니다. \n";

	int input1 = 0;
	std::cin >> input1;
	if (input1 > 3) {
		input1++;
		std::cout << input1;
	}
	else {
		input1--;
		std::cout << input1;
	};

	int num = 0;
	std::cin >> num;
	if (num == 0) {
	}
	else if (num % 2 != 0) {
		std::cout << "$$$\n" << "$$$\n" << "$$$\n";
	}
	else if (num % 2 == 0) {
		std::cout << "###\n" << "###\n" << "###\n";
	};


	int one = 0;
	int two = 0;
	int three = 0;

	std::cin >> one >> two >> three;
	if (one + two + three >= one * two * three) {
		std::cout << "행운의 수";
	}
	else {
		std::cout << "소소한 수";
	}
	return 0;

}

