# LRZLoggerManager
按日期将日志保存到本地文件，包含过期清理功能
### 功能
1. 按日期保存
2. 文件过期处理
3. 异步写入文件
4. 使用GCD栅栏函数dispatch_barrier_async保证多线程下有序写入
