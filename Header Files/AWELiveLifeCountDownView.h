//
//     Generated by private class-dump
//

@class NSTimer, UILabel;

@interface AWELiveLifeCountDownView : LynxUI {
    BOOL _isFitFormatLength;
    long long _currentTime;
    long long _endTime;
    NSTimer *_timer;
    UILabel *_label;
}

@property (nonatomic) long long currentTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isFitFormatLength;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *label;

+ (id)__lynx_prop_config__290;
+ (id)__lynx_prop_config__521;

- (void)setIsFitFormatLength:(BOOL)arg0;
- (BOOL)isFitFormatLength;
- (id)formatTime:(long long)arg0 time:(long long)arg1 isFitFormatLength:(BOOL)arg2;
- (void)updateTime:(id)arg0 requestReset:(BOOL)arg1;
- (void)updateLabelUIStyle:(id)arg0 requestReset:(BOOL)arg1;
- (id)timer;
- (void).cxx_destruct;
- (void)setCurrentTime:(long long)arg0;
- (void)setLabel:(id)arg0;
- (long long)endTime;
- (void)setTimer:(id)arg0;
- (long long)currentTime;
- (id)label;
- (void)dealloc;
- (void)setEndTime:(long long)arg0;
- (id)createView;

@end
