[![samp-include](https://img.shields.io/badge/sa--mp-library-2f2f2f.svg?style=for-the-badge)](https://github.com/Ramon-Sd/RTimer)

<img src="https://www.sa-mp.com/images/logo.gif" width="450" alt="SAMP Logo">

> Library for easy timer use

<br>

1. [Installation](#-Installation)

2. [Documentation](#-Documentation)

<br>

## 🚀 Installation

You can install the "RTimer" library in two ways:

- Using sampctl: You can install the library using the sampctl package manager. Simply run the following command in the terminal:
```bash
sampctl package install Ramon-Sd/RTimer
```

- Using Git: You can clone the library's Git repository and manually add it to your project. Run the following command in the terminal:
```bash
git clone https://github.com/Ramon-Sd/RTimer.git
```

Then, include the "RTimer.inc" include file in your code:

```pawn
#include "RTimer.inc"
```

## ☕ Documentation

## **Functions**

- ...

## **Callbacks**

- ...

### **Example**


```pawn

#include "RTimer.inc"

DefTimer:PrintTest() {

    printf("Test");
    return 1;
}

public OnGameModeInit() {

    Timer_Set("PrintTest", 1000, true);
    return 1;
}

public OnGameModeExit() {

    Timer_Kill("PrintTest");
    return 1;
}

main() {

    printf("RTimer -> Test Script : Started!");
    return 0;
}

```

<br><br>

This project is licensed. See the [LICENSE](LICENSE.md) file for more details.



