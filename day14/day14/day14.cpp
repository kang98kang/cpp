#include <iostream>

//f7
void Magic7(int arr[3][3]) {
    int num7 = 1;
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            if (y <= x) { 
                arr[y][x] = num7;
                num7++;
            }
        }
    }
}

void Output7(int arr[3][3]) {
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            std::cout << arr[y][x];
        }
        std::cout << "\n";
    }
}

//f8
void CountLine(char arr[3][10]) {
    int y = 0;
    int x = 0;

    int count8 = 0;
    int count8_1 = 0;
    int count8_2 = 0;
    
    while (y < 3) {
        while (y == 0 && x < 10 && arr[y][x] != '\0') {
            count8++;
            x++;
            }
        y++;
        x = 0;
        while (y == 1 && x < 10 && arr[y][x] != '\0') {
            count8_1++;
            x++;
        }
        y++;
        x = 0;
        while (y == 2 && x < 10 && arr[y][x] != '\0') {
            count8_2++;
            x++;
        }
    }

    std::cout << arr[0] << "의 글자 수는 " << count8 << "\n";
    std::cout << arr[1] << "의 글자 수는 " << count8_1 << "\n";
    std::cout << arr[2] << "의 글자 수는 " << count8_2 << "\n";
}

int main()
{
    //1
    int a1 = 2;
    int b1 = 5;
    while (a1 <= 5) {
        std::cout << a1;
        a1++;
    }
    std::cout << "\n";
    
    //2
    int a2 = 3;
    int count2 = 0;
    int count2_1 = 0;
    while (count2_1 < 3) {
        while (count2 < 5) { 
            std::cout << a2;
            count2++;
        }
        count2 = 0;
        std::cout << "\n";
        count2_1++;
    }

    //3
    char a3 = 'A';
    char arr3[3][3] = {};
    int y = 2;
    int x = 0;
    while (y >= 0) {
        while (x < 3) {
            if (y + x < 3) {
                arr3[y][x] = a3;
                a3++;
            }
            else {
                arr3[y][x] = 0;
            }
            x++;
        }
        x = 0;
      y--;
    }
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            std::cout << arr3[j][i];
        }
        std::cout << "\n";
    }

    //4
    int arr4[6] = { 5,3,6,2,1,8 };

    for (size_t y = 0; y < 6; y++)
    {
        for (size_t x = y + 1; x < 6; x++)
        {
            if (arr4[y] > arr4[x]) {
                int temp4 = arr4[y];
                arr4[y] = arr4[x];
                arr4[x] = temp4;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        std::cout << arr4[i] << " ";
    }
    std::cout << "\n";

    //5
    char arr5[7] = { "ANDBBQ" };
    for (size_t y = 0; y < 7; y++) {
        for (size_t x = y + 1; x < 7; x++) {
            if (arr5[y] > arr5[x]) {
                char temp5 = arr5[y];
                arr5[y] = arr5[x];
                arr5[x] = temp5;
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        std::cout << arr5[i] << " ";
    }
    std::cout << "\n";

    //6
    char result6[3][10] = {"BBQWORLD","KFCAPPLE","LOT"};
    char in6 = 'B';
    int count6 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (result6[i][j] == in6) {
                count6++;
            }
        }
    }
    std::cout << count6 << "\n";

    //7
    int arr7[3][3] = {};
    Magic7(arr7);
    Output7(arr7);

    //8
    char sen8[3][10] = {"DATA", "TOPCON", "BBQ"};
    /*for (int i = 0; i < 3; i++) {
        std::cin.getline(sen8[i],10);
    }*/
    CountLine(sen8);
    
    //9
    char sen9[4][6] = { "SHOW","YOUR","JASON","DATA" };
    int flagA = 0;
    int flagB = 0;
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 6; x++) {
            if (sen9[y][x] == 'A') {
                flagA = 1;
                break;
            }
        }
    }
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 6; x++) {
            if (sen9[y][x] == 'B') {
                flagB = 1;
                break;
            }
        }
    }if (flagA == 1 && flagB == 1) {
        std::cout << "대발견" << "\n";
    }
     else if (flagA == 1 || flagB == 1) {
        std::cout << "중발견" << "\n";
    }
    
    //10
    char sen10[2][6] = { "World","BBQ" };
    char arr10[12] = {};
    int leng1 = 0;
    int leng2 = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 0 && sen10[i][j] != '\0') {
                leng1++;
            }
            else if(i == 1 && sen10[i][j] != '\0') {
                leng2++;
            }
        }
    }
    for (int i = 0; i < 12; i++) {
        if (i >= 0 && i < leng1) {
            arr10[i] = sen10[0][i];
        }
        else {
            arr10[i] = sen10[1][i - leng1];
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr10[i];
    }
    std::cout << "\n";

    //11
    char sen11[2][6] = { "DATAW","BBQK" };
    int in11 = 3;
    if (in11 % 2 == 1) {
        for (int y = 0; y < 6; y++) {
            for (int x = y + 1; x < 6; x++) {
                if (sen11[0][y] > sen11[0][x]) {
                    char temp11 = sen11[0][y];
                    sen11[0][y] = sen11[0][x];
                    sen11[0][x] = temp11;
                }
            }
        }
    }
    else {
        for (int y = 0; y < 6; y++) {
            for (int x = y + 1; x < 6; x++) {
                if (sen11[1][y] > sen11[1][x]) {
                    char temp11 = sen11[1][y];
                    sen11[1][y] = sen11[1][x];
                    sen11[1][x] = temp11;
                }
            }
        }
    }
    
    for (int i = 0; i < 6; i++) {
        std::cout << sen11[0][i];
    }
    std::cout << "\n";

    //12
    char arr12[3][6] = { "POTIO","ABCDE","YOURE" };
    int a12 = 1;
    int b12 = 3;
    for (int i = 0; i < 3; i++) {
        for (int j = a12; j <= 3; j++) {
            std::cout << arr12[i][j];
        }     
    }
    std::cout << "\n";

    //13
    char a13 = 'D';
    char b13 = 'A';
    char* ptrA = &a13;
    char* ptrB = &b13;
    char temp13 = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp13;

    std::cout << "SWAP 결과: " << a13 << " " << b13 << "\n";

    //14
    char sen14[2][8] = { "BackLog","BackBt" };
    int count14 = 0;
    for (int i = 0; i < 8; i++) {
        if (sen14[0][i] != sen14[1][i]) {
            count14++;
        }
    }
    std::cout << count14;
}
