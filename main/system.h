#ifndef SYSTEM_H_
#define SYSTEM_H_

void system_task(void *arg);
void init_system(void);
void get_stats(void);
void notify_system_accepted_share(void);
void notify_system_rejected_share(void);
void notify_system_found_nonce(double nonce_diff);


#endif /* SYSTEM_H_ */