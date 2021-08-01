# 313239_Emb_C
## CI and Code Qaulity
|Build|CppCheck|Codacy|
|:--:|:--:|:--:|
[![Compile-Linux](https://github.com/sumedh-rao/313239_Emb_C/actions/workflows/complie.yml/badge.svg)](https://github.com/sumedh-rao/313239_Emb_C/actions/workflows/complie.yml)|[![Cppcheck](https://github.com/sumedh-rao/313239_Emb_C/actions/workflows/cpp.yml/badge.svg)](https://github.com/sumedh-rao/313239_Emb_C/actions/workflows/cpp.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/a2aa446cd7e2406a856f90697ecaee5e)](https://www.codacy.com/gh/sumedh-rao/313239_Emb_C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=sumedh-rao/313239_Emb_C&amp;utm_campaign=Badge_Grade)



Embedded Training LTTS
# Embedded C Case Study
Seat Heating System
-----------------
# Problem Statement: 
![activity_list](https://github.com/sumedh-rao/313239_Emb_C/blob/main/Simulation/Activity_list.png)
1. Button Sensor will check the passenger is sited or not
2. Temperature sensor works as :

ADC Value (Temp Sensor)| Output PWM
----------|----------
0-200 | 20% - 20 °C
210-500 | 40% - 25 °C
510-700 | 70% - 29 °C
710-1024 | 95% - 33 °C

3. Display CDD- CRO will give the temperature value by 
showing PWM.
4. Led Actuator shows the driver is sited 
5. Heater will check the heater button is ON.
6. Temp to CAN shows the value of temperature gone 
over protocol
