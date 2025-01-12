//
//     Generated by private class-dump
//

@class IESLiveVoiceWave, UIImageView, UIImage, NSMutableArray;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractiveAudioView : UIView {
    BOOL _isAnimated;
    UIImageView *_backgroundImageView;
    UIImageView *_centerAvatorView;
    NSMutableArray *_urlArray;
    UIImageView<IESLiveWebPPlayer> *_animationViewLoop;
    IESLiveVoiceWave *_limitVoiceWave;
    UIImage *_defaultSpeakingImage;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *centerAvatorView;
@property (nonatomic) BOOL isAnimated;
@property (retain, nonatomic) NSMutableArray *urlArray;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewLoop;
@property (retain, nonatomic) IESLiveVoiceWave *limitVoiceWave;
@property (retain, nonatomic) UIImage *defaultSpeakingImage;

- (void)setUrlArray:(id)arg0;
- (id)urlArray;
- (void)setIsAnimated:(BOOL)arg0;
- (id)animationViewLoop;
- (void)startMultiTalkingAnimation;
- (void)stopMultiTalkingAnimation;
- (void)setAnimationViewLoop:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 andURLArray:(id)arg1;
- (void)updateAudioAnimation:(BOOL)arg0;
- (void)updateVoiceWaveWithMicDress:(id)arg0 userID:(id)arg1;
- (void)updateAvatarURLList:(id)arg0;
- (id)limitVoiceWave;
- (void)setLimitVoiceWave:(id)arg0;
- (void)updateAvatorUI;
- (id)centerAvatorView;
- (BOOL)isLimitVoiceWaveValid:(id)arg0;
- (id)defaultSpeakingImage;
- (void)setCenterAvatorView:(id)arg0;
- (void)setDefaultSpeakingImage:(id)arg0;
- (id)init;
- (BOOL)isAnimated;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;

@end
