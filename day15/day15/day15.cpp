#include <iostream>

int main()
{
    //1
    int arr1[7] = { 3,5,1,1,2,3,2 };
    int inarr1[4] = { 4,1,2,3 };

    for (int i = 0; i < 4; i++) {
        int count1 = 0;
        for (int j = 0; j < 7; j++) {
            if (inarr1[i] == arr1[j]) {
                count1++;
            }
        }
        std::cout << inarr1[i] << "는 " << count1 << "개\n";
        count1 = 0;
    }
    
    //2
    int arr2[6] = { 10,50,40,20,30,40 };
    int inarr2[6] = { 15,35,80,35,45,5 };

    for (int i = 0; i < 6; i++) {
        int count2 = 0;
        for (int j = 0; j < 6; j++) {
            if (inarr2[i] < arr2[j]) {
                count2++;
            }
        }
        std::cout << inarr2[i] << "보다 큰 숫자는 " << count2 << "개\n";
        count2 = 0;
    }

    //3
    char sen3[2][6] = { "DCBA", "QWLBB" };


    for (int k = 0; k < 2; k++) {
        int len = strlen(sen3[k]);
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (sen3[k][i] > sen3[k][j]) {
                    char temp3 = sen3[k][i];
                    sen3[k][i] = sen3[k][j];
                    sen3[k][j] = temp3;
                }
            }
        }
    }
    std::cout << sen3[0] << sen3[1] << "\n";

    //4
    char sen4[2][6] = {
        "MINS", "MINST"
    };

    int flag4 = 0;

    for (int i = 0; i < 6; i++) {
        if (sen4[0][i] != sen4[1][i]) {
            flag4 = 1;
            break;
        }
    }

    if (flag4 == 0) {
        std::cout << "같음\n";
    }
    else {
        std::cout << "다름\n";
    }

    //5
    int in5 = 5127;
    int arr5[4] = {};
    arr5[0] = in5 / 1000;
    arr5[1] = (in5 % 1000) / 100;
    arr5[2] = (in5 % 100)  / 10;
    arr5[3] = in5 % 10;

    for (int i = 0; i < 4; i++) {
        std::cout << "숫자" << arr5[i] << "\n";
    }

    //6
    int arr6[6] = {1,3,5,7,5,6};

    int flag6 = 0;

    for (int i = 0; i < 5; i++) {
            if (arr6[i] - arr6[i+1] < -3 || arr6[i] - arr6[i+1] > 3) {
                flag6 = 1;
            }
        }
    
    if (flag6 == 0) {
        std::cout << "완벽한 배치\n";
    }
    else {
        std::cout << "재배치 필요\n";
    }

    //7
    char sen7[2][10] = {"NCQ", "QCN"};
    int len7 = 0;
    for (int i = 0; i < 10; i++) {
        if (sen7[0][i] != '\0') {
            len7++;
        }
    }

    int flag7 = 0;
    int t = len7 - 1;
    for (int i = 0; i < len7; i++) {
        if (sen7[0][i] != sen7[1][t]) {
            flag7 = 1;
         }
        t--;
    }
    if (flag7 == 0) {
        std::cout << "거울문장\n";
    }
    else {
        std::cout << "거울문장아님\n";
    }

    //8
    char arr8[4][7] = { "ABCD", "BBQ", "UIOUIO","MINS" };
    int len8[4] = {};
    for (int i = 0;i < 4; i++) {
        len8[i] = strlen(arr8[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (len8[i] > len8[j]) {
                int temp8 = len8[i];
                len8[i] = len8[j];
                len8[j] = temp8;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        std::cout << len8[i];
    }
    std::cout << "\n";

    //9
    char sen9[10] = { "AgKeOqV" };
    int len9 = strlen(sen9);
    int flag9 = 0;
    for (int i = 0; i < len9; i+=2) {
        if (sen9[i] >= 'A' && sen9[i] < 'Z') {
            flag9 = 1;
        }
    }
    for (int i = 1; i < len9; i += 2) {
        if (sen9[i] >= 'a' && sen9[i] < 'z') {
            flag9 = 1;
        }
        else {
            flag9 = 0;
        }
        
    }

    if (flag9 == 1) {
        std::cout << "개구리문장\n";
    }
    else {
        std::cout << "일반문장\n";
    }

    //10
    char arr10[7] = { 'A','B','C','Z','E','T','Q' };
    char blacklist[5] = { 'A','P','L','Q','F' };

    int warning[5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            if (blacklist[i] == arr10[j]) {
                warning[i] = 1;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if (warning[i] == 1) {
            std::cout << blacklist[i] << "는 마을사람\n";
        }
        else {
            std::cout << blacklist[i] << "는 외부사람\n";
        }
    }

    //11
    char sen11[5][10] = { "ABC","BBQ","KFC","SHOWSHOW","OPT" };
    int len11[5] = {};
    for (int i = 0; i < 5; i++) {
        len11[i] = strlen(sen11[i]);
    }
    int MAX = 0;
    int idx = 0;
    for (int i = 0; i < 5; i++) {
        if (MAX < len11[i]) {
            idx = i;
            MAX = len11[i];
        }
    }
    std::cout << "글자 수가 가장 긴 문장은 " << sen11[idx] << "글자 수는 " << MAX << "\n";

    return 0;
}

