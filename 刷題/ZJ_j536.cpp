#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int N, A;
    cin >> N >> A;
    vector<long long int>num;
    long long int max = -999;
    int maxpos = 0;
    for (int i = 0; i<N; i++)
    {
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
        if (tmp > max)
        {
            max = tmp;
            maxpos = i;
        }
    }
    if (maxpos - (A/2) >= 0 && maxpos + (A/2) < N)
    {
        for (int i = maxpos-1; i>=maxpos-(A/2); i--)
        {
            num[maxpos] += num[i];
            num[i] = 0;
        }
        for (int i = maxpos+1; i<=maxpos+(A/2); i++)
        {
            num[maxpos] += num[i];
            num[i] = 0;
        }
    }
    else if (maxpos - (A/2) < 0 && maxpos + (A/2) < N)
    {
        int tmp = A/2;
        for (int i = maxpos-1; i>=0; i--)
        {
            tmp--;
            num[maxpos] += num[i];
            num[i] = 0;
        }
        int stop = maxpos+(A/2)+tmp;
        if (stop >= N) stop = N-1;
        for (int i = maxpos+1; i<=stop; i++)
        {
            num[maxpos] += num[i];
            num[i] = 0;
        }
    }
    else if (maxpos - (A/2) >= 0 && maxpos + (A/2) >= N)
    {
        int tmp = A/2;
        for (int i = maxpos+1; i<N; i++)
        {
            tmp--;
            num[maxpos] += num[i];
            num[i] = 0;
        }
        int stop = maxpos-(A/2)-tmp;
        if (stop < 0) stop = 0;
        for (int i = maxpos-1; i>=stop; i--)
        {
            num[maxpos] += num[i];
            num[i] = 0;
        }
    }
    long long int sum = 0;
    for (int i = 0; i<N; i++)
    {
        if (i == maxpos) continue;
        sum += num[i];
    }
    cout << num[maxpos] << " " << sum << "\n";
}