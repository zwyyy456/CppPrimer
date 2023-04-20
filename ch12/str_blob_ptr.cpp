#include "str_blob_ptr.h"
#include <cstddef>
#include <memory>
#include <stdexcept>

auto StrBlobPtr::check(std::size_t i, const std::string &msg) const -> std::shared_ptr<std::vector<std::string>> {
    auto ret = wptr_.lock();
    if (!ret) {
        throw std::runtime_error("unbound StrBlobPtr");
    }
    if (i >= ret->size()) {
        throw std::out_of_range(msg);
    }
    return ret;
}

auto StrBlobPtr::deref() const -> std::string & {
    auto p = check(curr_, "dereference past end");
    return (*p)[curr_];
}

auto StrBlobPtr::incr() -> StrBlobPtr & {
    // 如果已经指向容器尾后位置，则不能再递增了
    check(curr_, "increment past end of StrBlobPtr");
    ++curr_;
    return *this;
}