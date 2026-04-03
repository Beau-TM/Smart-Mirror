# Smart-Mirror

Projectomschrijving:  

Een spiegel met een ingebouwd schermpje. Deze zit achter de spiegel bevestigd waardoor je de 	luchtvochtigheidsgraad kunt zien, je kunt de temperatuur zien. En je kunt de tijd ook zien. Dit 	gaat om de 5 seconden veranderen, want het schermpje is te klein om er alles op te krijgen. 	Daarnaast gaan we met een sensor werken die ervoor gaat zorgen dat het aan gaat als je jou 	hand ervoor houd.  Ook gaan we ervoor zorgen dat de info verstuurd kan worden naar de gsm. 

 
Benodigdheden:  
DHT11 --> luchtvochtigheid en temperatuur 
LCD --> schermpje  
PIR MOTION HW-416A --> bewegingssensor  
Mannetjes kabels  
Vrouwtjes kabels 
Usb naar usb-c kabel 
Freenove ESP32 

Doel:  

Ervoor zorgen dat mensen bewust zijn van hoe vochtig het is in jou badkamer (en eventueel een 	waarschuwing geven om je raam open te zetten. Ook gewoon om het leven makkelijker te 	maken. 


Vergeet niet de extensies te downloaden voor C en arduino te gebruiken in vsc
Je moet de volgende downloaden:
C/C++ Extension Pack
Arduino Community Edition
Daarna moet je de CLI gaan downloaden van het internet wat natuurlijk wil het niet normaal doen
https://docs.arduino.cc/arduino-cli/installation/
Je moet de msi 64 bit pakken, dan effe kijken of dit gelukt is in een admin terminal op je eigen pc: arduino-cli version
dan ga je in de terminal de esp32 downloaden dit doe je door dit te typen in de terminal:
arduino-cli core update-index
arduino-cli core install esp32:esp32s
Nu moeten we eps32 dev module installeren :
crtl + shift + p
Arduino: change board type
esp32 dev module