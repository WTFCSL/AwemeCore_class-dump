//
//     Generated by private class-dump
//

@class UIButton, NSString, AWEChallengeNakedEye3DModel, UIImageView, UIView, BDImageView;
@protocol IESVideoPlayerProtocol;

@interface AWEChallengeDetailNakedEye3DView : UIView <IESVideoPlayerDelegate, AWEChallengeDetailNakedEye3DView> {
    BOOL _appDidResignActive;
    BOOL _isAnimatorDownloaded;
    BOOL _isVideoReadyToPlay;
    BOOL _isPlayCalledOnce;
    BOOL _isCurrentVCDidAppear;
    NSString *_tagID;
    AWEChallengeNakedEye3DModel *_model;
    id<IESVideoPlayerProtocol> _backgroundVideoPlayer;
    UIImageView *_videoCoverImageView;
    BDImageView *_foregroundAnimator;
    UIView *_gradientMaskView;
    UIButton *_replayButton;
}

@property (retain, nonatomic) AWEChallengeNakedEye3DModel *model;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> backgroundVideoPlayer;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) BDImageView *foregroundAnimator;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) UIButton *replayButton;
@property (nonatomic) BOOL appDidResignActive;
@property (nonatomic) BOOL isAnimatorDownloaded;
@property (nonatomic) BOOL isVideoReadyToPlay;
@property (nonatomic) BOOL isPlayCalledOnce;
@property (nonatomic) BOOL isCurrentVCDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *tagID;

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)playWhenAppear;
- (void)stopWhenDisappear;
- (id)videoCoverImageView;
- (id)foregroundAnimator;
- (void)setIsAnimatorDownloaded:(BOOL)arg0;
- (id)backgroundVideoPlayer;
- (id)gradientMaskView;
- (BOOL)isCurrentVCDidAppear;
- (BOOL)isVideoReadyToPlay;
- (BOOL)isAnimatorDownloaded;
- (BOOL)isPlayCalledOnce;
- (void)setIsPlayCalledOnce:(BOOL)arg0;
- (void)setIsCurrentVCDidAppear:(BOOL)arg0;
- (void)playIfNotPlayed;
- (void)setAppDidResignActive:(BOOL)arg0;
- (BOOL)appDidResignActive;
- (void)setIsVideoReadyToPlay:(BOOL)arg0;
- (void)contentTapped:(id)arg0;
- (void)replayButtonClicked;
- (void)setBackgroundVideoPlayer:(id)arg0;
- (void)setVideoCoverImageView:(id)arg0;
- (void)setForegroundAnimator:(id)arg0;
- (void)setGradientMaskView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)tagID;
- (void)setTagID:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;
- (id)replayButton;
- (void)setReplayButton:(id)arg0;

@end