#include <iostream>
//f3
int in3 = 0;
int in3_3 = 0;

int input3(int in3, int in3_3) {
    std::cin >> in3 >> in3_3;
    return in3 + in3_3;
}
void output3(int sum3) {
    int i = 5;
    while (i < sum3 + 1) {
        std::cout << i;
        i++;
    }
}

//f6
int arr6[3][4] = {};

void input6(int in6, int arr6[3][4]) {
    std::cin >> in6;
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            arr6[y][x] = in6;
            in6++;
        }
    }
}

void process6(int arr6[3][4]) {
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            arr6[y][x] = arr6[y][x]++;
        }
    }
}

void output6(int arr6[3][4]) {
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            std::cout << arr6[y][x];
        }
        std::cout << "\n";
    }
}

//f7
char input7() {
    char in7;
    std::cin >> in7;
    return in7;
}

void output7(char in7, char arr7[5], char arr7_1[5]) {
    if (in7 >= 'a' && in7 <= 'z') {
        for (int i = 0; i < 5; i++) {
            std::cout << arr7[i];
        }
    }
    else if (in7 >= 'A' && in7 <= 'Z') {
        for (int i = 0; i < 5; i++) {
            std::cout << arr7_1[i];
        }
    }
    else {
        for (char i = 'H'; i >= 'A'; i--) {
            std::cout << i;
        }
    }
    std::cout << "\n";
}

//f9
void input9(int arr9[2][3]) {
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 3; x++) {
            std::cin >> arr9[y][x];
        }
    }
}

int process9(int arr9[2][3]) {
    int sum = 0;
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 3; x++) {
            sum = sum + arr9[y][x];
        }
    }
    return sum;
}

void output9(int sum) {
    std::cout << sum;
}

//f11
void starBox() {
    for (int i = 1; i < 21; i++) {
        if (i % 2 == 1) {
            std::cout << i;
        }
    }
}
void macDoll() {
    for (char i = 'H'; i >= 'A'; i--) {
        std::cout << i;
    }
}
void copyBean() {
    for (int i = -5; i < 6; i++) {
        std::cout << i;
    }
}
int main()
{
    //1
    int n1 = 0;
    std::cin >> n1;
    int i1 = 1;
    while (i1 - 1 < n1) {
        std::cout << i1;
        i1++;
    }

    //2
    int arr2[6] = {};
    for (int i = 0; i < 6; i++) {
        std::cin >> arr2[i];
    }

    for (int i = 0; i < 6; i++) {
        if (arr2[i] == 7) {
            break;
        }
        std::cout << arr2[i];
    }

    //3
    int sum3 = input3(in3, in3_3);
    output3(sum3);

    //4
    int arr4[6] = {};

    for (int i = 0; i < 6; i++) {
        std::cin >> arr4[i];
    };

    for (int j = 5; j >= 0; j--) {
        std::cout << arr4[j];
        if (arr4[j] == 7) {
            break;
        }
    }

    //5
    int arr5[6] = { 3,4,1,6,7,5 };

    int i5 = 0;
    while (i5 < 6) {
        std::cout << arr5[i5];
        i5++;
    }

    //6
    int in6 = 0;

    input6(in6, arr6);
    process6(arr6);
    output6(arr6);

    //7
    char arr7[5] = {'B','D','5','Q','A'};
    char arr7_1[5] = {'Q','E','R','E','F'};
    char in7 = input7();
    output7(in7, arr7, arr7_1);

    //8
    char arr8[6] = {'#','_','#','_','#','#'};
    for (int i = 0; i < 6; i++) {
        if (arr8[i] == '#') {
            std::cout << "샵";
        }
        else if (arr8[i] == '_') {
            std::cout << "무";
        }
    }

    //9
    int arr9[2][3] = {};
    input9(arr9);
    int sum = process9(arr9);
    output9(sum);

    //10
    int arr10[3][4] = {
    {4, 3, 1, 1},
    {3, 1, 2, 1},
    {0, 0, 1, 2}
    };

    int in10 = 0;
    std::cin >> in10;
    int count = 0;
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            if (arr10[y][x] == in10) {
                count++;
            }
        }
    }
    std::cout << count << "개 존재합니다. \n";

    //11
    int coffeePrice = 0;
    std::cin >> coffeePrice;
    if (coffeePrice >= 3500 && coffeePrice <= 5000) {
        starBox();
    }
    else if (coffeePrice >= 2500 && coffeePrice <= 3500) {
        macDoll();
    }
    else {
        copyBean();
    }

    return 0;
}
