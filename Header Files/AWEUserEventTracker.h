//
//     Generated by private class-dump
//

@interface AWEUserEventTracker : NSObject

+ (void)trackWithInfo:(id)arg0;
+ (void)trackWithLabel:(id)arg0;
+ (id)platformString:(unsigned long long)arg0;
+ (void)trackWithEventName:(id)arg0 withParams:(id)arg1 needStagingFlag:(BOOL)arg2;
+ (void)sloLoginMonitorWithEventName:(id)arg0 params:(id)arg1 error:(id)arg2;
+ (void)trackFromContextWithEventName:(id)arg0 extraParams:(id)arg1 perfMonitor:(BOOL)arg2 needStagingFlag:(BOOL)arg3;

@end