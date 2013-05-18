// Copyright (c) 2013, The Toft Authors. All rights reserved.
// Author: Ye Shunping <yeshunping@gmail.com>

#include "toft/hash/hash.h"
#include "toft/crypto/hash/md5.h"
#include "thirdparty/re2/util/benchmark.h"
#include "thirdparty/glog/logging.h"

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

extern int nbenchmarks;
extern testing::Benchmark* benchmarks[];

int main(int argc, char** argv) {
    google::ParseCommandLineFlags(&argc, &argv, false);
    for (int i = 0; i < nbenchmarks; i++) {
        testing::Benchmark* b = benchmarks[i];
        for (int j = b->threadlo; j <= b->threadhi; j++)
            for (int k = std::max(b->lo, 1); k <= std::max(b->hi, 1); k <<= 1)
                RunBench(b, j, k);
    }
}
