//
//     Generated by private class-dump
//

@class NSString;

@interface IESECTTMonitorServiceImpl : NSObject <IESECTTMonitorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
+ (void)trackService:(id)arg0 value:(float)arg1 extra:(id)arg2;
+ (BOOL)endTimingForKey:(id)arg0 service:(id)arg1 label:(id)arg2;
+ (void)startTimingForKey:(id)arg0;

@end
