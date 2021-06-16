# SelectDir

## 作用

* 找到所有的文件上级目录集合
* 该文件目录集合下为内容文件

##  使用方式

```cpp
int main() {
    SelectDir selectDir = SelectDir();
    selectDir.selectDir();
    for (auto item : selectDir.getPathSet()) {
        std::cout << item << std::endl;
    }
    return 0;
}
```

### 效果

```bash
../ex/20210616/234
../ex/20210614/256
```