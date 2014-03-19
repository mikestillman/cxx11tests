#include <vector>
#include <iostream>

template <typename T>
void printcollection(const T& coll)
{
    size_t count = 0;
    for (auto i = coll.begin(); i != coll.end(); ++i, ++count)
        {
            std::cout << count << ": " << *i << std::endl;
        }
}
int main(int argc, char *argv[])
{
    std::vector<int> v {1, 2, 3, 7};

    printcollection(v);
}
