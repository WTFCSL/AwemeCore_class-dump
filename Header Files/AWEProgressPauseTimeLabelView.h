//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEProgressPauseTimeLabelView : UIView {
    UILabel *_playTimeLabel;
    UILabel *_totalTimeLabel;
    UIImageView *_middleImageView;
}

@property (retain, nonatomic) UILabel *playTimeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIImageView *middleImageView;

- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg0;
- (id)playTimeLabel;
- (void)setPlayTimeLabel:(id)arg0;
- (void)setMiddleImageView:(id)arg0;
- (void)setupWithPlayedTime:(id)arg0 totalTime:(id)arg1;
- (void)updateTimeLabelLayout;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (id)middleImageView;

@end
