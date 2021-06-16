# CreateMarkdown

## 函数功能

* 给我一个路径
* 给我一个内容

> 我就会在指令路径下创建一个markdown.md的文件
> 
> 并把内容写进去


## 使用实例

```cpp
int main() {
    std::vector<std::string> info = {"abcdef", "123456"};
    CreateMarkdown createMarkdown = CreateMarkdown("ex", info);
    return 0;
}
```