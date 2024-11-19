#include <iostream>
//f8
void BBQ8(int a, int b) {
    std::cout << "합: " << a + b << "\n";
    std::cout << "차: " << a - b << "\n";
    std::cout << "곱: " << a * b << "\n";
    std::cout << "몫: " << a / b << "\n";
}

//f9
char arr9[2][3] = {
    {'F','E','W'},
    {'D','C','A'}
};

void findCh(char target) {
    int counting = 0;
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 3; x++) {
            if (arr9[y][x] == target) {
                counting++;
            }
        }
    }
    if (counting >= 1) {
        std::cout << "발견!\n";
    }
    else {
        std::cout << "미발견\n";
    }
};

//f10
void checkChar(char target) {
    if (target >= 'a' && target <= 'z') {
        std::cout << "소\n";
    } else if (target >= 'A' && target <= 'Z') {
        std::cout << "대\n";
    }
}

//f11
struct Person {
    int age;
    int height;
};

Person a;
Person b;

void input11() {
    std::cin >> a.age >> a.height >> b.age >> b.height;
}

void output11() {
    std::cout << "a, b 나이 평균 " << (a.age + b.age) / 2 << "\n";
    std::cout << "a, b 키 평균 " << (a.height + b.height) / 2 << "\n";
}

int main()
{
    //1
    int arr1[8] = { 4,3,6,1,3,1,5,3 };
    int in1 = 0;
    std::cin >> in1;

    int count1 = 0;
    for (int i = 0; i < 8; i++) {
        if (arr1[i] == in1) {
            count1++;
        }
    }
    std::cout << "숫자 " << in1 << "개수는 " << count1 << "개 \n";

    //2
    char arr2[3][5] = {
        {'A','B','C','D','E'},
        {'E','A','B','A','B'},
        {'A','C','D','E','R'}
    };

    char in2 = 'a';
    std::cin >> in2;
    
    int count2 = 0;
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 5; x++) {
            if (arr2[y][x] == in2) {
                count2++;
            }
        }
    }
    if (count2 >= 3) {
        std::cout << "대발견\n";
    }
    else if (count2 >= 1 && count2 <= 2) {
        std::cout << "발견\n";
    }

    //3
    char arr3[6] = { 'A','F','G','A','B','C' };
    char in3 = 'a';
    char in3_3 = 'a';
    std::cin >> in3 >> in3_3;

    int count3 = 0;
    int count3_3 = 0;

    for (int i = 0; i < 6; i++) {
        if (arr3[i] == in3) {
            count3++;
       }
        if (arr3[i] == in3_3) {
            count3_3++;
        }
    }

    if (count3 >= 1 && count3_3 >= 1) {
        std::cout << "와 2개 \n";
    }
    else if (count3 >= 1 || count3_3 >= 1) {
        std::cout << "오 1개 \n";
    }
    else {
        std::cout << "우 0개 \n";
    }

    //4
    int arr4[6] = { 3,4,2,5,7,9 };
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    int temp4 = arr4[a];
    arr4[a] = arr4[b];
    arr4[b] = temp4;
    for (int i = 0; i < 6; i++) {
        std::cout << arr4[i];
    }
    std::cout << "\n";

    //5
    struct ABC
    {
        int x;
        int y;
    };

    ABC t;
    std::cin >> t.x >> t.y;
    std::cout << t.x + t.y << "\n";

    //6
    char arr6[3][3] = {};
    char ch = 'A';

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            arr6[y][x] = ch;
            ch++;
        }
    }

    int x6 = 0;
    int y6 = 0;
    int x6_1 = 0;
    int y6_1 = 0;

    std::cin >> x6 >> y6;
    std::cin >> x6_1 >> y6_1;

    char temp6 = arr6[y6][x6];
    arr6[y6][x6] = arr6[y6_1][x6_1];
    arr6[y6_1][x6_1] = temp6;

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            std::cout << arr6[y][x];
        }
        std::cout << "\n";
    }

    //7
    int l = 0;
    int r = 0;
    int count7 = 0;
    
    for (int i = 0; i < 6; i++) {
        std::cin >> l >> r;
        if (r > l) {
            int temp7 = l;
            l = r;
            r = temp7;
            count7++;
        }
        std::cout << l << " " << r << "\n";
    }
    std::cout << count7 << "명\n";

    //8
    int in8 = 0;
    int in8_1 = 0;
    std::cin >> in8 >> in8_1;
    BBQ8(in8, in8_1);

    //9
    char in9 = 'a';
    std::cin >> in9;
    findCh(in9);

    //10
    char arr10[5] = {};
    for (int i = 0; i < 5; i++) {
        std::cin >> arr10[i];
    }
    for (int i = 0; i < 5; i++) {
        checkChar(arr10[i]);
    }

    //11
    input11();
    output11();



    return 0;
}
