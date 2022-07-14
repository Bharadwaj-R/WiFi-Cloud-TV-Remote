# WiFi Cloud TV Remote
### Controlling a TV over the cloud with NodeMCU and Arduino Cloud  
<br/>

***Overview :***  
The main aim behind this project is to create a TV remote by using a NodeMCU and associating it with Arduino Cloud. The main advantage of this project is that it can work on any Android/iOS/PC device, which has active internet connection, overcoming the necessity to have an IR blaster built-in into the smartphone.  
<br/>  

***Required Components :***  
- NodeMCU - ESP8266
- IR Receiver - TSOP1738
- IR LED Transmitter
- Resistor - 1k Ohm
- Breadboard  
<br/>  

***Software Requirements :***
- Arduino IDE
- Arduino Cloud account  
<br/>  

***Decoding the Hex Codes for each button :***  
Use the code [here](https://github.com/Bharadwaj-R/WiFi-Cloud-TV-Remote/tree/main/Assets/IR%20Hex%20Decode) and upload it to an Arduino/NodeMCU. Check the `rpin` in the code and connect the IR reciever's signal pin to the correct GPIO pin. Once uploaded, bring close any TV remote control and press any button. The `IR Protocol` used along with the `IR Hex Code` is displayed. Save them for the future use. The codes I obtained are stored [here](https://github.com/Bharadwaj-R/WiFi-Cloud-TV-Remote/blob/main/Assets/IR%20Hex%20Decode/Hex%20Codes.txt).  
<br/>  

***IR Transmitter Demo Code :***  
Use the code [here](https://github.com/Bharadwaj-R/WiFi-Cloud-TV-Remote/tree/main/Assets/IR%20Transmitter%20Demo) to check if the IR transmitter LED is working. Make sure you replace the `send function` with that of the protocol you decoded earlier (in my case, it is `sendNECRaw()`). If you get an `Unknown` type, then please refer to [this article](https://forum.arduino.cc/t/ir-send-raw/276249) to transmit code using `sendRaw()` function. Upload the code to an Arduino/NodeMCU to verify if the IR Transmitter LED is working properly. Do note that you cannot see the IR LED bursts with naked eye, but can check it with any phone camera. For each transmission, a message is also displayed in the Serial Monitor in Arduino IDE.  

Note that a similar version of the code is available in Arduino IDE by default in the `Examples` section under `IRremote`. You will need to make small changes to the code in order to make it work properly.  
<br/>  

***Setting up the Arduino Cloud platform :***  
Follow the instructions in [this repository](https://github.com/Bharadwaj-R/NodeMCU-and-Arduino-Cloud#setting-up-the-arduino-cloud-environment) to create a device, associate it with a thing and create a dashboard. Check the below examples for creating the dashboard for both Mobile and PC layouts.  
<br/>

***Dashboard Setup for PC :***  
<p align="center">
  <kbd>
    <img src="https://github.com/Bharadwaj-R/WiFi-Cloud-TV-Remote/blob/main/Assets/Dashboard%20Setup%20PC.png?raw=true">
  </kbd>
</p>  
<br/>

***Dashboard Setup for Mobiles :***
<p align="center">
  <kbd>
    <img src="https://github.com/Bharadwaj-R/WiFi-Cloud-TV-Remote/blob/main/Assets/Dashboard%20Setup%20Mobile.png?raw=true">
  </kbd>
</p>  
<br/>

***Uploading the code to NodeMCU :***  
Follow [this article](https://github.com/Bharadwaj-R/NodeMCU-and-Arduino-Cloud#setting-up-the-arduino-cloud-environment:~:text=Coding%20the%20NodeMCU%20%3A) for uploading the code. In case of any trouble uploading the code to NodeMCU, visit the [Troubleshoot Section](https://github.com/Bharadwaj-R/NodeMCU-and-Arduino-Cloud/blob/main/Troubleshoot.md) for any possible solution for the porblem.  
<br/>

***Versions :***  
- `v1.0.0` - Original prototype design by [Bharadwaj Routhu](https://github.com/Bharadwaj-R)  
<br/>

***Motivation Behind this project :***  

After learning the basics of IR transmission using different IR Protocols, I wanted to integrate it with Arduino Cloud to create a remote application. This removes a major issue where in a smartphone needs a built-in IR blaster in order to control the TV. Also, those smartphone apps work only with popular TV brands and generally don't work with STB or any other cable providers. Therefore, to solve the issue from the core, removing the dependency on IR blaster was the main solution. An ternative for this is NodeMCU with an IR Transmitter connected to the cloud. Every smartphone now has a stable internet connection and hence, replacing the IR transmission with transmission over the cloud is a viable idea.  
<br/>

If you like this project, please star the repository  and visit [my profile](https://github.com/Bharadwaj-R) for many other such small projects based on IoT, Cloud and other Embedded Development boards.
