//
//     Generated by private class-dump
//

@class NSString;

@interface BDPLogTrackerListener : NSObject <BDPLogListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)disposeLogWithlevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(const char *)arg2 funcName:(const char *)arg3 line:(int)arg4 content:(id)arg5;

@end