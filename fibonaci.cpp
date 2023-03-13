#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int main() {
    set<int> fib;
    fib.insert(0);
    fib.insert(1);
    int a = 0, b = 1, c = a + b;
    while(c <= MAXN) {
        fib.insert(c);
        a = b;
        b = c;
        c = a + b;
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> fib_seq;
        for(int i = 0; i < n; i++) {
            if(fib.count(a[i])) {
                fib_seq.push_back(a[i]);
            }
        }
        int m = fib_seq.size();
        for(int i = 0; i < m; i++) {
            cout << fib_seq[i] << " ";
        }
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

bool isFibonacci(int n)
{
    int a = 0, b = 1, c;
    while (b < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == n);
}

void printFibonacciSubsequence(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 || isFibonacci(arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        printFibonacciSubsequence(arr, n);
    }
}