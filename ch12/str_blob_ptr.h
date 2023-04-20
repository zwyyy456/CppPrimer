#pragma once

#include "../chapter10/str_blob.h"

#include <memory>
#include <vector>
#include <string>

class StrBlob;
class StrBlobPtr {
  public:
    StrBlobPtr() :
        curr_(0) {
    }
    StrBlobPtr(StrBlob &a, size_t sz = 0) :
        wptr_(a.data_), curr_(sz){};

    auto deref() const -> std::string &;
    auto incr() -> StrBlobPtr &;

  private:
    // 若检查成功，check返回一个指向vector的shared_ptr
    auto check(std::size_t, const std::string &) const -> std::shared_ptr<std::vector<std::string>>;

    // 保存一个weak_ptr，意味着底层vector可能被销毁
    std::weak_ptr<std::vector<std::string>> wptr_;
    std::size_t curr_; // 在数组中的当前位置
};