# ReadFile

## 功能

* 给我一个路径，我可以把该路径下的文件整理到一个markdown文件中

### 参数

* 一个路径

### 返回值

* 一个集合

## 使用规范

```cpp
int main() {

    ReadFile readFile = ReadFile();
    readFile.setPath("../ex/20210616/234");
    readFile.createFilePath();
    readFile.readFileInfo();
    for (auto info : readFile.getInfo()) {
        std::cout << info << std::endl;
    }
}
```