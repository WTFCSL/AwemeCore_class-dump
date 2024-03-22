//
//     Generated by private class-dump
//

@class UIView, IESLiveAudioAvatarView, NSArray, NSString, IESLiveVideoPlayerController, UIImageView, CAGradientLayer, NSMutableArray;
@protocol IESLiveGuideAudioKTVBackgroundViewDataSource, IESLiveWebPPlayer;

@interface IESLiveGuideAudioKTVBackgroundView : UIView <IESLiveVideoPlayerControllerDelegate, CAAnimationDelegate, IESLiveGuideAudioKTVBackgroundViewProtocol> {
    id<IESLiveGuideAudioKTVBackgroundViewDataSource> _dataSource;
    UIView *_backgroundView;
    IESLiveAudioAvatarView *_avatarView;
    UIView *_seatsView;
    IESLiveVideoPlayerController *_playerController;
    CAGradientLayer *_videoMaskLayer;
    CAGradientLayer *_breathGradientLayer;
    NSMutableArray *_defaultColors;
    NSArray *_targetColors;
    UIImageView<IESLiveWebPPlayer> *_fullStage;
}

@property (weak, nonatomic) id<IESLiveGuideAudioKTVBackgroundViewDataSource> dataSource;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESLiveAudioAvatarView *avatarView;
@property (retain, nonatomic) UIView *seatsView;
@property (retain, nonatomic) IESLiveVideoPlayerController *playerController;
@property (retain, nonatomic) CAGradientLayer *videoMaskLayer;
@property (retain, nonatomic) CAGradientLayer *breathGradientLayer;
@property (retain, nonatomic) NSMutableArray *defaultColors;
@property (copy, nonatomic) NSArray *targetColors;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *fullStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAvatarAnimationWithUrls:(id)arg0;
- (void)setSeatsView:(id)arg0;
- (id)seatsView;
- (void)setKTVBackgroundDefaultInfo:(id)arg0;
- (void)setBackgroundWithUrls:(id)arg0;
- (void)setTargetColors:(id)arg0;
- (void)setDefaultColors:(id)arg0;
- (id)breathGradientLayer;
- (void)setFullStage:(id)arg0;
- (id)fullStage;
- (id)videoMaskLayer;
- (void)startBreathAnimationWithColors:(id)arg0;
- (id)defaultColors;
- (id)sortColor:(id)arg0;
- (void)animationRunloop;
- (id)targetColors;
- (void)setVideoMaskLayer:(id)arg0;
- (void)setBreathGradientLayer:(id)arg0;
- (void)setDataSource:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)dataSource;
- (id)avatarView;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)playerController;
- (void)setPlayerController:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (void)setupViews;
- (void)setContentBackgroundColor:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 dataSource:(id)arg1;

@end
