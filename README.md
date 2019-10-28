# guava

## Interface Guide
This portion of the prototype is a simple system that gets users to listen to and repeat after certain words.

**Step 1:** Pull the complete repository

**Step 2:** Make sure all the audio files are in the same folder 

**Troubleshooting:** Depending on the browser, clear the cache (or force clear it with ctrl + f5) as you may have a different version of jquery installed in temp files that conflicts with the version we used. Occasionally on chrome, browser restarts may be necessary.

## Unity AR Prototype Guide
This portion of the prototype gets users to try and search for food based on their names in the language they are learning.

**Step 1:** Open Mouthful.unity file found in the 'Assets' folder.  
**Step 2:** Go to File > Build Settings > Platform  
**Step 3:** Select the platform you wish to run the prototype on and press 'Switch Platform'  
**Step 4:** Connect your mobile device to the computer, and select it under 'Run Device'  
**Step 5:** Press 'Build and Run' and wait for the project to download on your device  
**Step 6:** Print out the AR Markers found in the 'AR Markers' folder. Place the markers infront of the corresponding ingredient  
**Step 7:** On the device, point the camera at the AR Marker to have the text display above it.  

## LED Feedback Arduino Prototype Guide
This portion of the prototype is a system where the system (as in, a validator) triggers a set of LED's when the learner correctly pronounces a word.

##### **Step 1:** Connect the breadboard's negative channel to the GROUND pin of the Arduino Uno and positive channel to the 5V pin.  
##### **Step 2: Connecting the LEDs**  
1. Place LED into the breadboard with a 220 ohm resistor attached in the longer pin's row.
2. Connect the short leg of the LEDs to the negative channel of the breadboard.
3. Connect the end of the 220ohm resistor to pins 10, 11 and 12 (one pin for each LED). <br> 
##### **Step 3: Connecting the Buttons**  
1. Place button into the breadboard with a 10k ohm resistor in the same row as one of the button legs.
2. Connect the other button leg (same column as the one attached to the 10k ohm resistor) to the breadboard's positive channel. 
3. Connect the end of the 10k ohm resistor to the breadboard's negative channel. 
4. Connect the other button leg (same row as the one attached to the 10k ohm resistor) to pins 2, 3 and 4 (one pin for each button).  
##### **Step 4:** Upload LEDFeedback.ino to the Arduino Uno.  
##### **Step 5:** Press a button to light an LED up, pin 2, 3, 4 buttons control pin 10, 11, 12 LEDs respectively. Press again to de-light it.



Repository for Team Guava (W01)
[Home](https://github.com/deco3500-2019/guava/wiki)

[Proposal](https://github.com/deco3500-2019/guava/wiki/Proposal)

[Week 4 & 5 : Brainstorming & Initial Topic Selection](https://github.com/deco3500-2019/guava/wiki/Week-4-&-5-:-Brainstorming-&-Initial-Topic-Selection)

[Week 6 & 7 : Google Assistant Prototype](https://github.com/deco3500-2019/guava/wiki/Week-6-&-7-:-Google-Assistant-Prototype)

[Week 7 & 8 : User Research Interviews & Breakdown](https://github.com/deco3500-2019/guava/wiki/Week-7-&-8-:-User-Research-Interviews-&-Breakdown)

[Week 10 & 11 : Cue Card Assisted Prototype User Testing Responses](https://github.com/deco3500-2019/guava/wiki/Week-10-&-11-:-Cue-Card-Assisted-Prototype---User-Testing-Responses)

[Week 12 & 13 : Final Prototype](https://github.com/deco3500-2019/guava/wiki/Week-12-&-13-:-Final-Prototype)

[Team Journal](https://github.com/deco3500-2019/guava/wiki/Team-Journal)

[Design Process Overview](https://github.com/deco3500-2019/guava/wiki/Design-Process-Overview)

