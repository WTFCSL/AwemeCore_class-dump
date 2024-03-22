//
//     Generated by private class-dump
//

@interface TSPKAppLifeCycleObserver : NSObject {
    BOOL _isBackground;
    double _timeLastDidEnterBackground;
}

@property (nonatomic) BOOL isBackground;
@property (nonatomic) double timeLastDidEnterBackground;

+ (id)sharedObserver;

- (BOOL)isAppBackground;
- (void)addNotifications;
- (double)getTimeLastDidEnterBackground;
- (void)setTimeLastDidEnterBackground:(double)arg0;
- (void)handlePageStatusChangeNotification:(id)arg0;
- (void)handlePageDeallocNotification:(id)arg0;
- (double)timeLastDidEnterBackground;
- (id)init;
- (void)setIsBackground:(BOOL)arg0;
- (void)applicationWillEnterForeground;
- (void)setup;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationDidReceiveMemoryWarning;
- (void)applicationDidBecomeActive;
- (BOOL)isBackground;
- (void)applicationWillTerminate;

@end
