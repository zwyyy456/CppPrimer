#pragma once

#include "../chapter12/str_blob_ptr.h"

#include <initializer_list>
#include <vector>
#include <string>
#include <memory>
using std::shared_ptr;
using std::vector;
using std::string;

class StrBlobPtr;
class StrBlob {
    friend class StrBlobPtr;

  public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<string> ils);
    auto size() const -> size_type;
    auto empty() const -> bool;

    //添加和删除元素
    void push_back(const string &str);
    void pop_back();

    // 元素访问
    auto front() -> string &;
    auto back() -> string &;

  private:
    shared_ptr<vector<string>> data_;
    // 如果data[i]不合法，抛出一个异常
    void check(size_type i, const string &msg) const;

    auto begin() -> StrBlobPtr;
    auto end() -> StrBlobPtr;
};