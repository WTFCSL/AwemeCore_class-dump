//
//     Generated by private class-dump
//

@interface BDImageMonitorManager : NSObject

+ (void)trackData:(id)arg0 logTypeStr:(id)arg1;
+ (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
+ (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (void)performMonitorCallbackWithLogType:(id)arg0 attributes:(id)arg1 extra0:(id)arg2 extra1:(id)arg3;

@end
