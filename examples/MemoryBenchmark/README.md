# Memory Benchmark

The `MemoryBenchmark.ino` was compiled with each `FEATURE_*` and the flash
memory and static RAM sizes were recorded. The `FEATURE_BASELINE` selection is
the baseline, and its memory usage numbers are subtracted from the subsequent
`FEATURE_*` memory usage.

**Version**: AceCommon v1.4.3

**DO NOT EDIT**: This file was auto-generated using `make README.md`.

## How to Regenerate

To regenerate this README.md:

```
$ make clean_benchmarks
$ make benchmarks
$ make README.md
```

The `make benchmarks` target uses `collect.sh` script which calls `auniter.sh`
(https://github.com/bxparks/AUniter) to invoke the Arduino IDE programmatically.
It produces a `*.txt` file with the flash and ram usage information (e.g.
`nano.txt`).

The `make README.md` command calls the `generated_readme.py` Python script which
generates this `README.md` file. The ASCII tables below are generated by the
`generate_table.awk` script, which takes each `*.txt` file and converts it to an
ASCII table.

## Library Size Changes

## Arduino Nano

* 16MHz ATmega328P
* Arduino IDE 1.8.13
* Arduino AVR Boards 1.8.3

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                |    734/   22 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          |   1344/   32 |   610/   10 |
| printPad2()                            |    770/   22 |    36/    0 |
| printPad5()                            |    798/   22 |    64/    0 |
| printReplaceCharTo(char*)              |    758/   26 |    24/    4 |
| printReplaceCharTo(F())                |    760/   22 |    26/    0 |
| printReplaceStringTo(char*)            |    778/   28 |    44/    6 |
| printReplaceStringTo(F())              |    780/   24 |    46/    2 |
| hashDjb2(char*)                        |    792/   28 |    58/    6 |
| hashDjb2(F())                          |    794/   22 |    60/    0 |
+---------------------------------------------------------------------+

```

## Sparkfun Pro Micro

* 16 MHz ATmega32U4
* Arduino IDE 1.8.13
* SparkFun AVR Boards 1.1.13

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                |   3728/  162 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          |   4338/  172 |   610/   10 |
| printPad2()                            |   3764/  162 |    36/    0 |
| printPad5()                            |   3792/  162 |    64/    0 |
| printReplaceCharTo(char*)              |   3752/  166 |    24/    4 |
| printReplaceCharTo(F())                |   3754/  162 |    26/    0 |
| printReplaceStringTo(char*)            |   3772/  168 |    44/    6 |
| printReplaceStringTo(F())              |   3774/  164 |    46/    2 |
| hashDjb2(char*)                        |   3784/  166 |    56/    4 |
| hashDjb2(F())                          |   3788/  162 |    60/    0 |
+---------------------------------------------------------------------+

```

## SAMD21 M0 Mini

* 48 MHz ARM Cortex-M0+
* Arduino IDE 1.8.13
* Sparkfun SAMD Boards 1.8.1

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                |  10224/    0 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          |  10416/    0 |   192/    0 |
| printPad2()                            |  10416/    0 |   192/    0 |
| printPad5()                            |  10440/    0 |   216/    0 |
| printReplaceCharTo(char*)              |  10256/    0 |    32/    0 |
| printReplaceCharTo(F())                |  10256/    0 |    32/    0 |
| printReplaceStringTo(char*)            |  10296/    0 |    72/    0 |
| printReplaceStringTo(F())              |  10296/    0 |    72/    0 |
| hashDjb2(char*)                        |  10264/    0 |    40/    0 |
| hashDjb2(F())                          |  10264/    0 |    40/    0 |
+---------------------------------------------------------------------+

```

(SAMD compiler does not produce RAM usage numbers.)

## STM32 Blue Pill

* STM32F103C8, 72 MHz ARM Cortex-M3
* Arduino IDE 1.8.13
* STM32duino 1.9.0

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                |  19260/ 3788 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          |  19280/ 3788 |    20/    0 |
| printPad2()                            |  19456/ 3788 |   196/    0 |
| printPad5()                            |  19480/ 3788 |   220/    0 |
| printReplaceCharTo(char*)              |  19284/ 3788 |    24/    0 |
| printReplaceCharTo(F())                |  19284/ 3788 |    24/    0 |
| printReplaceStringTo(char*)            |  19356/ 3788 |    96/    0 |
| printReplaceStringTo(F())              |  19356/ 3788 |    96/    0 |
| hashDjb2(char*)                        |  19292/ 3788 |    32/    0 |
| hashDjb2(F())                          |  19292/ 3788 |    32/    0 |
+---------------------------------------------------------------------+

```

An entry of `-1` indicates that the memory usage exceeded the maximum of the
microcontroller and the compiler did not generate the desired information.

## ESP8266

* NodeMCU 1.0, 80MHz ESP8266
* Arduino IDE 1.8.13
* ESP8266 Boards 2.7.4

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                | 256908/26776 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          | 256956/26776 |    48/    0 |
| printPad2()                            | 257244/26776 |   336/    0 |
| printPad5()                            | 257260/26776 |   352/    0 |
| printReplaceCharTo(char*)              | 256944/26772 |    36/   -4 |
| printReplaceCharTo(F())                | 256960/26776 |    52/    0 |
| printReplaceStringTo(char*)            | 257028/26776 |   120/    0 |
| printReplaceStringTo(F())              | 257044/26772 |   136/   -4 |
| hashDjb2(char*)                        | 256948/26776 |    40/    0 |
| hashDjb2(F())                          | 256964/26776 |    56/    0 |
+---------------------------------------------------------------------+

```

## ESP32

* ESP32-01 Dev Board, 240 MHz Tensilica LX6
* Arduino IDE 1.8.13
* ESP32 Boards 1.0.4

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                | 206887/14580 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          | 206907/14580 |    20/    0 |
| printPad2()                            | 207007/14580 |   120/    0 |
| printPad5()                            | 207027/14580 |   140/    0 |
| printReplaceCharTo(char*)              | 206923/14580 |    36/    0 |
| printReplaceCharTo(F())                | 206923/14580 |    36/    0 |
| printReplaceStringTo(char*)            | 206983/14580 |    96/    0 |
| printReplaceStringTo(F())              | 206983/14580 |    96/    0 |
| hashDjb2(char*)                        | 206931/14580 |    44/    0 |
| hashDjb2(F())                          | 206931/14580 |    44/    0 |
+---------------------------------------------------------------------+

```

RAM usage remains constant as more objects are created, which indicates that an
initial pool of a certain minimum size is created regardless of the actual RAM
usage by objects.

## Teensy 3.2

* 96 MHz ARM Cortex-M4
* Arduino IDE 1.8.13
* Teensyduino 1.53

```
+---------------------------------------------------------------------+
| Functionality                          |  flash/  ram |       delta |
|----------------------------------------+--------------+-------------|
| Baseline (PrintStr<16>)                |  10796/ 4148 |     0/    0 |
|----------------------------------------+--------------+-------------|
| PrintStrN(16)                          |  10840/ 4148 |    44/    0 |
| printPad2()                            |  11164/ 4148 |   368/    0 |
| printPad5()                            |  11176/ 4148 |   380/    0 |
| printReplaceCharTo(char*)              |  11056/ 4148 |   260/    0 |
| printReplaceCharTo(F())                |  11056/ 4148 |   260/    0 |
| printReplaceStringTo(char*)            |  11072/ 4148 |   276/    0 |
| printReplaceStringTo(F())              |  11072/ 4148 |   276/    0 |
| hashDjb2(char*)                        |  10832/ 4148 |    36/    0 |
| hashDjb2(F())                          |  10832/ 4148 |    36/    0 |
+---------------------------------------------------------------------+

```

