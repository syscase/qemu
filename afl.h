#ifndef AFL_H
#define AFL_H

extern const char *aflFile;
extern const char *aflCoverageFile;
extern unsigned long aflCoverageAddrStart;
extern unsigned long aflCoverageAddrEnd;
extern unsigned long aflPanicAddr;
extern unsigned long aflPanicAddr2;
extern unsigned long aflPanicAddr3;
extern unsigned long aflPanicAddr4;
extern unsigned long aflDmesgAddr;

extern int aflEnableTicks;
extern int aflStart;
extern int aflGotLog;
extern target_ulong afl_start_code, afl_end_code;
extern unsigned char afl_fork_child;
extern int afl_wants_cpu_to_stop;

void afl_setup(void);
void afl_forkserver(CPUState*);

#endif /* AFL_H */
