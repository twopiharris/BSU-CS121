# Basic OOP in C++


# Examples
<ul>
  <li><a href = "simpleCritter.cpp">simpleCritter.cpp</a></li>
  <li><a href = "critterOneFile.cpp">critterOneFile.cpp</a></li>
  <li><a href = "car.cpp">car.cpp</a></li>
  <li><a href = "car.h">car.h</a></li>
  <li><a href = "critter.cpp">critter.cpp</a></li>
  <li><a href = "critter.h">critter.h</a></li>
  <li><a href = "critter.png">critter.png</a></li>
  <li><a href = "critterProto.cpp">critterProto.cpp</a></li>
  <li><a href = "critterStruct.cpp">critterStruct.cpp</a></li>
  <li><a href = "main.cpp">main.cpp</a></li>
  <li><a href = "makefile">makefile</a></li>
  <li><a href = "makefiles.md">makefiles.md</a></li>
</ul>

# UML of Critter example
```mermaid
classDiagram
 class Critter {
    - string name
    + Critter()
    + Critter(string name)
    + sayHi()
    + setName(string name)
    + string getName()
 }

 class Car {
    - Critter driver
    + Car()
    + setDriver(Critter driver)
    + critter getDriver()
    + string getDriverName()
 }

 Car o-- Critter
 ```
