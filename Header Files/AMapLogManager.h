//
//     Generated by private class-dump
//

@interface AMapLogManager : NSObject {
    BOOL _colorsEnabled;
    unsigned long long _enabledLogType;
}

@property (nonatomic) unsigned long long enabledLogType;
@property (nonatomic) BOOL colorsEnabled;

+ (id)sharedInstance;

- (void)setColor:(id)arg0 forType:(unsigned long long)arg1;
- (void)log:(id)arg0 logType:(unsigned long long)arg1 file:(const char *)arg2 line:(int)arg3 function:(const char *)arg4 format:(id)arg5;
- (unsigned long long)enabledLogType;
- (void)setEnabledLogType:(unsigned long long)arg0;
- (BOOL)colorsEnabled;
- (void)setColorsEnabled:(BOOL)arg0;

@end
