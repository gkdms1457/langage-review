//������ ���� c++ ���α׷���
//problem01-1

#include <iostream>

int main() {

    int input;
    int sum = 0;

    for(int i = 0; i < 5 ; i++) {

        std::cout << i+1 << "��° ���� �Է�: ";
        std::cin >> input;
        sum += input;

    }
    std::cout << "�հ�: "<< sum <<std::endl;
    return 0;
}