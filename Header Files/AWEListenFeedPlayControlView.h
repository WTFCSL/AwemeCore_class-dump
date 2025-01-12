//
//     Generated by private class-dump
//

@class CABasicAnimation, UILabel, NSMapTable, AWEListenFeedPlayControlItemView, AWEListenFeedButton, UIView, AWEButton, UILongPressGestureRecognizer, NSString, AWEAwemePlayInteractionInteractor, UIStackView, AWEListenFeedContext, AWEAwemeModel, LOTAnimationView, UIImageView;
@protocol AWEListenFeedProgressViewProtocol, AWEListenFeedPlayControlViewDelegate;

@interface AWEListenFeedPlayControlView : UIView <AWEListenFeedProgressViewDelegate, AWEListenFeedValueAdjustPopupViewDelegate> {
    BOOL _favoriteAnimationInProgress;
    UIView<AWEListenFeedProgressViewProtocol> *_progressView;
    id<AWEListenFeedPlayControlViewDelegate> _delegate;
    unsigned long long _playStyle;
    AWEAwemeModel *_model;
    AWEListenFeedContext *_context;
    AWEAwemePlayInteractionInteractor *_interactor;
    UIStackView *_topStackView;
    UIStackView *_bottomStackView;
    AWEListenFeedPlayControlItemView *_timingButton;
    AWEListenFeedPlayControlItemView *_favoriteButton;
    AWEButton *_playStyleNewButton;
    AWEButton *_rewindButton;
    UIImageView *_rewindFifteenImageView;
    AWEButton *_forwardButton;
    UIImageView *_forwardFifteenImageView;
    UIImageView *_forwardImageView;
    AWEButton *_playListButton;
    UIStackView *_fastModeStackView;
    UILabel *_fastModeLabel;
    LOTAnimationView *_fastModeAnimationView;
    CABasicAnimation *_rotateAnimation;
    LOTAnimationView *_favoriteAnimationView;
    UILongPressGestureRecognizer *_forwardButtonLongPressGesture;
    NSMapTable *_forbidViewMapTable;
    unsigned long long _playStatus;
    AWEListenFeedPlayControlItemView *_speedButton;
    AWEListenFeedButton *_playButton;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (retain, nonatomic) AWEAwemePlayInteractionInteractor *interactor;
@property (retain, nonatomic) UIStackView *topStackView;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (retain, nonatomic) AWEListenFeedPlayControlItemView *timingButton;
@property (retain, nonatomic) AWEListenFeedPlayControlItemView *favoriteButton;
@property (retain, nonatomic) AWEButton *playStyleNewButton;
@property (retain, nonatomic) AWEButton *rewindButton;
@property (retain, nonatomic) UIImageView *rewindFifteenImageView;
@property (retain, nonatomic) AWEButton *forwardButton;
@property (retain, nonatomic) UIImageView *forwardFifteenImageView;
@property (retain, nonatomic) UIImageView *forwardImageView;
@property (retain, nonatomic) AWEButton *playListButton;
@property (retain, nonatomic) UIStackView *fastModeStackView;
@property (retain, nonatomic) UILabel *fastModeLabel;
@property (retain, nonatomic) LOTAnimationView *fastModeAnimationView;
@property (retain, nonatomic) CABasicAnimation *rotateAnimation;
@property (retain, nonatomic) LOTAnimationView *favoriteAnimationView;
@property (nonatomic) BOOL favoriteAnimationInProgress;
@property (retain, nonatomic) UILongPressGestureRecognizer *forwardButtonLongPressGesture;
@property (copy, nonatomic) NSMapTable *forbidViewMapTable;
@property (nonatomic) unsigned long long playStatus;
@property (nonatomic) unsigned long long playStyle;
@property (retain, nonatomic) AWEListenFeedPlayControlItemView *speedButton;
@property (retain, nonatomic) AWEListenFeedButton *playButton;
@property (retain, nonatomic) UIView<AWEListenFeedProgressViewProtocol> *progressView;
@property (weak, nonatomic) id<AWEListenFeedPlayControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableLongPressGesture;
- (BOOL)alertIfNotValid;
- (void)speedButtonClicked:(id)arg0;
- (unsigned long long)playStatus;
- (void)setPlayStatus:(unsigned long long)arg0;
- (id)rotateAnimation;
- (void)doActionIfNotValid;
- (void)doActionIfNotValidWithText:(id)arg0;
- (id)speedButton;
- (void)setSpeedButton:(id)arg0;
- (id)realAweme;
- (BOOL)favoriteAnimationInProgress;
- (void)setFavoriteAnimationView:(id)arg0;
- (id)favoriteAnimationView;
- (void)setFavoriteAnimationInProgress:(BOOL)arg0;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (id)logExtraDictWithDict:(id)arg0;
- (void)addLongPressGesture;
- (void)onAwemeFavoriteNotification:(id)arg0;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 context:(id)arg2;
- (void)updatePlayStatus:(unsigned long long)arg0;
- (void)updateCurrentTime:(double)arg0 totalTime:(double)arg1;
- (unsigned long long)playStyle;
- (void)setForbidViewMapTable:(id)arg0;
- (id)fastModeStackView;
- (void)setupUITopStackView:(id)arg0;
- (void)setupUIBottomStackView:(id)arg0;
- (id)timingButton;
- (void)updateConstraintsControlItemView:(id)arg0 withSize:(struct CGSize { double x0; double x1; })arg1;
- (void)remakeConstraintsActionButton:(id)arg0 withSize:(struct CGSize { double x0; double x1; })arg1;
- (id)playStyleNewButton;
- (id)playListButton;
- (id)rewindFifteenImageView;
- (id)forwardFifteenImageView;
- (id)forwardImageView;
- (long long)currentBottomStackSideInterval;
- (long long)currentBottomStackMidInterval;
- (id)createProgressView;
- (void)setPlayStyle:(unsigned long long)arg0;
- (void)updatePopupViewDelegateIfNeed;
- (void)updateSpeedEntranceWhenLonePressSpeedOptimize:(double)arg0;
- (void)updateSpeedEntrance:(id)arg0;
- (void)updatePlayStyle:(unsigned long long)arg0;
- (void)updateFavoriteEntrance;
- (void)updateTimingEntrance;
- (void)resetForwardButtonLongPressGesture;
- (void)updateCurrentTimeWithoutAnimation:(double)arg0 totalTime:(double)arg1;
- (id)forwardButtonLongPressGesture;
- (void)fastModeDidLongPress:(id)arg0;
- (void)setForwardButtonLongPressGesture:(id)arg0;
- (id)setSecondPageTrackParamsIfNeedWithParams:(id)arg0;
- (void)doSafeFavorite:(BOOL)arg0 enterMethod:(id)arg1 ignoreUnlogin:(BOOL)arg2 animationBlock:(id /* block */)arg3;
- (void)playStyleButtonClicked:(id)arg0;
- (id)forbidViewMapTable;
- (id)fastModeLabel;
- (id)fastModeAnimationView;
- (void)handleForbidViews:(id)arg0 isRecord:(BOOL)arg1;
- (void)p_stopFavoriteAnimation;
- (void)p_playFavoriteAnimation;
- (void)p_playUnFavoriteAnimation;
- (void)timingDidClick;
- (void)favoriteDidClick;
- (void)newPlayStyleDidClick;
- (void)rewindDidClick;
- (void)forwardDidClick;
- (void)playListDidClick;
- (void)listenFeedProgressView:(id)arg0 sliderTouchBegan:(id)arg1;
- (void)listenFeedProgressView:(id)arg0 sliderValueChanged:(id)arg1;
- (void)listenFeedProgressView:(id)arg0 sliderTouchEnded:(id)arg1;
- (void)popupViewDismiss:(id)arg0;
- (void)popupViewValueChosed:(id)arg0;
- (void)setTimingButton:(id)arg0;
- (void)setPlayStyleNewButton:(id)arg0;
- (void)setRewindFifteenImageView:(id)arg0;
- (void)setForwardFifteenImageView:(id)arg0;
- (void)setForwardImageView:(id)arg0;
- (void)setPlayListButton:(id)arg0;
- (void)setFastModeStackView:(id)arg0;
- (void)setFastModeLabel:(id)arg0;
- (void)setFastModeAnimationView:(id)arg0;
- (void)setRotateAnimation:(id)arg0;
- (void)setModel:(id)arg0;
- (id)interactor;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setInteractor:(id)arg0;
- (id)delegate;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)context;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;
- (id)playButton;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;
- (id)bottomStackView;
- (void)setBottomStackView:(id)arg0;
- (void)setPlayButton:(id)arg0;
- (void)playButtonClicked:(id)arg0;
- (id)rewindButton;
- (void)setRewindButton:(id)arg0;
- (id)forwardButton;
- (void)setForwardButton:(id)arg0;
- (id)topStackView;
- (void)setTopStackView:(id)arg0;

@end
