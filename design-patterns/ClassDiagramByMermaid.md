# create UML by mermaid

Markdown is a good language for write something! If you want to noteing some diagram, you can used mermaid to do diagram.



## I want to do class diagram by mermaid

UML is a good language for class diagram!

## Do you know what relationship between class?

*  Dependence
*  Generalization
*  Association
*  Aggregation
*  Composition
*  Implementation

```mermaid
classDiagram
classA <|-- classB : 泛化
classM <|.. classN : 实现
classC *-- classD : 组合
classE o-- classF : 聚合
classI -- classJ : 关联
classK <.. classL : 依赖
```

### 泛化（Generalization）

```mermaid
classDiagram
class Father {
	-name string
	+ getName()
}
class Son {
	-name string
	+ getname()
}
Father <|-- Son
```

###  实现关系（Realization）

```mermaid
classDiagram
class Log {
	-logInfo string
	+ printLog()
}
class BolgLog {
	+ printLog()
	+ showLog()
}
class GitHubLog {
	+ printLog()
	+ showLog()
}
Log <|.. BolgLog
Log <|.. GitHubLog
```

### 组合关系

* 成员离不开组织

```mermaid
classDiagram
class Person {
	-name string
}
class Hand {
	+doSomeThing()
}
class Foot {
	+run()
}
class Head {
	+think()
}
Person *-- Hand
Person *-- Foot
Person *-- Head

```

### 聚合关系（Aggregation）

* 成员可以单独存在
* 整体与部分的关系

```mermaid
classDiagram
Family o-- Father
Family o-- Mather
Family o-- Son
Family : createFaily(Father father, Mather mather, Son son)
Family : -father Father
Family : -mather Mather
Family : -son Son
Father : -name string
Mather : -name string
Son : -name string
```

### 关联关系（Composition）

* 对象之间的相互引用关系

```mermaid
classDiagram
class Fans {
	-name string
	-startList List<Star>
}
class Star {
	-name string
	-fansList List<Fans> 
}
Fans -- Star
```

### 依赖（Dependency）

```mermaid
classDiagram
class Tool {
	-name string
	+howToUse()
}
class Person {
	-name string
	-useTool()
}
Person ..> Tool

```

