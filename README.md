# BinaryCountingLEDwithPhone
This project is an LED light counting up from 0-15 in binary. The arduino and the circuit needs a HCO5 bluetooth module to be recieving data from a distant bluetooth device. The bluetooth device sending data in this case would be a samsung phone(iphone would not connect to HCO5). When the arduino recieve "1" from a device, then it starts to count from 0-15. After reaching 15, then if the device is still recieving "1", then it counts from 0-15 again, if not, then all the lights are shut off. It's important to note that you are going to have to download an app on your samsung and "configure" a button on that app to output a value of "1" and "0" for the arduino to run its code. There isn't a specific app that's required, as long as the app sends the correct data and connects to the HCO5 bluetooth module.
