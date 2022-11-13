# TransistorTester-FW-Tracker

This tracks the firmware of the transistor tester, i.e., changes made by the implementor(s). The original licenses of the respective authors apply.

Currently we track the [firmware developed by Markus Reschke](https://github.com/madires/Transistortester-Warehouse), it can be found in the m-firmware directory. Basically for each version in the author's repository, I download the tarball, unpack it and commit it to this repository. So, we can see nicely the changes that have been made between versions.

There is also a branch called "TheHWCave", which contains the config changes done [here](https://github.com/TheHWcave/TransistorTester), forward ported to version 1.47m. Finally, there is also "my" branch" called "wifwucite"; it is tracking my own configuration changes. My device is the device discussed in [this repository](https://github.com/blurpy/transistor-tester).

## Required packages

```
sudo apt install gcc-avr avr-libc
```

## My changes

* Adjusted the actual voltage of 2.5V reference voltage source.
* (Re)enabled auto-hold after probing a component (can be deactivated by a long press on start-up).
* POWER_OFF_TIMEOUT set to 60s

## Changes I might want to try

* UI_ZENER_DIODE
* UI_MAINMENU_AUTOEXIT
* Fancy PWM?
* Continuity check?
* Event counter (+ trigger)
* Opto coupler
