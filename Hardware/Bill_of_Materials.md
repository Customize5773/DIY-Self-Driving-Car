# Bill of Materials: DIY LiDAR Self-Driving Car (Upgraded Version)

**Project Base**: [Instructables LiDAR Self-Driving Car](https://www.instructables.com/Can-You-Make-a-LiDAR-Self-Driving-Car/)  
**Key Upgrades**: TF-Luna LiDAR, Hybrid Sensor Fusion, ESP32 Processing  

## Core Components
| Component | Specification | Qty | Price (USD) | Source |
|-----------|---------------|-----|-------------|--------|
| **Main Controller** | ESP32 Dev Board (Dual-Core) | 1 | $8 | [AliExpress](https://www.aliexpress.com/item/1005005233434681.html) |
| **LiDAR Sensor** | TF-Luna (ToF, 8m range) | 1 | $38 | [SparkFun](https://www.sparkfun.com/products/17786) |
| **Ultrasonic Sensors** | HC-SR04 (2-400cm) | 3 | $3 | [Adafruit](https://www.adafruit.com/product/3942) |
| **Motor Driver** | L298N Dual H-Bridge | 1 | $5 | [Amazon](https://www.amazon.com/HiLetgo-L298N-Driver-Stepper-Controller/dp/B014KMHSW6) |
| **DC Motors** | TT Gear Motor (6V 200RPM) | 2 | $8 | [DFRobot](https://www.dfrobot.com/product-244.html) |
| **Wheels** | 65mm Rubber Wheels | 2 | $4 | [Pololu](https://www.pololu.com/product/1080) |
| **Chassis** | Acrylic Robot Car Platform | 1 | $12 | [Ebay](https://www.ebay.com/itm/224879167364) |
| **Battery** | 18650 3.7V 3400mAh (with holder) | 2 | $14 | [18650batterystore](https://18650batterystore.com/products/samsung-35e) |
| **Voltage Regulator** | LM2596 DC-DC Buck Converter | 1 | $2 | [AliExpress](https://www.aliexpress.com/item/1005002806263470.html) |

## Electronic Components
| Component | Specification | Qty | Price | Source |
|-----------|---------------|-----|-------|--------|
| Servo Motor | SG90 Micro Servo | 1 | $3 | [Adafruit](https://www.adafruit.com/product/169) |
| Jumper Wires | M-F, F-F, M-M (20cm) | 40 | $5 | [SparkFun](https://www.sparkfun.com/products/124) |
| Breadboard | 400-point | 1 | $5 | [Amazon](https://www.amazon.com/Breadboard-Solderless-Distribution-Connecting-Terminals/dp/B082KBF7MM) |
| Voltage Monitor | LM358 Op-Amp | 1 | $0.50 | [LCSC](https://www.lcsc.com/product-detail/Op-Amps_LM358_C83491.html) |
| Capacitors | 100µF 16V Electrolytic | 5 | $1 | [DigiKey](https://www.digikey.com/en/products/detail/rubycon/16ZL100MEFC5X11/3569652) |
| Resistors | 220Ω 1/4W | 10 | $0.50 | [Mouser](https://www.mouser.com/ProductDetail/YAGEO/CFR-25JB-52-220R?qs=sGAEpiMZZMshyDBzk1%2FWi8kAxJvQ%2Fq0k) |

## 3D Printed Parts
| Component | Material | Print Time | Source |
|-----------|----------|------------|--------|
| TF-Luna Mount | PETG | 45 min | [Thingiverse](https://www.thingiverse.com/thing:4827043) |
| Ultrasonic Array Bracket | PLA+ | 1.5 hr | [Printables](https://www.printables.com/model/178124-hc-sr04-mount-for-robotic-cars) |
| ESP32 Case | ABS | 30 min | [Thingiverse](https://www.thingiverse.com/thing:4742710) |
| Battery Holder | PETG | 1 hr | [Thingiverse](https://www.thingiverse.com/thing:2882504) |

## Optional Upgrades
| Component | Specification | Price | Benefit | Source |
|-----------|---------------|-------|---------|--------|
| **IMU** | MPU-6050 6-Axis | $4 | Improved dead reckoning | [Adafruit](https://www.adafruit.com/product/3886) |
| **OLED Display** | 0.96" I²C 128x64 | $6 | Real-time diagnostics | [SparkFun](https://www.sparkfun.com/products/17153) |
| **NeoPixel Ring** | 12x WS2812 RGB | $8 | Status indication | [Adafruit](https://www.adafruit.com/product/1643) |
| **Camera Module** | OV2640 2MP | $10 | Future sensor fusion | [AliExpress](https://www.aliexpress.com/item/1005005351737571.html) |

## Tools Required
| Tool | Purpose | Recommended |
|------|---------|-------------|
| Soldering Iron | Electronics assembly | TS100 (Portable) |
| Multimeter | Circuit debugging | Fluke 101 (Basic) |
| 3D Printer | Custom parts | Creality Ender 3 |
| Wire Strippers | Cable preparation | Irwin Vise-Grip |
| Hot Glue Gun | Component mounting | Ryobi Cordless |

## Total Estimated Cost
- **Base System**: $85
- **With All Upgrades**: $125
- **Tools**: $150 (one-time investment)

> **Procurement Tips**:  
> 1. Buy LiDAR from official distributors (counterfeits common on marketplaces)  
> 2. Use protected 18650 batteries with built-in BMS  
> 3. Order 10% extra resistors/capacitors for prototyping  
> 4. Consider motor encoder upgrade for precise odometry  

## Changelog from Original Project
| Original Component | Upgraded Component | Benefit |
|--------------------|--------------------|---------|
| RPLidar A1 | TF-Luna | 30% longer range, 50% lower power |
| Raspberry Pi | ESP32 | 60% cost reduction, real-time performance |
| Single Sensor | Hybrid Fusion | Redundant obstacle detection |
| Basic Chassis | Custom 3D Printed | Weight reduction, sensor optimization |
