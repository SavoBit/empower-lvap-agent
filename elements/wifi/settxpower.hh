#ifndef CLICK_SETTXPOWER_HH
#define CLICK_SETTXPOWER_HH
#include <click/element.hh>
#include <click/glue.hh>
CLICK_DECLS

/*
=c

SetTXPower([I<KEYWORDS>])

=s Wifi

Sets the transmit power for a packet.

=d

Sets the Wifi TXPower Annotation on a packet.

Regular Arguments:

=over 8
=item POWER

Unsigned integer. from 0 to 63
=back 8

=h power
Same as POWER argument.

=a  SetTXRate
*/

class SetTXPower : public Element { public:
  
  SetTXPower();
  ~SetTXPower();
  
  const char *class_name() const		{ return "SetTXPower"; }
  const char *processing() const		{ return AGNOSTIC; }
  
  int configure(Vector<String> &, ErrorHandler *);
  bool can_live_reconfigure() const		{ return true; }

  Packet *simple_action(Packet *);

  void add_handlers();
  unsigned _power;

};

CLICK_ENDDECLS
#endif
