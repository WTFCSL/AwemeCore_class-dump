//
//     Generated by private class-dump
//

@class HGHeartbeatTrackerConfig, HGHeartbeatTrackerThread;

@interface HGHeartbeatTrackerInnerConfig : NSObject {
    HGHeartbeatTrackerConfig *_config;
    HGHeartbeatTrackerThread *_timerThread;
}

@property (retain, nonatomic) HGHeartbeatTrackerConfig *config;
@property (retain, nonatomic) HGHeartbeatTrackerThread *timerThread;

- (id)timerThread;
- (void)setTimerThread:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;

@end