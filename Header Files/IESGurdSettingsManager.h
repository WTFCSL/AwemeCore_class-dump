//
//     Generated by private class-dump
//

@class IESGurdSettingsResponse, NSTimer, IESGurdSettingsResponseExtra;

@interface IESGurdSettingsManager : NSObject {
    BOOL _pollingEnabled;
    IESGurdSettingsResponse *_settingsResponse;
    IESGurdSettingsResponseExtra *_extra;
    long long _pollingInterval;
    NSTimer *_pollingRequestTimer;
}

@property (retain, nonatomic) IESGurdSettingsResponse *settingsResponse;
@property (nonatomic, getter=isPollingEnabled) BOOL pollingEnabled;
@property (nonatomic) long long pollingInterval;
@property (retain, nonatomic) NSTimer *pollingRequestTimer;
@property (retain) IESGurdSettingsResponseExtra *extra;

+ (id)sharedInstance;

- (void)setExtra:(id)arg0;
- (id)settingsResponse;
- (void)setSettingsResponse:(id)arg0;
- (void)setupTimerIfNeeded;
- (void)fetchSettingsWithRequestType:(long long)arg0;
- (BOOL)isPollingEnabled;
- (void)setPollingEnabled:(BOOL)arg0;
- (void)handleSettingsResponse:(id)arg0;
- (void)afterSettings;
- (void)handleSettingsConfig:(id)arg0;
- (id)pollingRequestTimer;
- (void)setPollingRequestTimer:(id)arg0;
- (void)fetchSettingsPollingHandler;
- (void)recordOnlineStats;
- (void)recordUsage;
- (void).cxx_destruct;
- (id)extra;
- (long long)pollingInterval;
- (void)cleanCache;
- (void)setPollingInterval:(long long)arg0;

@end