#include <iostream>
using namespace std;

class FruitSeller {
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money) {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }

    int SaleApples(int money) {
        int num = money/APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult() {
        cout << "number of apples : " << numOfApples << endl;
        cout << "revenue : " << myMoney << endl << endl;
    }
};

class FruitBuyer {
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money) {
        myMoney = money;
        numOfApples = 0;
    }
    void BuyApples(FruitSeller &seller, int money) {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }
    void ShowBuyResult() {
        cout << "balance : " << myMoney << endl;
        cout << "number of apples : " << numOfApples << endl << endl;
    }
};

int main(void){
    FruitSeller seller; // FruitSeller *seller = new FruitSeller(동적할당방식)
    seller.InitMembers(1000,20,0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout << "seller's information" << endl;
    seller.ShowSalesResult();
    cout << "buyer's information" << endl;
    buyer.ShowBuyResult();

    return 0;
}