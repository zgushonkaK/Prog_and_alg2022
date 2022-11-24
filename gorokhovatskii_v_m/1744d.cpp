#include<iostream>
#include<vector>
#include<algorithm>

int countTwo(int n)
{
    int count = 0;
    while(n % 2 == 0)
    {
        ++count;
        n = n / 2;
    }
    return count;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> v(n);
        std::vector<int> t(n);
        int count_2 = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> v[i];
            count_2 += countTwo(v[i]);
            t[i] = countTwo(i + 1);
        }
        std::sort(t.begin(),t.end());
        int diff = n - count_2;
        if(diff <= 0)
        {
            std::cout << 0 << std::endl;
            continue;
        }
        int count = 0;
        for (int i = n - 1; i >= 0 && diff > 0; --i)
        {
            ++count;
            diff -= t[i];
        }
        if(diff > 0) std::cout << -1 << std::endl;
        else std::cout << count << std::endl;
    }
    
    return 0;
}