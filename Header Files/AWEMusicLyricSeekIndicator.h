//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEMusicLyricSeekIndicator : UIView {
    UILabel *_timeLabel;
    UIImageView *_seekButton;
}

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *seekButton;

- (void)setSeekingTime:(double)arg0;
- (id)seekButton;
- (void)setSeekButton:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (id)timeLabel;

@end