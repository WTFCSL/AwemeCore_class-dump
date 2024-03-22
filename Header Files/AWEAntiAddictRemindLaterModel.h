//
//     Generated by private class-dump
//

@class NSDate;

@interface AWEAntiAddictRemindLaterModel : NSObject {
    double _remindLaterClickTime;
    NSDate *_remindLaterSessionStartTime;
    double _remindLaterSessionUseDuration;
    long long _delayRemindTime;
}

@property (nonatomic) double remindLaterClickTime;
@property (retain, nonatomic) NSDate *remindLaterSessionStartTime;
@property (nonatomic) double remindLaterSessionUseDuration;
@property (nonatomic) long long delayRemindTime;

+ (id)instanceWithClickTime:(double)arg0 sessionStartTime:(id)arg1 sessionUseDuration:(double)arg2 delayRemindTime:(long long)arg3;

- (long long)delayRemindTime;
- (void)setDelayRemindTime:(long long)arg0;
- (void)setRemindLaterClickTime:(double)arg0;
- (void)setRemindLaterSessionStartTime:(id)arg0;
- (void)setRemindLaterSessionUseDuration:(double)arg0;
- (double)remindLaterClickTime;
- (id)remindLaterSessionStartTime;
- (double)remindLaterSessionUseDuration;
- (void).cxx_destruct;

@end