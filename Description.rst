=====================================
Project Breakdown
=====================================
--------------------------------------------------------------
Components: *Vellman RGB LED module, Generic HC-SRO4 Sonar Distance Sensor*
--------------------------------------------------------------

**Velleman RGB LED**

Velleman RGB LED has four pins connnected to GND(ground), R(red), G(green), and B(blue). These three colors are combined into one LED and a broad array of colors can be represented by adding these colors together in various ways.

.. image:: https://github.com/MiguelVera08/Arduino-Sonar-Project/blob/master/image/RGB.png

**Generic HC-SR04 Sonar Distance Sensor**

Generic HC-SR04 Sonar Distance Sensor has four pins connected to Vcc, Trigger, Echo, and Ground. Vcc pin powers up the sensor, Trigger is an input pin, Echo is an output pin, and Ground pin is connected to the ground of the system. This sensor includes ultrasonic transmitters, receiver, and control circuit. The two round cylinders in the front are the ultrasonic transmitter and receiver. The sensor uses  distance formula (Distance = Speed x Time) to find the distance once activated, the transmitter emits an ultrasonic wave once it encounters on object on its path it will reflect back to the receiver.