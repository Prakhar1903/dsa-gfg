#include <iostream>
using namespace std;
class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int fact = 1;
        for (int i = 1; i <= N; i++)
        {
            fact = fact * i;
        }
        int count = 0;
        while (fact % 10 == 0)
        {
            count = count + 1;
            fact = fact / 10;
        }
        return count;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution obj;
        int ans = obj.trailingZeroes(N);
        cout << ans << endl;
    }
    return 0;
}