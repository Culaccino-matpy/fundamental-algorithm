#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int q[N],n;

void quick_sort(int q[],int l,int r)
{
    if (l >= r) return;
    int i = l - 1,j = r + 1;
    int x = q[l];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i],q[j]);
        else break;
    }
    quick_sort(q,l,j),quick_sort(q,j + 1,r);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> q[i];
    quick_sort(q,0,n - 1);
    for (int i = 0; i < n; i ++ ) cout << q[i] << " ";

    return 0;
}