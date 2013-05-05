# Copyright 2013. All Rights Reserved.
# Author: yeshunping@gmail.com (Shunping Ye)
#
# Description:
#   TODO(shunpingye): describe this package.

cc_library(name = 'animal',
           srcs = ['animal.cc'],
           deps = [
                   '//toft/base/string:string',
                   '//toft/base:class_registry',
                  ],
         )

cc_library(name = 'dog',
           srcs = ['dog.cc'],
           deps = [
                   '//toft/base/string:string',
                   '//toft/base:class_registry',
                   ':animal',
                  ],
           link_all_symbols=True,
         )

cc_library(name = 'cat',
           srcs = ['cat.cc'],
           deps = [
                   '//toft/base/string:string',
                   '//toft/base:class_registry',
                   ':animal',
                  ],
           link_all_symbols=True,
         )

cc_binary(name = 'registerer_sample',
           srcs = ['registerer_sample.cc', ],
           deps = [
                   '//toft/base/string:string',
                   '//toft/base:class_registry',
                   ':dog',
                   ':cat',
                  ],
           )
