# Tabletop robot
My tabletop robot essentially wanders around a table and doesn't fall off. When the sensors find the edge of the table, it knows that it is about to fall off, and the robot turns around. The machine uses an Arduino, a motor driver, DC motors, IR sensors, and an ultrasonic sensor.

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Shreya | Monta Vista | Computer Science | Incoming Sophomore

![Headstone Image](https://lh3.googleusercontent.com/_wWdnHvol5ETFKiQbdJPCDsDfXOfiveAUiZGbBaGC9iLpkorbRgVWkZvyCZR8F3jAUEuPSd13fcHh1Mx6E75g6wNpzsNVQFMQ2YCfo8y2xDeg4WmEwKrF10ZB5E0GZfaA-bq7INnBZeiNxPVl_i2faGJdC2g_lBIMT9ts4raECEKwktBAaaTOYaO6Jnd0bl3Jo1KAzACCfl_DepG2hLvmRifpvR0ZG1oD1wcdT1HnRzzxJy37j-YBJfEWKnDCj-EaUCLutIjVjqrYFhdGnE82fV6OMwtisXrWYH2TtNZcnAlYt6lDoAiduJo21QFpTBMgDV8YCpNnSqX8Djl_05fqcA8rM_SrcN3Qrs2oN0eHHhgtCssWtg6ILn2KUIkZo320Tw34bEQ_KHM4SH8RrP1stqPvwEumuNG9vOrdNjcdUNNdu_d-ieT7Vsu2w0LpvyCVBTbXkqM1RlweC1HcsUvi2yTXOCQYUaO_7F9fVOaeDHQUSZRbknNPVb-M5QcUEPxO92l4ZuVvFoItINNKQGLseE4Z-S-3AgtsJtNafqp7L1R8iBo5qC9Ggo6XBEJZR7A2mv4hvW1qLgnwpErAXG7PXwV1fAgl6fm2_RFjxzeIi1IQiY4sm8cLYrJSoN0bzvf6NMP7ZcFACzDGo-v6NqsoXpnGloyOxbTniEvfHGJwINJ8hkdwNK9mQzKhjITyORQAQsuDWbo6dEguWYb_KxEk_mP4UpmDg4y9eJl4m_seMXrJDwHSq4ThWuLgXMf0fZ6RBG95TT6AqJDXWnmnDSzs64Tb_fR5bYACnMcmyHsHVgH4RLmnUPXQwFjJYUeczqA0cE=w510-h679-no?authuser=0)
  
# Final Milestone
My final milestone was adding the ultrasonic sensor to my tabletop robot. The ultrasonic sensor tells the distance between it and an object in its path, and it works by emitting a sound and seeing how long it takes to bounce back. I hotglued the sensor to the front of the robot. I had to update my code so that when the sensor detects an object within 15 centimeters of the robot, it turns around and moves in a different direction. It was hard to get it to work with the IR sensors because a lot of timers were being used, so I had to remove some things from my program to make it work properly.

[![Shreya Milestone 3](https://res.cloudinary.com/marcomontalbano/image/upload/v1658164637/video_to_markdown/images/youtube--LsFNjhlkAtU-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=LsFNjhlkAtU "Shreya Milestone 3")

# Second Milestone
My second milestone was adding the three sensors to the front and the back of the car, and using them to tell whether the tabletop robot is at the edge of the table. I attached the sensors to plastic extensions of the ends of the car, so they leave the tabletop before the rest of the car. When that happens they tell the car to turn around and go some other direction. I did this by using the Arduino to read the data the sensors were getting. If the sensors were off the table, it would return a 1, and if they were still on the table, it would return a 0. Then I used a simple if statement to tell the car when to turn around.

[![Shreya Milestone 2](https://res.cloudinary.com/marcomontalbano/image/upload/v1658164830/video_to_markdown/images/youtube--wWTLci7vY1M-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=wWTLci7vY1M "Shreya Milestone 2")

# First Milestone
My first milestone was building the main structure of the car and making it move. I added the wheels and the motors to the bottom of the baseplate to allow the robot to drive around. I added the L298N Motor Driver on top of the baseplate, and it is used to easily control the direction and speed of the 2 DC motors. The Motor Driver connects to the battery and the motors with wires, and it also connects to the Arduino. With the Arduino IDE, I programmed my tabletop robot to move back and forth by making the wheels move in the same direction. To make it turn, I had to make the two wheels roll in different directions.

[![Shreya Milestone 1](https://res.cloudinary.com/marcomontalbano/image/upload/v1658164385/video_to_markdown/images/youtube--XTJlrRvT3sY-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=XTJlrRvT3sY "Shreya Milestone 1")

# Starter Project
My starter project was the TV-B-Gone. It uses infrared lights to send a signal to the tv, which can turn it off. Some other components used are a ceramic resonator, a microcontroller, transistors, and a button. The button is for the user to press,  and when switched on, it turns the lights on and off by emitting IR codes. The ceramic resonator acts almost as a metronome  for the microcontoller. It tells the microcontroller how long a microsecond is, and the microcontroller uses that information to figure out when to blink the IR LEDs. The transistors amplify the power of the microcontroller and control the currents passed through the LED. One thing I enjoyed while doing this project was seeing it all come together and work in the end. One thing I struggled with was soldering and some other aspects of the assembly process, but after doing it a few times, I got the hang of it.

[![Shreya Starter Project](https://res.cloudinary.com/marcomontalbano/image/upload/v1657729004/video_to_markdown/images/youtube--De6qREumefA-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=De6qREumefA "Shreya Starter Project")

This is my circuit diagram for the tabletop robot:
<img width="767" alt="Screen Shot 2022-07-22 at 9 35 00 AM" src="https://user-images.githubusercontent.com/108836256/180484504-81937d7e-d385-4b6e-ae9a-827dbe236f12.png">

This is my code for the tabletop robot:
https://github.com/BlueStamp-Engineering-2022/Shreya_BSE_Project/blob/gh-pages/sketch_jul12b.ino 
