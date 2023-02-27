[![samp-include](https://img.shields.io/badge/SAMP_|-INCLUDE-5C2D91.svg?style=for-the-badge)](https://github.com/Ramon-Sd/RTimer)

<br><br>
<p align="left">
  <a href="https://www.sa-mp.com/">
    <img src="https://www.sa-mp.com/images/logo.gif" width="500" alt="SAMP Logo">
  </a>
</p>

<br><br>

# ―――――――――――――――

<br><br>

```bash
sampctl package install Ramon-Sd/RTimer
```

```bash
git clone https://github.com/Ramon-Sd/RTimer.git
```

# ―――――――――――――――
<br>

```pawn
// Natives :

native Timer_Set(const funcname[], interval, repeating);

native Timer_SetEx(const funcname[], interval, repeating, const format[], {Float,_}:...);

native Timer_Get(const funcname[]);

native Timer_Kill(const funcname[]);

```

```pawn
// Example :

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
