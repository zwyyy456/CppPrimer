#include "../chapter7/ex7_26.h"
#include <set>

auto less(const Sales_data lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main()
{

}