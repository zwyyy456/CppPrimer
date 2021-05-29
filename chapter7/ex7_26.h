#include <iostream>
#include <string>
using std::istream, std::ostream, std::string;
class Sales_data
{
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data() = default;//声明默认构造函数
    Sales_data(const std::string &s):bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n * p){}
    Sales_data(std::istream &is) {read(is, *this);}
    
    std::string isbn() const 
    {
        return bookNo;
    }
    Sales_data& combine(const Sales_data);

private:
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

//delcaration for nonmember parts of the Sales_data interface
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);