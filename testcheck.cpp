#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, res;
        std::cin >> n;
        res = 0;

        while (n--)
        {
            int r, g, b;
            std::cin >> r >> g >> b;
            if (r >= (std::max(g, b) + 100))
            {
                res += 1;
            }
        }
        std::cout << res << std::endl;
    }

    return 0;
}