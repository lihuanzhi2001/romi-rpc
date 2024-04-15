#include <unistd.h>
#include "romi/net/wakeup_fd_event.h"
#include "romi/common/log.h"


namespace romi {

WakeUpFdEvent::WakeUpFdEvent(int fd) : FdEvent(fd) {
}

WakeUpFdEvent::~WakeUpFdEvent() {

}

void WakeUpFdEvent::wakeup() {
  char buf[8] = {'a'};
  int rt = write(m_fd, buf, 8);
  if (rt != 8) {
    ERRORLOG("write to wakeup fd less than 8 bytes, fd[%d]", m_fd);
  }
  DEBUGLOG("success read 8 bytes");
}


}