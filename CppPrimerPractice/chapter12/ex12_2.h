#include <memory>
#include <vector>
#include <string>
#include <exception>
#include <initializer_list>

using std::vector;
using std::string;
using std::out_of_range;

class StrBlob
{
public:
    using size_type = vector<string>::size_type;
    StrBlob() : data(std::make_shared<vector<string>>()) {};
    StrBlob(std::initializer_list<string> i1) : data(std::make_shared<vector<string>>(i1)){};
    size_type size() const {
        return data->size();
    }
    bool empty() const {
        return data->empty();
    }
    void push_back(const string &t) {
        data->push_back(t);
    }
    void pop_back();
    string &front();
    const string &front() const;
    string &back();
    const string &back() const;
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const string &msg) const;
};

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

const string& StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

const string& StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

