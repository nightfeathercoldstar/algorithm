在 C++ 中，`resize` 方法主要用于以下几种数据容器：

1. **`std::vector`**：可以使用 `resize` 来调整向量的大小，增加或减少元素数量。
    
    cpp
    
    复制
    
    `std::vector<int> vec; vec.resize(10); // 调整大小为10`
    
2. **`std::deque`**：双端队列也支持 `resize` 方法，用于调整其大小。
    
    cpp
    
    复制
    
    `std::deque<int> deq; deq.resize(5); // 调整大小为5`
    
3. **`std::list`**：虽然 `std::list` 不直接支持 `resize` 方法，但可以通过其他方式（如插入和删除）来调整其大小。
    
4. **`std::string`**：字符串类可以使用 `resize` 方法来调整字符串的大小。
    
    cpp
    
    复制
    
    `std::string str; str.resize(10); // 调整大小为10`
    

### 总结

- `resize` 方法主要用于 `std::vector`、`std::deque` 和 `std::string`，可以方便地调整这些容器的大小。
- 对于 `std::list`，没有直接的 `resize` 方法，但可以通过插入和删除操作来实现类似的功能。