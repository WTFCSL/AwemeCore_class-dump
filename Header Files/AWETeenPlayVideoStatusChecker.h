//
//     Generated by private class-dump
//

@class NSMutableArray, AWETeenBaseVideoController;

@interface AWETeenPlayVideoStatusChecker : NSObject {
    BOOL _isBackground;
    NSMutableArray *_playVideoViewControllers;
    AWETeenBaseVideoController *_lastPlayVideoViewController;
    long long _playVideoViewControllerCount;
    double _lastCheckTimestamp;
}

@property (retain, nonatomic) NSMutableArray *playVideoViewControllers;
@property (weak, nonatomic) AWETeenBaseVideoController *lastPlayVideoViewController;
@property (nonatomic) long long playVideoViewControllerCount;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) double lastCheckTimestamp;

+ (id)sharedInstance;

- (void)didReceiveMemoryWarningNotification;
- (void)checkAfterPlay;
- (void)increasePlayVideoViewControllers;
- (void)decreasePlayVideoViewControllers;
- (void)updatePauseStatusWithPlayer:(id)arg0;
- (void)updatePlayStatusWithPlayer:(id)arg0;
- (void)setPlayVideoViewControllers:(id)arg0;
- (void)setPlayVideoViewControllerCount:(long long)arg0;
- (void)setLastCheckTimestamp:(double)arg0;
- (double)lastCheckTimestamp;
- (long long)playVideoViewControllerCount;
- (id)playVideoViewControllers;
- (id)lastPlayVideoViewController;
- (void)setLastPlayVideoViewController:(id)arg0;
- (void)checkBeforePlay;
- (id)init;
- (void)setIsBackground:(BOOL)arg0;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (void)applicationDidBecomeActive;
- (BOOL)isBackground;

@end
