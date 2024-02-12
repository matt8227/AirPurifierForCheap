# AirPurifierForCheap
A collection of things I used to make some cheap air purifiers.

# Materials
- Round air purifier filter
- PC Fan
- Power Supply
- 3d printed box, adaptors and fan grill (optionally with a corner cut off)
- Barrel connector
- 4Pin fan connector
- Wires + solder
- Arduino Nano + buttons + perfboard + diode

# Idea
I wanted to make a couple of cheap air purifiers for my home.
I found bigclivedotcom's video on the subject (https://www.youtube.com/watch?v=6Vmh2Ip2Vxg) and decided to evolve his design by making the air purifier more controllable using the Arduino Nano, while also keeping the control components completely modular and removable from the filter for when it needs changing.

# Considerations
- For easy of printing the adaptors, try to find filters with a hole diameter that matches your fan diameter.
- If you want to use my box design, solder everything first, THEN put in place, it is much easier (and not so obvious to a soldering noob like me lol).
Another thing to consider is vibrations: my fans are quite bad in this aspect, so to reduce the chance of solder breaking I removed it from the assembly and set it on the floor to the side of the air purifier.
- The Arduino Nano use a linear voltage regulator to step down the voltage from the vin pin, so if you want to add functionalities that require power, consider you have a very strict budget in that regard (to be safe, a couple hundred mA). You may consider using a buck converter.
- I added the diode to protect the Nano from reverse polarity. It also has the nice benefit to slightly lower the input voltage and reduce the stress on the Nano voltage regulator.
 My fans seem to have that protection integrated. 
- Thank you BigClive for the idea!
