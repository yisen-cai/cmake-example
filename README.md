# C++/C项目模板

[TOC]

## 初始化

~~~shell
# we use git submodule to manage dependencies.
$ git submodule init

# pull dependency
$ git submodule update

# you can check project directories, it now contains googletest and spdlog
$ tree -L 1
.
├── cmake-build-debug // Build directory.
├── CMakeLists.txt    // cmake define.
├── googletest        
├── README.md
├── spdlog
├── src               // Source file direcotry.
└── tests             // Test file directory.
~~~





## 测试用例

### 创建测试文件

~~~shell
$ touch tests/test_case.cpp

$ vim CMakeLists.txt
add_executable(
        google-test-run

        # 在这里添加下新增的文件
        tests/test_case.cpp)
~~~



### 新增测试case

tests/test_case.cpp:

~~~cpp
// 添加googletest依赖
#include "gtest/gtest.h"

// 添加测试用例，第一个名字是测试用例的分组，第二个名字是测试用例的名称
TEST(TestCaseGroup, equalCase) {
    ASSERT_EQ(1, 2 - 1);
}

TEST(TestCaseGroup, notEqualCase) {
    ASSERT_TRUE(1 != 2);
}
~~~

