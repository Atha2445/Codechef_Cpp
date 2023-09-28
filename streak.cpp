#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> om(n), addy(n);
        for (int i = 0; i < n; i++)
        {
            cin >> om[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> addy[i];
        }
        int om_streak = 0, addy_streak = 0;
        int om_max_streak = 0, addy_max_streak = 0;
        for (int i = 0; i < n; i++)
        {
            if (om[i] > 0)
            {
                om_streak++;
            }
            else
            {
                om_streak = 0;
            }
            if (addy[i] > 0)
            {
                addy_streak++;
            }
            else
            {
                addy_streak = 0;
            }
            om_max_streak = max(om_max_streak, om_streak);
            addy_max_streak = max(addy_max_streak, addy_streak);
        }
        if (om_max_streak > addy_max_streak)
        {
            cout << "Om" << endl;
        }
        else if (addy_max_streak > om_max_streak)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
