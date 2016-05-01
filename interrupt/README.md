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

2. 

