//
//     Generated by private class-dump
//

@class IESLiveAnimatedImageView, UILabel, NSTimer;

@interface IESLivePlaybackPictureScaleGuideView : UIView {
    IESLiveAnimatedImageView *_guideImageView;
    UILabel *_guideLabel;
    NSTimer *_timer;
}

@property (retain, nonatomic) IESLiveAnimatedImageView *guideImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) NSTimer *timer;

- (id)guideImageView;
- (void)setGuideImageView:(id)arg0;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (void)showGuideWithDuration:(double)arg0;
- (void)layoutViews;
- (id)timer;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)setupUI;

@end
