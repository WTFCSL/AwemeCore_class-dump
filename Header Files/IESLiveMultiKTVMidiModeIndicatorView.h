//
//     Generated by private class-dump
//

@class UIImageView, CAShapeLayer, UILabel, IESLiveGradientView;
@protocol IESLiveWebPPlayer;

@interface IESLiveMultiKTVMidiModeIndicatorView : UIView {
    IESLiveGradientView *_progressView;
    UIImageView<IESLiveWebPPlayer> *_animationView;
    UIImageView *_avatarImageView;
    UILabel *_scoreLabel;
    CAShapeLayer *_shapeLayer;
}

@property (retain, nonatomic) IESLiveGradientView *progressView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (void)updateScore:(double)arg0;
- (void)p_setupUIs;
- (void)p_StartAnimation;
- (void)updateAvatarUrlList:(id)arg0;
- (void).cxx_destruct;
- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)setShapeLayer:(id)arg0;
- (void)layoutSubviews;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)updateProgress:(double)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end
