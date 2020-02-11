Name: Bendy Medawar

EID: bhm522

Team Number:

## Questions

1. Why does your program need a setup and a loop?

    Setup is used to initalize pins as inputs or outputs and perform other microcontroller initialization tasks necesssary for execution and this is run once. Whenever power is 
	provided to a microcontroller, the controller continously executes instructions and thus a loop is needed to constrain execution in a controlled repetitive fashion.
	In our program we used the setup to initialize an output pin and loop to indefinetly turn on and off the LED.

2. What is the downside to putting all your code in a loop?

    This is inefficent as instructions that need only be run once such as GPIO initialization will be repeated in each loop cycle which is a waste of processor usage
	and power and time is lost on memory accesses. Not efficent.

3. Why does your code need to be compiled?

    To translate code in C to machine code which the microcontroller can actually read

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    As the frequency decreases, a flickering effect becomes more and more apparent as the human eye can begin to percieve the difference between the on and off state of the 
	LED. This is because human eyes cannot percieve high frequencies that dimmers are conventionally run at causing us to see a continous stream of light. Thus the solution to 
	using dimmers is running a high enough frequency that cannot be percieved by human eyes (typically > 100 Hz) and manipulating the duty cycle from a high percent to
	a lower percent of the period to over time to create a dimming effect 
	

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    Since voltage is a relative measure, a common ground node is needed to compare high and low signals from the ESP to the ground node on the ESP since these signals are generated
	with respect to the ESP ground node.

6. What is the difference between synchronous and asynchronous communication?

    Synchronous communication utilizes a clock to facilitate communication between a transmitter and reciever. Asynchronous communication does not use a clock and instead 
	a transmitter and receiver are set to communicate at the same baud rate.

7. Profile of UART: Sent X bytes in Y time 

    13 bytes in 1.119 ms

8. Profile of SPI: Sent X bytes in Y time

    13 bytes in 0.352 ms

9. Why is SPI so much faster than UART?

    The use of a common clock signal allows for faster communication since transmissions are aligned to clock pulses.

10. list one pro and one con of UART

    Pro: Only need two wires. Con: Slower than synchronous methods, transmission protocol (baud rate) must be set by both sides

11. list one pro and one con of SPI

    Pro: Faster than asynchronous methods. Cons: Requires a common clock and an extra wire to facilitate communication, extra wires for additional devices

12. list one pro and one con of I2C

    Pro: Synchronous communication needing only two wires (data and clock), efficent scaling for slave devices. Cons: Very sensistive to interference. Requires resistors

13. Why does I2C need external resistors to work?

    I2C lines are open drain and require pull up/down resistors.

## Screenshots

Procedure A, step 1:
![Put path to your image here ->](img/blinkImg.png)

Procedure A, step 4:
![Put path to your image here ->](img/dimmerImg.png)

Procedure B, UART:
![Put path to your image here ->](img/UARTImg.png)

Procedure B, SPI:
![Put path to your image here ->](img/SPIImg.png)
