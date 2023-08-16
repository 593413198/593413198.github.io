#include <iostream>

template <int N, int... Ns>
auto sum()
{
    if constexpr (0 == sizeof...(Ns))
        return N;
    else
        return N + sum<Ns...>();
}

int main()
{
    std::cout << sum<1, 2, 3>();
    return 1;
}