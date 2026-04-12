#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin>>N;

        int count = 0;
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                count++;
                while (N%i== 0) {
                    N=N/i;
                }
            }
        }
        if (N>1) {
            count++;
        }
        int ans = 1;
        for (int i=0;i<count;i++) {
            ans=ans*2;
        }

        cout<<ans<<"\n";
    }

    return 0;
}