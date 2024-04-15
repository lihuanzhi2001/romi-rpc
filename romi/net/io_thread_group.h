#ifndef ROMI_NET_IO_THREAD_GROUP_H
#define ROMI_NET_IO_THREAD_GROUP_H

#include <vector>
#include "romi/common/log.h"
#include "romi/net/io_thread.h"



namespace romi {

class IOThreadGroup {

 public:
  IOThreadGroup(int size);

  ~IOThreadGroup();

  void start();

  void join();

  IOThread* getIOThread();

 private:

  int m_size {0};
  std::vector<IOThread*> m_io_thread_groups;

  int m_index {0};

};

}


#endif