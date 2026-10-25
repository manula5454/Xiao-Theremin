### XIAO THEREMIN !!
I found a theremin quite difficult to make with oscillators etc. So instead I'm using a XIAO RP2040 to make a theremin. This is actually cheaper than the raw components of a theremin and simply detects hand movements as changes in capacitance which can then be translated to distinct pitch and volume frequencies.

![PCB So far](https://github.com/manula5454/Xiao-Theremin/blob/bc858d26c483b5b3a94048fea608e531fec7059a/Images/Screenshot%202026-10-26%20070330.png)

## HOW THIS WAS MADE

This project was made with a XIAO RP2040 to mitigate JFET's and oscillators by letting the Seeed microcontroller handle the workload

![astro](https://github.com/manula5454/Xiao-Theremin/blob/bc858d26c483b5b3a94048fea608e531fec7059a/Images/Screenshot%202026-10-26%20070500.png) 
![PCB](https://github.com/manula5454/Xiao-Theremin/blob/bc858d26c483b5b3a94048fea608e531fec7059a/Images/Screenshot%202026-10-26%20070439.png)

(The schematic might be changed in the future)
- The antennas will be just copper wire to create capacitance as my hand moves
- The potentiometers allow me to physically tweak the sound of the project
- The Audio Jack allows me to hear the sound through my stereo speakers.

  (NOTE: in the future I will be using a perfboard to create this project instead of a PCB as I really believe a PCB is not necessary)

## heres how to run the project :)
1. Wire up the schematic on a breadboard or solder on a perfboard or buy the PCB directly. [schematic](https://github.com/manula5454/Xiao-Theremin/blob/bc858d26c483b5b3a94048fea608e531fec7059a/Images/Screenshot%202026-10-26%20070500.png)

2. Copy the source code in [code](https://github.com/manula5454/Xiao-Theremin/tree/bc858d26c483b5b3a94048fea608e531fec7059a/Arduino_Theremin)


4. Install the project's dependencies (e.g. Seeed XIAO arduino library for boards and for Kicad symbols and footprints)


## AI DISCLOSURE
what did you use ai for on this project? for example for this site:
ai was used to copy css styling from template screenshots
