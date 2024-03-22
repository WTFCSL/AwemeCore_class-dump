//
//     Generated by private class-dump
//

@interface BDPInterruptionManager : NSObject {
    BOOL _isInterrupted;
}

@property (nonatomic) BOOL isInterrupted;

+ (void)bootstrapLaunch;
+ (void)postEnterForegroundNotification:(long long)arg0 uniqueID:(id)arg1;
+ (void)postEnterBackgroundNotification:(long long)arg0 uniqueID:(id)arg1;
+ (id)sharedManager;

- (void)setupObserver;
- (void)setIsInterrupted:(BOOL)arg0;
- (void)applicationBeginInterrupted;
- (void)applicationEndInterrupted;
- (id)init;
- (BOOL)isInterrupted;
- (void)dealloc;

@end
