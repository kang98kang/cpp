#include <iostream>
//f6
char arr6[9] = { "MINQUEST" };
int Length6(char in6) {
    for (int i = 0; i < 9; i++) {
        if (arr6[i] == in6) {
            return i;
        }
    }
}



int main()
{
    //1
    char arr1[256] = {};
    std::cin >> arr1;
    for(int j = 0; j < 5; j++){
    for (int i = 0; i < 256; i++) {
        std::cout << arr1[i] ;
    }
    std::cout << "\n";
    }

    //2
    char arr2[5] = {"BBQ!"};
    char arr2_1[9] = {"CHICKEN!"};

    for (int i = 0; i < 5; i++) {
        if (arr2[i] == '\0') {
            std::cout << i << "\n";
            break;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (arr2_1[i] == '\0') {
            std::cout << i << "\n";
            break;
        }
    }

    //3
    int in3 = 4;

    for (int i = 0; i < 4; i++) {
        std::cout << in3 << in3 << in3 << in3 << "\n";
        in3--;
       }

    //4
    int in4 = 4;
    for (int i = 0; i < in4; i++) {
        std::cout << "123\n";
    }

    //5
    int in5 = 1;
    int arr5[3][4] = {};

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            if (x + y <= 1) {
                arr5[y][x] = 0;
            }
            else {
                arr5[y][x] = in5;
                in5++;
            }
        }
    }

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 4; x++) {
            if (arr5[y][x] == 0) {
                std::cout << " ";
            }
            else {
                std::cout << arr5[y][x];
            }
        }
        std::cout << "\n";
    }


    //6
    char in6 = 'M';
    char in6_1 = 'S';
    char in6_2 = 'T';

    int value6 = Length6(in6);
    int value6_1 = Length6(in6_1);
    int value6_2 = Length6(in6_2);

    std::cout << in6 << "=" << value6 << "\n";
    std::cout << in6_1 << "=" << value6_1 << "\n";
    std::cout << in6_2 << "=" << value6_2 << "\n";

    //7
    char arr7[11] = { "ABCAA12341" };
    int count7 = 0;
    int count7_1 = 0;
    int count7_2 = 0;

    for (int i = 0; i < 11; i++) {
        if (arr7[i] == 'A') {
            count7++;
        }
        else if (arr7[i] == '1') {
            count7_1++;
        }
        else if (arr7[i] == 'C') {
            count7_2++;
        }
    }
    std::cout << "A" << "=" << count7 << "\n";
    std::cout << "1" << "=" << count7_1 << "\n";
    std::cout << "C" << "=" << count7_2 << "\n";

    //8
    char arr8[10] = { "DATAPOWER" };
    int a8 = 3;
    int b8 = 6;
    char arr8_1[9] = {};

    for (int i = a8; i <= b8; i++) {
        if (i == b8) {
            arr8_1[b8 + 1] = '\0';
        }
        arr8_1[i] = arr8[i];
    }

    for (int i = 0; i < 9; i++) {
        std::cout << arr8_1[i];
    }
    std::cout << "\n";

    //9
    int arr9[3][3] = {0};

    char in9 = 'D';
    int num9 = 6;

    if (in9 >= '0' && in9 <= '9') {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                if (y <= x) {
                    arr9[y][x] = num9;
                    num9--;
                }
            }
        }
    }
    else if (in9 >= 'A' && in9 <= 'Z') {
        for (int y = 0; y < 3; y++) {
            for (int x = 3; x >= 0; x--) {
                if (y >= x) {
                    arr9[y][x] = num9;
                    num9--;
                }
            }
        }
    }

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) { 
            if (arr9[y][x] == 0) {
                std::cout << " ";
            }
                std::cout << arr9[y][x];
        }
        std::cout << "\n";
    }

    //10
    char arr10[5][5] = { 0 };
    char in10 = 'A';
    int in10_1 = 5;
    
        for (int x = 4; x >= 0; x--) {
            arr10[in10_1 - 1][x] = in10;
            in10++;
        }

        for (int y = 0; y < 5; y++) {
            for (int x = 0; x < 5; x++) {
              std::cout << arr10[y][x];
            }
            std::cout << "\n";
        }
    
















    return 0;
}
