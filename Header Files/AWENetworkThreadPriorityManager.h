//
//     Generated by private class-dump
//

@interface AWENetworkThreadPriorityManager : NSObject {
    BOOL _hasResetTTNetIOThreadPriority;
}

@property (nonatomic) BOOL hasResetTTNetIOThreadPriority;

+ (id)shareInstance;

- (void)resetTTNetworkThreadPriorityIfNeeded;
- (void)setUpTTNetChromeIOThreadInitPriorityIfNeeded;
- (void)setHasResetTTNetIOThreadPriority:(BOOL)arg0;
- (BOOL)hasResetTTNetIOThreadPriority;
- (id)init;

@end
