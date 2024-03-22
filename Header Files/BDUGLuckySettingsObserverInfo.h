//
//     Generated by private class-dump
//

@protocol BDUGLuckySettingsObserver;

@interface BDUGLuckySettingsObserverInfo : NSObject {
    unsigned long long _settingsType;
    long long _pollingInterval;
    id<BDUGLuckySettingsObserver> _observer;
    double _lastUpdateTime;
}

@property (nonatomic) unsigned long long settingsType;
@property (nonatomic) long long pollingInterval;
@property (weak, nonatomic) id<BDUGLuckySettingsObserver> observer;
@property (nonatomic) double lastUpdateTime;

- (id)initWithSettingsType:(unsigned long long)arg0 pollingInterval:(long long)arg1 observer:(id)arg2;
- (double)lastUpdateTime;
- (id)observer;
- (void).cxx_destruct;
- (void)setSettingsType:(unsigned long long)arg0;
- (long long)pollingInterval;
- (void)setLastUpdateTime:(double)arg0;
- (void)setObserver:(id)arg0;
- (unsigned long long)settingsType;
- (void)setPollingInterval:(long long)arg0;

@end