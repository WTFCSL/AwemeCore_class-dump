//
//     Generated by private class-dump
//

@class NSString;

@interface AWECFCougar : NSObject <BDBDMonitorClass>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setCustomContextValue:(id)arg0 forKey:(id)arg1;
+ (void)setCustomFilterValue:(id)arg0 forKey:(id)arg1;
+ (void)trackData:(id)arg0 logTypeStr:(id)arg1;
+ (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
+ (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (id)monitorManager;
+ (void)removeCustomFilterKey:(id)arg0;
+ (void)trackData:(id)arg0;
+ (void)event:(id)arg0 label:(id)arg1 durations:(float)arg2 needAggregate:(BOOL)arg3;
+ (id)monitorInstance;
+ (id)inJectedInfoInstance;

@end