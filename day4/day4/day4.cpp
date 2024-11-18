#include <iostream>

int main()
{
	int arr[5] = { 3,5,2,6,7 };

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
	std::cout << "\n";


	int arr1[5] = {};

	arr1[0] = 4;
	arr1[1] = 1;
	arr1[2] = 3;
	arr1[3] = 6;
	arr1[4] = 9;

	int arr1idx = 0;
	std::cin >> arr1idx;
	std::cout << arr1idx << "번 index의 값은 " << arr1[arr1idx] <<"입니다. \n";

	int arr2[7] = {};
	for (int i = 0; i < 7;i++) {
		std::cin >> arr2[i];
	}
	std::cout << arr2[0] + arr2[6] << "\n";


	int arr2in = 0;
	std::cin >> arr2in;
	int arr2plus[5] = {};
	for (int i = 0; i < 5; i++) {
		arr2plus[i] = arr2in + 5;
	}
	for (int i = 0; i < 5; i++) {
		std::cout << arr2plus[i] << "\n";
	}

	int arr3[6] = { 3,4,1,6,7,5 };
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	std::cout << arr3[a] + arr3[b] << "\n";

	int arr4[4] = { 3,1,2,5 };
	int arr4in = 0;
	std::cin >> arr4in;
	if (arr4[arr4in] > 2) {
		std::cout << "우와! \n";
	}
	else {
		std::cout << "ㅠㅠ \n";
	}

	int arr5[5] = {5,2,3,4,7};
	std::cout << arr5[4] << arr5[3] << arr5[2] << arr5[1] << arr5[0] << "\n";


	int arr6[6] = {};
	int arr6in = 0;
	std::cin >> arr6in;
	for (int i = 0; i < 6; i++) {
		arr6[i] = arr6in;
		arr6in--;
	}
	std::cout << arr6[2] << "\n";

	int arr7[4] = { 3,3,5,1 };
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = sum + arr7[i];
	}
	std::cout << sum << "\n";

	int arr8[10] = {5,25,54,2,-33,57,82,-8,13,1};
	int arr8in = 0;
	std::cin >> arr8in;
	for (int i = arr8in; i < 10; i++) {
		std::cout << arr8[i] << "\n";
	}
}
