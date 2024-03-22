//
//     Generated by private class-dump
//

@interface MMMemoryRecordLaunchTime : NSObject {
    unsigned long long _lastSessionLaunchTime;
    unsigned long long _currentSessionLaunchTime;
}

@property (nonatomic) unsigned long long lastSessionLaunchTime;
@property (nonatomic) unsigned long long currentSessionLaunchTime;

+ (unsigned long long)readLaunchTime;
+ (void)writeLaunchTime:(unsigned long long)arg0;
+ (id)shared;

- (void)setCurrentSessionLaunchTime:(unsigned long long)arg0;
- (void)setLastSessionLaunchTime:(unsigned long long)arg0;
- (unsigned long long)currentSessionLaunchTime;
- (void)onAppLaunch;
- (unsigned long long)lastSessionLaunchTime;

@end
