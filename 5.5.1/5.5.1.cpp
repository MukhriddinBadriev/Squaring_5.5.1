#include <iostream>

#include <vector>

template <class T>
T sqr(T a) {
    return a * a;
}

template <typename T>
 void sqr( std::vector<T>& vi) {
     for (int i = 0; i < vi.size(); i++) {
         vi[i] = vi[i] * vi[i];
     }
}

int main()
{
    int a = 0;
    std::vector<int> v{ -1,4,8 };

    std::cout << "[IN]: ";
    std::cin >> a;
    std::cout << "[OUT]: "<<sqr(a)<<"\n";

    std::cout << "[IN]: ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }std::cout << '\n';
   
    sqr(v);
    std::cout << "[OUT]: ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
 
    return 0;
}