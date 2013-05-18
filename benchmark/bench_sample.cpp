// Copyright (c) 2013, The Toft Authors. All rights reserved.
// Author: Ye Shunping <yeshunping@gmail.com>

#include "toft/crypto/hash/md5.h"
#include "toft/hash/hash.h"
#include "thirdparty/glog/logging.h"
#include "thirdparty/re2/util/benchmark.h"

static void Hash(int n) {
    std::string str = "aaaaaaaaaaaaaaaaaa";
    for (int i = 0; i < n; i++) {
        uint64_t hash = toft::Fingerprint(str);
        hash += 0;
    }
}

static void MD5String(int n) {
    std::string str = "aaaaaaaaaaaaaaaaaa";
    for (int i = 0; i < n; i++) {
        std::string md5sum = MD5String(str);
        md5sum.size();
    }
}

BENCHMARK(Hash)->ThreadRange(1, NumCPUs());
BENCHMARK(MD5String)->ThreadRange(1, NumCPUs());
