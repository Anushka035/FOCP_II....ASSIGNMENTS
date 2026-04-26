#include <iostream>
using namespace std;

class Bank {
private:
    int balance[10001];  
    int exists[10001];    

public:
    Bank() {
        for (int i = 0; i <= 10000; i++) {
            balance[i] = 0;
            exists[i] = 0;
        }
    }
    bool CREATE(int X, int Y) {
        if (exists[X] == 0) {
            exists[X] = 1;
            balance[X] = Y;
            return true;
        } else {
            balance[X] += Y;
            return false;
        }
    }
    bool DEBIT(int X, int Y) {
        if (exists[X] == 0 || balance[X] < Y) {
            return false;
        }
        balance[X] -= Y;
        return true;
    }
    bool CREDIT(int X, int Y) {
        if (exists[X] == 0) {
            return false;
        }
        balance[X] += Y;
        return true;
    }
    int BALANCE(int X) {
        if (exists[X] == 0) {
            return -1;
        }
        return balance[X];
    }
};

int main() {
    int Q;
    cin >> Q;

    Bank b;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "CREATE") {
            int X, Y;
            cin >> X >> Y;
            if (b.CREATE(X, Y)) cout << "true\n";
            else cout << "false\n";
        }

        else if (query == "DEBIT") {
            int X, Y;
            cin >> X >> Y;
            if (b.DEBIT(X, Y)) cout << "true\n";
            else cout << "false\n";
        }

        else if (query == "CREDIT") {
            int X, Y;
            cin >> X >> Y;
            if (b.CREDIT(X, Y)) cout << "true\n";
            else cout << "false\n";
        }

        else if (query == "BALANCE") {
            int X;
            cin >> X;
            cout << b.BALANCE(X) << endl;
        }
    }

    return 0;
}