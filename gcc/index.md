## GCC (GNU Compiler Collection，GNU编译器套件)

gcc 选项含义

-v  查看gcc编译器的版本，显示gcc执行时的详细过程；
-o  指定输出文件名为file，这个名称不能跟源文件名同名；
-E  只预处理，不会编译、汇编、链接；
-S  只编译，不会汇编、链接；
-c  编译和汇编，不会链接；
-g  产生符号调试工具（GNU的gdb）所必要的符号信息，想要对源代码进行调试，就必须加入这个选项


gdb 常用命令

(1) gdb 可执行文件 : 表示对某个文件进行调试
(2) b 函数名/行数  :  在某个函数名或行数前设置断点
(3) run/r          : 表示开始运行，如果是正在调试的程序的话，表示再次进行调试
(4) n/next         : 表示执行下一行语句
(5) l/list         : 列出源码默认10行（当前位置的上下共10行）
    list 行号      : 列出行号上下共10行的源码
    list 函数名    : 列出函数名上下共10行的源码
(6) s/step         : 表示单步执行，进入函数
(7) p /x 变量名    : 按16进制输出变量的值
      /d           : 按10进制
      /o           : 按八进制
(8) set var 变量名=值 : 设置变量的值
(9) bt(backtrace)  : 查看各级函数调用及参数,简写bt
(10)q/quit         : 退出
(11)finish         : 连续运行到当前函数返回为止，然后停下来等待命令
(12)continue/c     : 跳转到下个断点，或者跳转到观察点
(13)ptype 变量名   : 可以查看变量的类型，简写为pt
(14)watch
    作用：一般用来观察某个变量/内存地址的状态(也可以是表达式），
          如可以监控该变量/内存值是否被程序读/写情况。
    有三种方法：
    1.watch expr（指定变量/内存地址/表达式）
    一旦expr的值有变化时，将停住程序。
    2.rwatch expr
    当expr被读时，停住程序。
    3.awatch expr
    当expr被读或被写时，停住程序。
    watch使用步骤：
        1. 使用break在要观察的变量所在处设置断点；
        2. 使用run执行，直到断点；
        3. 使用watch设置观察点；
        4. 使用continue观察设置的观察点是否有变化。
(15)start            : 开始执行程序，停在main函数第一行语句前面等待命令
(16)info watchpoints : 列出所有观察点
    info breakpoints : 查看当前设置的所有断点
(17)d/delete [breakpoinsts num] [rang...]         
    d/delete         : 删除所有断点
    d/delete num     : 删除breakpoints为num的断点
    d/delete num1-num2 : 删除breakpoints为num1-num2的断点
(18)enable num       : 启用num号断点
(19)disable num      : 关闭num号断点
(20)u/until          : 结束当前循环