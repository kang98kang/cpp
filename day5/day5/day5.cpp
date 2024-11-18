#include <iostream>

//4f
void KFC() {
	std::cout << "KFC입니다.";
};
void MC() {
	std::cout << "MC입니다.";
};

//5f
void LOT() {
	std::cout << "12345\n";
}

//6f
void KFC6() {
	std::cout << "##########";
};
void MC6() {
	std::cout << "@@@@@@@@@@";
};


//8f
int x;
void KFC8() {
	std::cin >> x;
}
void BBQ8() {
	if (x > 5) {
		std::cout << "만세!\n";
	}
	else {
		std::cout << "다시 \n";
	}
}

//9f
int arr9[3] = { 'A','B','C' };

void KFC9() {
	for (int i = 0; i < sizeof(arr9)/ sizeof(arr9[0]); i++) {
		std::cout << arr9[i];
	}
	std::cout << "\n";
};

//10f
int arr10[4] = {};

void input10() {
	for (int i = 0; i < sizeof(arr10)/sizeof(arr10[0]); i++) {
		std::cin >> arr10[i];
	}
};

void output10() {
	int num = sizeof(arr10) / sizeof(arr10[0]) - 1;
	for (int i = num; i >= 0; i--) {
		std::cout << arr10[i];
	}
	std::cout << "\n";
};

//11f
void PrintAll(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i],"\n";
	}
}

//12f
void QTR12() {
	std::cout << "QTR100%";
}
void BBQ12() {
	std::cout << "BBQ100%";
}

int main()
{
	//1
	char ch = 'a';
	std::cout << ch << ch << ch , "\n";

	//2
	int arr[4] = {};
	std::cin >> arr[0];
	std::cin >> arr[1];
	std::cin >> arr[2];
	std::cin >> arr[3];

	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = sum + arr[i];
	}
	std::cout << sum;

	//3
	char arr1[4] = { 'm','i','n' };
	int arr1in = 0;
	std::cin >> arr1in;
	std::cout << arr1[arr1in];

	//4
	int in4 = 0;
	std::cin >> in4;
	if (in4 == 1) {
		KFC();
	}
	else if (in4 == 2) {
		MC();
	};

	//5
	int in5 = 0;
	std::cin >> in5;
	for (int i = 0; i < in5; i++) {
		LOT();
	};

	//6
	KFC6();
	MC6();

	//7
	int arr7[6] = {};
	std::cin >> arr[0];
	std::cin >> arr[1];
	std::cin >> arr[2];

	int arr7idx3 = 0;
	std::cin >> arr7idx3;
	for (int i = 3; i < 6; i++) {
		arr7idx3++;
		arr7[i] = arr7idx3;		
	}
	for (int i = 0; i < 6; i++) {
		std::cout << arr7[i];
	}

	//8
	KFC8();
	BBQ8();

	//9
	int in9 = 0;
	std::cin >> in9;
	for (int i = 0; i < in9; i++) {
		KFC9();
	}

	//10
	input10();
	output10();

	//11
	int in11 = 0;
	std::cin >> in11;
	int arr11[6] = {};
	for (int i = 0; i < sizeof(arr11) / sizeof(arr11[0]); i++) {
		arr11[i] = in11;
		in11++;
	}
	PrintAll(arr11, 6);

	//12
	int arr12[3] = {};
	for (int i = 0; i < sizeof(arr12) / sizeof(arr12[0]); i++) {
		int a = 0;
		std::cin >> a;
		arr12[i] = a;
	}
	int sum12 = 0;
	for (int i = 0; i < 3; i++) {
		sum12 = sum12 + arr12[0];
	}
	if (sum12 >= 10) {
		QTR12();
	}
	else {
		BBQ12();
	}

	//13
	int arr13[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int in13 = 0;
	std::cin >> in13;
	for (int i = 0; i < 11; i+=in13) {
		std::cout << arr13[i];
	}








	return 0;

}
