#ifndef ROMI_NET_TIMER_H
#define ROMI_NET_TIMER_H

#include <map>
#include "romi/common/mutex.h"
#include "romi/net/fd_event.h"
#include "romi/net/timer_event.h"

namespace romi {

class Timer : public FdEvent {
 public:

  Timer();

  ~Timer();

  void addTimerEvent(TimerEvent::s_ptr event);

  void deleteTimerEvent(TimerEvent::s_ptr event);

  void onTimer(); // 当发送了 IO 事件后，eventloop 会执行这个回调函数

 private:
  void resetArriveTime();

 private:
  std::multimap<int64_t, TimerEvent::s_ptr> m_pending_events;
  Mutex m_mutex;

};



}

#endif