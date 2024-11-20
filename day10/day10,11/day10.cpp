#include <iostream>

//f2
void getChar() {
    char ch1 = 'a';
    char ch2 = 'a';
    std::cin >> ch1 >> ch2;
    if (ch1 > ch2) {
        std::cout << ch1 << "\n";
    }
    else {
        std::cout << ch2 << "\n";
    }
}

//f4
void printData(int target) {
    std::cout << target << "\n";
}

void even(int value) {
    printData(value * 2);
}

void odd(int value) {
    printData(value - 10);
}

//f5
int GOP() {
    int in1 = 0;
    int in2 = 0;
    std::cin >> in1 >> in2;
    return in1 * in2;
}

int SUM() {
    int in3 = 0;
    int in4 = 0;
    std::cin >> in3 >> in4;
    return in3 + in4;
}

//f9
int input9() {
    int in9 = 0;
    std::cin >> in9;
    return in9;
}

void countDown(int in9) {
    for (int i = in9; i > 0; i--) {
        std::cout << i << "\n";
    }
}

//f10
int yesOrNo() {
    int in10 = 0;
    std::cin >> in10;
    if (in10 % 3 == 0) {
        return 7;
    }
    else if (in10 % 3 == 1) {
        return 35;
    }
    else {
        return 50;
        }
}

//f11
char scoring() {
    int in11 = 0;
    std::cin >> in11;
    if (in11 >= 90) {
        return 'A';
    }
    else if (in11 >= 80) {
        return 'B';
    }
    else if (in11 >= 70) {
        return 'C';
    }
    else {
        return 'D';
    }
}

//f12
char aToZ() {
    char in12 = 'a';
    std::cin >> in12;
    if (in12 - 'A' < 'Z' - in12) {
        return 'A';
    }
    else {
        return 'Z';
    }
}

int main()
{
    //1
    int in1 = 0;
    std::cin >> in1;
    int arr1[4][4] = {};
    if (in1 % 2 == 0) {
        for (int i = 0; i < 16; i++) {
            int row1 = i / 4;
            int col1 = i % 4;
            if (row1 == col1) {
                arr1[row1][col1] = row1 + 1;
            } else {
                arr1[row1][col1] = 0;
            }
        }
    } else {
        for (int i = 0; i < 16; i++) {
            int row2 = i / 4;
            int col2 = i % 4;
            if (row2 + col2 == 3) {
                arr1[row2][col2] = row2 + 1;
            }
            else {
                arr1[row2][col2] = 0;
            }
        }
    }

    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            std::cout << arr1[y][x];
        }
        std::cout << "\n";
    }
    

    //2
    getChar();

    //3
    int in3 = {};
    std::cin >> in3;
    int arr3[3][3] = {};
    int num3 = 9;
    if (in3 % 5 == 1) {
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                arr3[y][x] = num3;
                num3--;
            }
        }
    }
    else if (in3 % 5 == 2) {
            for (int y = 0; y < 3; y++) {
                for (int x = 2; x >= 0; x--) {
                    arr3[y][x] = num3;
                    num3--;
                }
            }
    }
    else {
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                arr3[y][x] = num3 + 1;
                num3++;
            }
        }
    }

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            std::cout << arr3[y][x];
        }
        std::cout << "\n";
    } 

    //4
    int a4 = 0;
    int b4 = 0;

    std::cin >> a4 >> b4;
    if ((a4 / b4) % 2 == 0) {
      even(a4 / b4);

    }
    else {
      odd(a4 / b4);
    }

    printData(a4 + b4);

    //5
    int a5 = GOP();
    int b5 = SUM();

    if (a5 > b5) {
        std::cout << "GOP>SUM\n";
    }
    else if(a5 < b5) {
        std::cout << "GOP<SUM\n";
    }
    else {
        std::cout << "GOP==SUM\n";
    }

    //6
    int arr6[4][4] = {};
    int num6 = 1;
    for (int x = 3; x >= 0; x--) {
        for (int y = 0; y < 4; y++) {
            arr6[y][x] = num6;
            num6++;
        }
    }
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            std::cout << arr6[y][x];
        }
        std::cout << "\n";
    }

    //7
    int arr7[3][4] = {};
    int num7 = 1;
    for (int y = 2; y >= 0; y--) {
        for (int x = 3; x >= 0; x--) {
            arr7[y][x] = num7;
            num7++;
        }
    }
    
    int in7 = 0;
    std::cin >> in7;
    for (int i = 0; i < 3; i++){
        arr7[i][in7] = 0;
    }

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            std::cout << arr7[y][x];
        }
        std::cout << "\n";
    }

    //8
    int arr8[4][4]{
        {3,8,10,2},
        {3,5,8,7},
        {2,8,6,4},
        {1,3,0,9}
    };

    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            if (arr8[y][x] == 0) {
                std::cout << "!";
            }
            else if (arr8[y][x] % 2 == 0){
                std::cout << "#";
            }
            else if (arr8[y][x] % 2 == 1) {
                std::cout << "@";
            }
            
        }
        std::cout << "\n";
    }

    //9
    int in9 = input9();
    countDown(in9);

    //10
    int value10 = yesOrNo();
    std::cout << value10 << "\n";

    //11
    char value11 = scoring();
    std::cout << value11 << "\n";

    //12
    char value12 = aToZ();
    std::cout << value12 << "\n";




    return 0;
}

