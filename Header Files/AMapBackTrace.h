//
//     Generated by private class-dump
//

@interface AMapBackTrace : NSObject

+ (id)serializeBackTrace:(id)arg0;
+ (id)serializeThreadTrace:(id)arg0;
+ (id)backtraceOfAllThread;
+ (long long)setCrashTread:(id)arg0 whitBacktrace:(id)arg1;
+ (long long)indexOfThreadTrace:(id)arg0 withAddress:(unsigned long long)arg1;
+ (long long)setCrashMachTread:(unsigned int)arg0 whitBacktrace:(id)arg1;
+ (id)formartThreadTrace:(id)arg0 index:(long long)arg1;
+ (id)formartCmdtrace:(id)arg0;
+ (id)backtraceOfNSThread:(id)arg0;
+ (id)formartTrace:(id)arg0;
+ (void)load;

@end
