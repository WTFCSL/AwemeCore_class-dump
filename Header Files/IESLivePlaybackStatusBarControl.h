//
//     Generated by private class-dump
//

@class NSTimer, IESLivePlaybackStatusBarView;

@interface IESLivePlaybackStatusBarControl : NSObject {
    IESLivePlaybackStatusBarView *_statusBar;
    NSTimer *_timer;
}

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) IESLivePlaybackStatusBarView *statusBar;

- (void)endMonitor;
- (void)destroyTimer;
- (void)didChangeBatteryLevel:(id)arg0;
- (void)checkAndMonitorBatteryLevel;
- (void)checkNetworkStatus;
- (void)addNetworkMonitor;
- (void)showTimeStr;
- (BOOL)is12HourFormat;
- (void)didChangeBatteryStatus:(id)arg0;
- (void)showBatteryStatus;
- (id)timer;
- (id)statusBar;
- (void)setStatusBar:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)config;
- (void)setTimer:(id)arg0;
- (void)createTimer;
- (void)startMonitor;
- (void)refreshContent;

@end