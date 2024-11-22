#include <iostream>

//f1
void ABC1(int a, int b, int* sum, int* gop) {

	*sum = a + b;
	*gop = a * b;

}

//f2
void Find2(char a, char arr[3][3], int* row, int* col) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (arr[y][x] == a) {
				*row = y;
				*col = x;
			}
		}
	}
}

//f3
int stringLen3(char* arr) {
	int length = 0;
	while (arr[length] != '\0') {
		length++;
	}

	return length;
}

//f4
void KFC4(int* A, int* B) {
	char in4[11] = {"MINcoding"};
	for (int i = 0; i < 11; i++) {
		if (in4[i] >= 'A' && in4[i] <= 'Z') {
			(*A)++;
		}
		else if (in4[i] >= 'a' && in4[i] <= 'z') {
			(*B)++;
		}
	}
}

//f5
int arr5[2][6] = {
	{4,5,6,1,3,1},
	{2,1,3,6,3,6}
};

void Input5(int* a, int* b, int* c) {
	std::cin >> *a >> *b >> *c;
}

void Process5(int a, int b, int c, int* A, int* B, int* C) {

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 6; x++) {
			if (arr5[y][x] == a) {
				(*A)++;
			}
			else if (arr5[y][x] == b) {
				(*B)++;
			}
			else if (arr5[y][x] == c) {
				(*C)++;
			}
		}
	}
}

void Output5(int a, int b, int c, int A, int B, int C) {
	std::cout << a << "는 " << A << "개\n";
	std::cout << b << "는 " << B << "개\n";
	std::cout << c << "는 " << C << "개\n";

}

//f6
void FindABC(char arr1[10], char arr2[10], int* a, int* b, int* c) {
	for (int i = 0; i < 10; i++) {
		if (arr1[i] == 'A') {
			(*a)++;
		}
		else if (arr1[i] == 'B') {
			(*b)++;
		}
		else if (arr1[i] == 'C') {
			(*c)++;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (arr2[i] == 'A') {
			(*a)++;
		}
		else if (arr2[i] == 'B') {
			(*b)++;
		}
		else if (arr2[i] == 'C') {
			(*c)++;
		}
	}

}

//f9
char arr9[3][3] = {
		{'D','A','S'},
		{'Q','W','V'},
		{'R','T','Y'}
};
void Find9(int y1, int x1, int y2, int x2, char* a, char* b) {
	*a = arr9[y1][x1];
	*b = arr9[y2][x2];
}


int main()
{
	//1
	int a1 = 5;
	int b1 = 6;
	int sum1 = 0;
	int gop1 = 0;
	ABC1(a1, b1, &sum1, &gop1);

	std::cout << sum1 << gop1 << "\n";

	//2
	char arr2[3][3] = {
		{'A','D','F'},
		{'Q','W','E'},
		{'Z','X','C'}
	};

	char in2 = 'F';
	int row2, col2;

	Find2(in2, arr2, &row2, &col2);
	std::cout << "y는 " << row2 << " x는 " << col2 << "\n";

	//3
	char in3[256];
	std::cin >> in3;
	int length3 = stringLen3(in3);
	std::cout << length3 << "글자\n";

	//4
	int upperCount = 0;
	int lowerCount = 0;

	KFC4(&upperCount, &lowerCount);

	std::cout << "대문자는 " << upperCount << "개\n";
	std::cout << "소문자는 " << lowerCount << "개\n";

	//5
	int a5, b5, c5;
	Input5(&a5, &b5, &c5);

	int A5 = 0;
	int B5 = 0;
	int C5 = 0;

	Process5(a5, b5, c5, &A5, &B5, &C5);
	Output5(a5, b5, c5, A5, B5, C5);

	//6
	char arr6[2][6] = {
		{'4','5','7','1','3','2'},
		{'D','F','Q','W','G','Z'}
	};
	int in6 = 1;
	char target6 = '0' + in6;
	for (int i = 0; i < 6; i++) {
		if (arr6[0][i] == target6) {
			std::cout << arr6[1][i] << "\n";
			break;
		}
	}

	//7
	char sen7[256] = { "A_ShowABC" };
	char sen7_1[256] = { "ABCDEFG" };
	int a7 = 0;
	int b7 = 0;
	int c7 = 0;
	FindABC(sen7, sen7_1, &a7, &b7, &c7);

	std::cout << "A는 " << a7 << "개\n";
	std::cout << "B는 " << b7 << "개\n";
	std::cout << "C는 " << c7 << "개\n";

	//8
	struct PROFILE
	{
		char name[10] = {};
		int age = 0;
		int weight = 0;
	};

	PROFILE a = {
		"JASON", 35, 80
	};

	PROFILE b = {
		"TOMS", 20, 40
	};

	std::cout << a.name << " & " << b.name << "\n";
	std::cout << "평균 나이: " << (a.age + b.age) / 2 << "세\n";
	std::cout << "평균 몸무게: " << (a.weight + b.weight) / 2 << "KG\n";

	//9
	char a9;
	char b9;
	Find9(0, 2, 1, 1, &a9, &b9);
	std::cout << a9 << " " << b9 << "\n";

	//10
	char arr10[7] = { 'A','B','C','D','E','F','G' };
	char arr10_1[7] = { 4,2,5,1,6,7,3 };
	
	char minsC = 'E';
	char jihyoC = 'B';

	int minsCIdx;
	int jihyoCIdx;

	for (int i = 0; i < 7; i++) {
		if (arr10[i] == minsC) {
			minsCIdx = i;
		}
		else if (arr10[i] == jihyoC) {
			jihyoCIdx = i;
		}
	}

	int distance10 = 0;

	for (int i = jihyoCIdx + 1; i < minsCIdx; i++) {
		distance10 += arr10_1[i];
	}

	std::cout << "서로의 거리는 " << distance10 << "입니다.\n";

	//11
	int arr11[5] = {3,5,1,2,7};
	int arr11_1[5] = {1,2,1,5,9};
	int arr11_2[5] = {7,7,9,5,4};

	for (int i = 0; i < 5; i++) {
		std::cout <<  arr11[i] * arr11_1[i] + arr11_2[i] << " ";
	}
	std::cout << "\n";

	//12
	int arr12[4][4] = {
		{3,4,1,6},
		{3,5,3,6},
		{9,2,1,1},
		{5,4,6,0}
	};

	int Max12 = 0;
	int Min12 = 10;
	int Mrow12 = 0;
	int Mcol12 = 0;
	int mrow12 = 0;
	int mcol12 = 0;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (arr12[y][x] > Max12) {
				Max12 = arr12[y][x];
				Mrow12 = y;
				Mcol12 = x;
			}
			if (arr12[y][x] < Min12) {
				Min12 = arr12[y][x];
				mrow12 = y;
				mcol12 = x;
			}
		}
	}

	std::cout << "MAX = " << Max12 << "(" << Mrow12 << "," << Mcol12 << ")" << "\n";
	std::cout << "MIN = " << Min12 << "(" << mrow12 << "," << mcol12 << ")" << "\n";
}

	
