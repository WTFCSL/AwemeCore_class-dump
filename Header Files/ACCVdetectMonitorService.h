//
//     Generated by private class-dump
//

@class NSString;

@interface ACCVdetectMonitorService : NSObject <IESVdetectMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
- (double)timeIntervalForKey:(id)arg0;
- (void)cancelTimingForKey:(id)arg0;
- (void)startTimingForKey:(id)arg0;

@end
