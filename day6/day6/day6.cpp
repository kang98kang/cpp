#include <iostream>

//f1
void ABC1(char &a1, char &b1){
    std::cin >> a1 >> b1;
}
void OUTPUT1(char a, char b) {
    std::cout << a << b;
}

//f12
void input12(char& a12, char& b12, char& c12) {
    std::cin >> a12 >> b12 >> c12;
}
void process12(char a, char b, char c, char& flag12) {
    if (a == 'A' && b == 'B' && c == 'C') {
        flag12 = 1;
    }
}
void output12(int flag){
    if (flag == 1) {
        std::cout << "ABC를 찾았다.";
    }
    else {
        std::cout << "못찾았다.";
    }

}

int main()
{
    //1
    char a1 = 'a';
    char b1 = 'b';
    ABC1(a1, b1);
    OUTPUT1(a1, b1);

    //2
    char a2 = 'a';
    char b2 = 'a';
    char c2 = 'a';

    std::cin >> a2 >> b2 >> c2;
    std::cout << (int)a2 << (int)b2 << (int)c2;

    //3
    int in3 = 0;
    std::cin >> in3;
    for (int i = 0; i < in3; i++) {
        std::cout << "1 2 3 4 5";
    }

    //4
    char arr4[6] = { '$','@','D','A','9','#' };
    for (int i = 0; i < 6; i++){
        std::cout << arr4[i],": ", (int)arr4[i];
        std::cout << "\n";
    }

    //5
    char arr5[4] = { 'B','T','K','A' };
    int in5 = 0;
    std::cin >> in5;
    for (int i = 0; i < in5; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << arr5[j];
        }
    }

    //6
    char ch6 = 'a';
    std::cin >> ch6;
    if (ch6 >= 'a' && ch6 <= 'z') {
        std::cout << "소문자입니다. \n";
    }
    else if (ch6 >= 'A' && ch6 <= 'Z') {
        std::cout << "대문자입니다. \n";
    }

    //7
    int in7 = 0;
    std::cin >> in7;
    for (int i = 0; i < in7; i++) {
        for (int j = 0; j < in7; j++) {
            std::cout << "#";
        }
        std::cout << "\n";
    }

    //8
    char input8;
    std::cin >> input8;
    
    if (input8 >= '1' && input8 <= '9') {
        int t8 = input8 - '0';
        std::cout << t8;
    }
    else {
        std::cout << input8;
    }
    
    //9
    char ch9;
    std::cin >> ch9;
    for (char i = ch9;i <= 'Z'; i++) {
        std::cout << i;
    }

    //10
    char ch10;
    std::cin >> ch10;
    std::cout << (char)(ch10 - 'a' + 'A');

    //11
    char ch11;
    char ch11_1;
    std::cin >> ch11 >> ch11_1;
    for (int i = 0; i < 4; i++) {
        for (char j = ch11; j <= ch11_1; j++) {
            std::cout << j;
        }
    }

    //12
    char flag12;
    char a12;
    char b12;
    char c12;

    input12(a12, b12, c12);
    process12(a12, b12, c12, flag12);
    output12(flag12);

    //13
    int a13;
    int b13;
    int c13;
    std::cin >> a13 >> b13 >> c13;

    for (int j = 0; j < c13; j++) {
        for (int i = a13; i <= b13; i++) {
            std::cout << i;
        }
    }
    








    return 0;

}

