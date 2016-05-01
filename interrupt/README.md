# Interrupt Sample code
This demo how to write interrupt service routine

#Code Description
1. bind interrupt vector `PORT1_VECTOR` to service routine `Port_1(void)`
<pre>
# pragma vector=PORT1_VECTOR

 __interrupt void Port_1(void)
{
...
...
}
</pre>
`PORT1_VECTOR` is defined in 
[MSP430f5419a.pdf](http://139.162.35.49/image/MSP430Fxxx/MSP430f5419a.pdf) `6.3 Interrupt Vector Addresses`

2. 

