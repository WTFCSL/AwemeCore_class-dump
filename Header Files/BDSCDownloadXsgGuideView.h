//
//     Generated by private class-dump
//

@class BDSCGradientColorView, NSString, BDSCVideoPlayer, BDByteScreenCastContext, UIView, BDSCImageView, UILabel;

@interface BDSCDownloadXsgGuideView : UIView <UIGestureRecognizerDelegate, BDSCVideoPlayerDelegate> {
    BOOL _isLandscape;
    BDByteScreenCastContext *_context;
    double _containerHeight;
    id /* block */ _blankAreaDidTapBlock;
    id /* block */ _playerDidPlayBlock;
    id /* block */ _playerDidStopBlock;
    id /* block */ _jumpDownloadBlock;
    NSString *_type;
    BDSCVideoPlayer *_playerView;
    UIView *_containerView;
    BDSCImageView *_titleImageView;
    BDSCImageView *_waveImageView;
    UILabel *_firstStepTitleLabel;
    UILabel *_firstStepInfoLabel;
    UILabel *_secondStepTitleLabel;
    BDSCImageView *_jumpDownloadImageView;
    BDSCGradientColorView *_gradientView;
}

@property (retain, nonatomic) BDSCVideoPlayer *playerView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDSCImageView *titleImageView;
@property (retain, nonatomic) BDSCImageView *waveImageView;
@property (retain, nonatomic) UILabel *firstStepTitleLabel;
@property (retain, nonatomic) UILabel *firstStepInfoLabel;
@property (retain, nonatomic) UILabel *secondStepTitleLabel;
@property (retain, nonatomic) BDSCImageView *jumpDownloadImageView;
@property (retain, nonatomic) BDSCGradientColorView *gradientView;
@property (weak, nonatomic) BDByteScreenCastContext *context;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double containerHeight;
@property (copy, nonatomic) id /* block */ blankAreaDidTapBlock;
@property (copy, nonatomic) id /* block */ playerDidPlayBlock;
@property (copy, nonatomic) id /* block */ playerDidStopBlock;
@property (copy, nonatomic) id /* block */ jumpDownloadBlock;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pausePlayer;
- (id /* block */)blankAreaDidTapBlock;
- (id /* block */)playerDidPlayBlock;
- (id /* block */)playerDidStopBlock;
- (void)setupPlayerResource;
- (id)waveImageView;
- (id)firstStepTitleLabel;
- (id)firstStepInfoLabel;
- (id)secondStepTitleLabel;
- (id)jumpDownloadImageView;
- (id)generateSpaceAttributedStringWithSize:(struct CGSize { double x0; double x1; })arg0;
- (id)titleLabelStringWithText:(id)arg0 image:(id)arg1;
- (id /* block */)jumpDownloadBlock;
- (id)handleSchemeString:(id)arg0;
- (void)bdscPlayer:(id)arg0 didChangePlayerStatus:(unsigned long long)arg1;
- (void)bdscPlayerVideoDidFinish:(id)arg0;
- (void)setBlankAreaDidTapBlock:(id /* block */)arg0;
- (void)setPlayerDidPlayBlock:(id /* block */)arg0;
- (void)setPlayerDidStopBlock:(id /* block */)arg0;
- (void)setJumpDownloadBlock:(id /* block */)arg0;
- (void)setWaveImageView:(id)arg0;
- (void)setFirstStepTitleLabel:(id)arg0;
- (void)setFirstStepInfoLabel:(id)arg0;
- (void)setSecondStepTitleLabel:(id)arg0;
- (void)setJumpDownloadImageView:(id)arg0;
- (void)removeFromSuperview;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)type;
- (void)setGradientView:(id)arg0;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (id)titleImageView;
- (id)context;
- (void)hide;
- (BOOL)isLandscape;
- (void)willResignActive:(id)arg0;
- (BOOL)isPlaying;
- (id)playerView;
- (void)dealloc;
- (void)setPlayerView:(id)arg0;
- (id)gradientView;
- (void)show:(BOOL)arg0;
- (void)setupSubviews;
- (void)setTitleImageView:(id)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;

@end
