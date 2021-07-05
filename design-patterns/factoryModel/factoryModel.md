# 工厂模式

```mermaid
classDesign
class Log {
    - logInfo: string
    + getLog(): string
    + setLogInfo(string loginfo)
}
class RunLog {
    - logInfo: string
    + getLog(): string
    + setLogInfo(string loginfo)
}
class PrintLog {
    - logInfo: string
    + getLog(): string
    + setLogInfo(string loginfo)
}
Log <|-- RunLog
Log <|-- PrintLog
```

## About

> 日志工厂
> 可以生产运行日志和打印日志~