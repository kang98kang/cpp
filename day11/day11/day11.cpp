#include <iostream>
//f1
int input1() {
    int in1 = 0;
    std::cin >> in1;
    return in1;
}
void cals1(int ca1, int ca2, int ca3) {
    std::cout << ca1 + ca2 + ca3 << "\n";
}

//f2
int sum2(int s1, int s2) {
    return s1 + s2;
}

int comp2(int co1, int co2) {
    return co1 - co2;
}

void print2(int pr1, int pr2) {
    std::cout << "합: " << pr1 << "\n" << "차: " << pr2 << "\n";
}

//f10
int KFC10(int target10, int arr10[2][5]) {
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 5; x++) {
            if (arr10[y][x] == target10) {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
}

int main()
{
  //1
    int a1_1 = input1();
    int a1_2 = input1();
    int a1_3 = input1();

    cals1(a1_1, a1_2, a1_3);

  //2
    int in2 = 5;
    int in2_2 = 1;
    int val2 = sum2(in2, in2_2);
    int val2_2 = comp2(in2, in2_2);
    print2(val2, val2_2);

  //3
    int a3 = 3;
    char gd3 = 'A';
    int* p3 = &a3;
    char* t3 = &gd3;
    std::cout << "*p3은 " << *p3 << "\n";
    std::cout << "p3은 " << p3 <<"\n";

    *p3 = 10;
    std::cout << "*p3은 " << *p3 << " a3은 " << a3 << "\n";
    (*p3)++;
    std::cout << "(*p)++ 하면 *p3은 " << *p3 << " a3은 " << a3 << "\n";
    (*t3)++;
    std::cout << "*t3은 " << *t3 << "gd3은 " << gd3 << "\n";

    //4
    char a4 = 'A';
    char b4 = 'B';
    char c4 = 'C';

    char* pa4 = &a4;
    char* pb4 = &b4;
    char* pc4 = &c4;

    (*pa4)++;
    (*pb4)++;
    (*pc4)++;

    std::cout << a4 << b4 << c4 << "\n";

    //5
    int a5 = 3;
    int b5 = 6;

    int* p5 = &a5;
    int* t5 = &b5;

    int temp5 = *p5;
    *p5 = *t5;
    *t5 = temp5;

    std::cout << a5 << " " << b5 << "\n";

    //6
    int arr6[6] = { 3,4,1,3,2,7 };
    int in6 = 3;
    int flag6 = 0;
    for (int i = 0; i < 6; i++) {
        if (arr6[i] == in6) {
            flag6 = 1;
            break;
        }
    }
    if (flag6 > 0) {
        std::cout << "발견!\n";
    }
    else {
        std::cout << "미발견!\n";
    }

    //7
    int arr7[6] = { 4,1,5,2,3,2 };
    int MAX7 = 0;
    int MIN7 = 9999;
    for (int i = 0; i < 6; i++) {
        if (MAX7 < arr7[i]) {
            MAX7 = arr7[i];
        }
        else if (MIN7 > arr7[i]) {
            MIN7 = arr7[i];
        }
    }
    std::cout << "MAX = " << MAX7 << "\nMIN = " << MIN7 << "\n";

    //8
    char arr8[13] = { 'S','t','r','u','c','t','P','o','i','n','t','e','r' };

    for (int i = 0; i < 13; i++) {
        if (arr8[i] == 'P') {
            std::cout << "P 발견" << "\n";
            break;
        }
    }

    //9
    char arr9[12] = {'j','K','u','n','A','N','y','e','G','o','n','g'};
    int bigCount = 0;
    int smallCount = 0;
    for (int i = 0; i < 12; i++) {
        if (arr9[i] >= 'A' && arr9[i] <= 'Z') {
            bigCount++;
        }
        else if (arr9[i] >= 'a' && arr9[i] <= 'z') {
            smallCount++;
        }
    }

    char* big = new char[bigCount];
    char* small = new char[smallCount];

    int bigIdx = 0;
    int smallIdx = 0;

    for (int i = 0; i < 12; i++) {
        if (arr9[i] >= 'A' && arr9[i] <= 'Z') {
            big[bigIdx++] = arr9[i];
        }
        else if (arr9[i] >= 'a' && arr9[i] <= 'z') {
            small[smallIdx++] = arr9[i];
        }
    }

    std::cout << "Big Text: ";
    for (int i = 0; i < bigIdx; i++) {
        std::cout << big[i];
    }
    std::cout << "\nSmall Text: ";
    for (int i = 0; i < smallIdx; i++) {
        std::cout << small[i];
    }
    std::cout << "\n";

    delete[] big;
    delete[] small;

    //10
    int arr10[2][5] = {
        {3,2,6,2,4},
        {1,4,2,6,5}
    };
    int value10 = 0;
    int target10 = 2;
    value10 = KFC10(target10, arr10);
    if (value10 == 1) {
        std::cout << "값이 존재합니다.\n";
    }
    else {
        std::cout << "값이 없습니다.\n";
    }

    //11
    int arr11[4][4] = {
        {1,3,6,2},
        {4,2,4,5},
        {6,3,7,3},
        {1,5,4,6}
    };
    int in11 = 4;
    int arrpc = 0;
    int* arrp = new int [arrpc];


    return 0;
}
