#include <iostream>
//f11
int input11() {
	int in11;
	std::cin >> in11;
	return in11;
}

void process11(int in11, int arr11[3][3]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			arr11[y][x] = in11;
			in11++;
		}
	}
}

void output11(int arr11[3][3]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			std::cout << arr11[y][x];
		}
		std::cout << "\n";
	}
}

//f12
void BBQ12(int in12) {
	if (in12 > 0 && in12 < 5) {
		std::cout << "초기값 \n";
	}
	else if (in12 > 6 && in12 < 10) {
		std::cout << "중간값 \n";
	}
	else {
		std::cout << "알수없는값 \n";
	}
}

int main()
{
   //1
	int arr1[5] = {3,5,2,4,1};
	int arr12d[3][2] = {};
	arr12d[0][0] = 9;
	arr12d[0][1] = 8;
	arr12d[1][0] = 7;
	arr12d[1][1] = 1;
	arr12d[2][0] = 3;
	arr12d[2][1] = 4;
	int in1 = 0;
	std::cin >> in1;
	if (in1 % 2 == 1) {
		for(int i = 0; i < 5; i++ )
		std::cout << arr1[i];
	}
	else {
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 2; x++) {
				std::cout << arr12d[y][x];
			}
			std::cout << "\n";
		}
		
	}

	//2
	int in2;
	int in2_2;

	std::cin >> in2 >> in2_2;

	int num = std::abs(in2 - in2_2);

	if (num % 2 == 1) {
		std::cout << "고백한다 \n";
	}
	else {
		std::cout << "짝사랑만 \n";
	}

	//3
	int arr3[2][3] = {};
	arr3[0][0] = 3;
	arr3[0][1] = 1;
	arr3[0][2] = 1;
	arr3[1][0] = 2;
	arr3[1][1] = 3;
	arr3[1][2] = 2;

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			std::cout << arr3[y][x];
		}
	}

	//4
	int arr4[5] = {};
	for (int i = 0; i < 5; i++) {
		std::cin >> arr4[i];
	}

	int count4 = 0;
	for (int i = 0; i < 5; i++) {
		if (arr4[i] >= 3 && arr4[i] <= 7) {
			count4++;
		}
	}
	
	std::cout << count4;

	//5
	int in5 = 0;
	std::cin >> in5;

	if (in5 >= 80) {
		std::cout << "수\n";
	}
	else if (in5 < 80 && in5 >= 70) {
		std::cout << "우\n";
	}
	else if (in5 < 70 && in5 >= 60) {
		std::cout << "미\n";
	}
	else {
		std::cout << "재시도\n";
	}

	//6
	int in6 = 0;
	for (int i = 0; i < 4; i++) {
		std::cin >> in6;
		if (in6 < 20) {
			std::cout << "더 큰 수를 입력하세요.\n";
		}
		else if (in6 > 20) {
			std::cout << "더 작은 수를 입력하세요.\n";
		}
		else {
			std::cout << "정답입니다.\n";
			break;
		}
	}

	//7
	int in7_1 = 0;
	int in7_2 = 0;
	int in7_3 = 0;

	std::cin >> in7_1 >> in7_2 >> in7_3;
	if (in7_1 >= in7_2 && in7_1 >= in7_3) {
		std::cout <<"Max= " << in7_1, "\n";
		if (in7_2 >= in7_3) {
			std::cout << "Min= " << in7_3, "\n";
		}
		else {
			std::cout << "Min= " << in7_2, "\n";
		}
	}
	else if(in7_2 >= in7_3) {
		std::cout <<"Max= " << in7_2, "\n";
		if (in7_3 >= in7_1) {
			std::cout << "Min= " << in7_1, "\n";
		}
		else {
			std::cout << "Min= " << in7_3, "\n";
		}
	}
	else {
		std::cout << "Max= " << in7_3, "\n";
		if (in7_1 >= in7_2) {
			std::cout << "Min= " << in7_2, "\n";
		}
		else {
			std::cout << "Min= " << in7_1, "\n";
		}
	}

	//8
	int arr8[3][3] = {};
	arr8[0][0] = 3;
	arr8[0][1] = 4;
	arr8[0][2] = 1;
	arr8[1][0] = 2;
	arr8[1][1] = 1;
	arr8[1][2] = 4;
	arr8[2][0] = 3;
	arr8[2][1] = 3;
	arr8[2][2] = 0;

	int count8 = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (arr8[y][x] % 2 == 1) {
				count8++;
			}
		}
	
	}
	std::cout << "홀수: " << count8 << "\n";
	std::cout << "짝수: " << 9 - count8 << "\n";

	//9
	int arr9[5] = {};

	for (int i = 0; i < 5; i++) {
		std::cin >> arr9[i];
	}

	for (int i = 0; i < 5; i++) {
		if (arr9[i] >= 70) {
			std::cout << i << "번 사람은 "<< arr9[i]<< "점" << "PASS \n";
		}
		else if (arr9[i] >= 50) {
			std::cout << i << "번 사람은 " << arr9[i] << "점" << "RETEST \n";
		}
		else {
			std::cout << i << "번 사람은 " << arr9[i] << "점" << "FAIL \n";
		}
		
	}

	//10
	char arr10[4][4] = {};
	char in10;
	std::cin >> in10;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			arr10[y][x] = in10;
		}
	}
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			std::cout << arr10[y][x];
		}
		std::cout << "\n";
	}

	//11
	int in11 = input11();
	int arr11[3][3];
	process11(in11, arr11);
	output11(arr11);

	//12
	int in12;
	std::cin >> in12;
	if (in12 == 3 || in12 == 5 || in12 ==7) {
		for (int i = 1; i < 11; i++) {
			std::cout << i;
		}
	}
	else if (in12 == 0 || in12 == 8) {
		for (int i = 10; i > 0; i--) {
			std::cout << i;
		}
	}
	else {
		BBQ12(in12);
	}

	return 0;
}


