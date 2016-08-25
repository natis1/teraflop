//Code stolen from some opengl tutorial



#define LOGFILE	"tf.log"     // all Log(); messages will be appended to this file
#include "stdbool.h"


extern bool LogCreated;      // keeps track whether the log file is created or not

#ifdef _cplusplus
extern "C" {
#endif
void writeLogFile(char const* szString);