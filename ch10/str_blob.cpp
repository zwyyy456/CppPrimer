#include "str_blob.h"
#include <initializer_list>
#include <memory>
#include <stdexcept>

StrBlob::StrBlob() :
    data_(std::make_shared<vector<string>>()){};
StrBlob::StrBlob(std::initializer_list<string> ils) :
    data_(std::make_shared<vector<string>>(ils)){};

void StrBlob::push_back(const string &str) {
    data_->push_back(str);
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data_->pop_back();
}

auto StrBlob::size() const -> size_type {
    return data_->size();
}

auto StrBlob::empty() const -> bool {
    return data_->empty();
}

auto StrBlob::front() -> string & {
    // 如果vector为空，抛出异常
    check(0, "front on empty StrBlob");
    return data_->front();
}
auto StrBlob::back() -> string & {
    // vector为空则抛出异常
    check(0, "back on empty StrBlob");
    return data_->back();
}

void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data_->size()) {
        throw std::out_of_range(msg);
    }
}

auto StrBlob::begin() -> StrBlobPtr {
    return StrBlobPtr(*this);
}
auto StrBlob::end() -> StrBlobPtr {
    auto ret = StrBlobPtr(*this, data_->size());
    return ret;
}