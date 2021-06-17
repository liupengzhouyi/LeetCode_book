# CreateFile

## 功能
* 创建文件

## 使用方法

```cpp
int main() {
    std::cout << "请输入题号" << std::endl;
    std::string num;
    std::cin >> num;
    std::string name = num;
    CreateFile createFile = CreateFile();
    createFile.setDirName(name);
    createFile.createThreeFile();
    return 0;
}
```

* 即可在当前目录下:
  * ex/当前日期/题号/
    * 创建三个文件！