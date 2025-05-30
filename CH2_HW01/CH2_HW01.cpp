#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sum(vector<int> vNum) {
    int result = 0;

    for (int i = 0; i < vNum.size(); i++) {
    
        result += vNum[i];
    }
    return result;
}

double avg(vector<int> vNum) {
    double result = 0;

    result = (double)sum(vNum) / (vNum.size());

    return result;
}


void sortNum(vector<int> vNum, int choice) {
    
    for (int i = 0; i < vNum.size(); i++) {
        int tmp = i;
        for (int j = i+1; j < vNum.size(); j++) {

            if (choice == 1) {
                if (vNum[tmp] > vNum[j]) tmp = j;
            }
            else {
                if (vNum[tmp] < vNum[j]) tmp = j;
            } 
        }
        swap(vNum[i], vNum[tmp]); 
    }
    cout << "sort : ";
    for (int i = 0; i < vNum.size(); i++) {
        cout << vNum[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vNum;

    cout << "숫자를 5개 입력해 주세요." << endl;


    for (int i = 0; i < 5; i++) {
        int num = 0;

  
        cout << i + 1 << "번 숫자 입력: ";
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "숫자만 입력해주세요" << endl;
            i--;
        }else {
            vNum.push_back(num);
        }
        
    }

    cout << "합계 : " << sum(vNum) << ",  평균 : " << avg(vNum) << endl;


    while (true) {
        cout << "오름차순 정렬 : 1,   내림차순 정렬 : 2,   그 외는 종료" << endl;
        int choice;
        cin >> choice;

        if (choice == 1) {
            sortNum(vNum, choice);
        }
        else if (choice == 2) {
            sortNum(vNum, choice);
        }
        else {
            cout << "종료" << endl;
            break;
        }
    }

    
    
}
