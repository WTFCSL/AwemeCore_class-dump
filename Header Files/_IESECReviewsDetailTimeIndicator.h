//
//     Generated by private class-dump
//

@class UILabel;

@interface _IESECReviewsDetailTimeIndicator : UIView {
    UILabel *_durationLabel;
    UILabel *_divider;
    UILabel *_currentTimeLabel;
    long long _duration;
    long long _currentTime;
}

@property (nonatomic) long long duration;
@property (nonatomic) long long currentTime;

- (id)formatTimeFromMillisecond:(long long)arg0;
- (void).cxx_destruct;
- (void)setCurrentTime:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)duration;
- (long long)currentTime;
- (void)setDuration:(long long)arg0;
- (void)setupSubviews;

@end
