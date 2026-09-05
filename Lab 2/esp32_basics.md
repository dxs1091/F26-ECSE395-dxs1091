# Lab 2: ESP32 Basics
### *ECSE 395 — Junior Engineering Design Seminar*

**Name:** Daniel Soriano Ponce
**Date:** September 4, 2026

---

## Purpose

This assignment marks our first time working with ESP32s in this class. The task is to make a blinking LED and define a text output to the Serial Monitor. To do this, I will be uploading the code on Visual Studio Code with the PlatformIO IDE extension.

---

## Steps I Took to Complete This Lab
### Preliminary
1. Since, to my knowledge, I don't own a data transfer-capable USB-C cable, I asked my team if they had an extra and Mi was kind enough to lend me one.

### At Glennan 312
2. I downloaded the PlatformIO IDE extension.
3. I opened PlatformIO, created a new project, and filled in the fields following the lab's instructions.
4. Navigating to the `src` folder, I opened `main.cpp`, which is the main file we were to edit.
5. Using `Skeleton Code.md` from the cloned repository, I set the baud rate to 115200 inside `Serial.begin()` and uncommented the line to enable serial monitor communication.
6. In `loop()`, I defined the text output to be `The baud rate is 115200.` and uncommented the line to print the words to the Serial Monitor.
7. I set up my delay (in milliseconds) to 500 for both HIGH and LOW and uncommented those lines to enable the blinking.
8. To compile and upload the code, I connected the ESP32 to my laptop via USB. 
9. At the very bottom of the VS Code window, I clicked Build to ensure there are no errors.
10. No errors were found, so I clicked the Upload button right next to Build.
11. To monitor the output, I clicked the Plug icon and was getting strange icons in the output.
12. To address this, I watched the tutorial video for the first time and added the `monitor_speed` variable and matched it with the baud rate.

13. I clicked Build and Upload, confirmed that the output was `The baud rate is 115200.`.
14. On top of confirming the text output in the Serial Monitor, I also confirmed that the ESP32 was blinking.

### At Home
Wanting to be more creative and make the link pattern do something more meaningful than just flashing, I thought using my own name to apply Morse Code would be fun. I'm glad I did it because I ended up practicing using variables, which may come in handy later on.
15. I changed the serial message for a second time to a more fitting one: `I taught an ESP32 (and myself) to say my name in Morse Code!`.
16. I changed the frequencies to mimic dots, dashes, gaps, etc.
17. I added comments to adequetely describe what the code is doing.

---

## Extra Credit Submission
The code block for this can be found in `Extra Credit.md`.

---

## Time Reporting and Reflection

**1. How long did it take you to complete this assignment?**
This assignment took all 50 minutes of Friday's lab to complete and another 80 minutes completing the lab assignment, the code for extra credit, and the comments. Also, I'm still figuring out how to use GitHub, but after finishing this lab, I'm faster at it. I'll only get better.

**2. What level of difficulty would you associate with this assignment?**
Low

**3. If medium/high difficulty, what aspect did you find most difficult?**
N/A.

**4. How comfortable do you currently feel with the course content?**
I feel fairly confident in this course' technical demand. I don't 

**5. Any additional feedback for the instructors?**
None.