#ifndef _SIGQUIT_H_
#define _SIGQUIT_H_

#include <signal.h>

/* Set to a non-zero value when SIGQUIT is received. */
extern sig_atomic_t sigquit_received;

/**
 * sigquit_init(void):
 * Prepare to catch SIGQUIT and ^Q, and zero sigquit_received.
 */
int sigquit_init(void);

#endif /* !_SIGQUIT_H_ */
