#ifndef ROMI_NET_WAKEUP_FDEVENT_H
#define ROMI_NET_WAKEUP_FDEVENT_H

#include "romi/net/fd_event.h"

namespace romi {

class WakeUpFdEvent : public FdEvent {
 public:
  WakeUpFdEvent(int fd);

  ~WakeUpFdEvent();

  void wakeup();

 private:

};



}

#endif