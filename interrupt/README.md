# Interrupt Sample code
This demo how to write interrupt service routine

#Code Description
1. bind interrupt vector `PORT1_VECTOR` to service routine `Port_1(void)`: [example.c](https://github.com/ivan0124/MCU-MSP430Fxxx-Family/blob/master/interrupt/example.c)
<pre>
#pragma vector=PORT1_VECTOR

 __interrupt void Port_1(void)
{
...
...
}
</pre>
`PORT1_VECTOR` is `0xFFDE` which is defined in 
[MSP430f5419a.pdf](http://139.162.35.49/image/MSP430Fxxx/MSP430f5419a.pdf) `6.3 Interrupt Vector Addresses`
![image link](http://139.162.35.49/image/MSP430Fxxx/MSP430_inetrrupt_20160501.png)

2. using register `P1IE` to enable interrupt. example: enable `P1.4` interrupt:
<pre>
...
P1IE |= 0x10; // P1.4 interrupt enabled
...
</pre>


