#ifndef ROMI_COMMON_RUN_TIME_H
#define ROMI_COMMON_RUN_TIME_H


#include <string>

namespace romi {

class RpcInterface;

class RunTime {
 public:
  RpcInterface* getRpcInterface();

 public:
  static RunTime* GetRunTime();


 public:
  std::string m_msgid;
  std::string m_method_name;
  RpcInterface* m_rpc_interface {NULL};

};

}


#endif