//
//     Generated by private class-dump
//

@interface HMDTTNetPushTrafficCollector : NSObject {
    BOOL _isRunning;
}

@property BOOL isRunning;

+ (id)sharedInstance;

- (void)unregisterTTNetPushNotification;
- (void)registerTTNetPushNotification;
- (void)handleTrafficChanged:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
