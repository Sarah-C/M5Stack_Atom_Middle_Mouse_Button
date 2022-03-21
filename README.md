# M5Stack Atom: The missing middle mouse button

![20220320_152902](https://user-images.githubusercontent.com/1586332/159325662-089217c3-11d4-49fa-835e-5541042f9d39.jpg)

This program turns your sleek and low profile M5Stack Atom (or Matrix) into the missing middle mouse button for your laptop!

The middle mouse button "hides" under the scroll wheel of the mouse. Did you know you can actually press the wheel down?               
Some programs like Chrome open new links in a new tab when you middle click, without opening it. Which is great for opening several Google search results without leaving the page.

The taskbar when middle clicked opens a new instance of whatever program you've clicked on.

For years touchpads only came with two buttons, until Microsoft created the new intelligent touch system in Windows 10, and with it 3 fingers could be used to "tap" the middle mouse button.

Those programs above work great with it. Sadly - programs that need middle-click and drag support such as Maya, Blender and several other programs need you to be able to move the mouse while middle clicking. If you tried this with your "three fingers touch" you would find one of the other intelligent touch "shortcuts" activating like "program select" or "minimise all windows". 

You can get middle mouse button emulator programs that turn a keypress into the middle button, but they lack the position of the real-world button.

This is were M5Stack Atom Middle Mouse Button is useful - click and drag just like you would with your mouse while using Blender, Maya and lots of other programs!
A blob of blue-tac or some velcro will hold your button in place.  ;)

# How it works
The program uses the Bluetooth Low Energy mouse driver from https://github.com/T-vK/ESP32-BLE-Mouse and integrates it with the Atom's button to emulate a mouse's middle click and click-and-hold.

# Using it
1: Upload the sketch using Arduino IDE to the Atom.               
2: When powered, the Atom's LED will glow CYAN - this means it's waiting to be paired.                 
3: In Windows - open your Bluetooth window (ususally in your system tray) and click "Connect a new mouse/keyboard" option. The Atom will appear as "M5Stack: Middle mouse mutton".                    
4: One connected the Atom's LED will glow green.                      
5: Pressing the Atom's button will activate the middle mouse button wherever your mouse cursor currently is, and the LED will glow RED until it's released.                     

You can unplug the Atom, and plug it back in later, and it will auto-pair again.


