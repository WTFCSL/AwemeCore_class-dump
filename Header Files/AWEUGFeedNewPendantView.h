//
//     Generated by private class-dump
//

@class AWEFeedPendantPopoverView, NSString, AWEFeedPendantTransitionLottieView, UIView, AWEUGPendantModel;
@protocol AWEUGPendantCloseButtonProtocol, AWEUGPendantContentProtocol, AWEUGPendantCapsuleProtocol, AWEUGPendantProgressProtocol;

@interface AWEUGFeedNewPendantView : AWEUGFeedPendantView {
    BOOL isMovingPendant;
    BOOL _hasGestureRecognizer;
    id /* block */ closeTapHandler;
    id /* block */ contentTapHandler;
    id /* block */ animationFrameHandler;
    id /* block */ edgedBubbleTapHandler;
    id /* block */ bubbleTapHandler;
    unsigned long long _structureState;
    UIView<AWEUGPendantContentProtocol> *_contentView;
    AWEFeedPendantTransitionLottieView *_transitionView;
    UIView<AWEUGPendantCloseButtonProtocol> *_dismissButton;
    UIView<AWEUGPendantCapsuleProtocol> *_capsuleView;
    UIView<AWEUGPendantCapsuleProtocol> *_countDownView;
    UIView<AWEUGPendantProgressProtocol> *_expandProgressView;
    UIView<AWEUGPendantProgressProtocol> *_foldProgressView;
    AWEFeedPendantPopoverView *_bubble;
    AWEUGPendantModel *_pendantModel;
    unsigned long long _capsuleState;
    NSString *_currentShowingUIKey;
    id /* block */ _contentPlaySuccessfullyHandler;
    id /* block */ _contentPlayFailedHandler;
}

@property (nonatomic) unsigned long long structureState;
@property (retain, nonatomic) UIView<AWEUGPendantContentProtocol> *contentView;
@property (retain, nonatomic) AWEFeedPendantTransitionLottieView *transitionView;
@property (retain, nonatomic) UIView<AWEUGPendantCloseButtonProtocol> *dismissButton;
@property (retain, nonatomic) UIView<AWEUGPendantCapsuleProtocol> *capsuleView;
@property (retain, nonatomic) UIView<AWEUGPendantCapsuleProtocol> *countDownView;
@property (retain, nonatomic) UIView<AWEUGPendantProgressProtocol> *expandProgressView;
@property (retain, nonatomic) UIView<AWEUGPendantProgressProtocol> *foldProgressView;
@property (retain, nonatomic) AWEFeedPendantPopoverView *bubble;
@property (retain, nonatomic) AWEUGPendantModel *pendantModel;
@property (nonatomic) BOOL hasGestureRecognizer;
@property (nonatomic) unsigned long long capsuleState;
@property (copy, nonatomic) NSString *currentShowingUIKey;
@property (copy, nonatomic) id /* block */ contentPlaySuccessfullyHandler;
@property (copy, nonatomic) id /* block */ contentPlayFailedHandler;

- (id)countDownView;
- (void)setCountDownView:(id)arg0;
- (id)viewWithKey:(id)arg0;
- (void)setupUIWithModel:(id)arg0;
- (void)updateUIWithModel:(id)arg0;
- (void)setupGestureRecognizer;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (id /* block */)contentTapHandler;
- (void)contentTapped;
- (void)playAnimationFromFrame:(id)arg0 toFrame:(id)arg1 loop:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)setContentTapHandler:(id /* block */)arg0;
- (BOOL)checkDataIfReadyUIWithModel:(id)arg0;
- (void)setPendantModel:(id)arg0;
- (void)setupContentViewWithModel:(id)arg0;
- (void)setupExpandProgressViewWithModel:(id)arg0;
- (void)setupFoldProgressViewWithModel:(id)arg0;
- (void)setupCapsuleWithModel:(id)arg0;
- (void)setupCountDownViewWithModel:(id)arg0;
- (void)setupCloseViewWithModel:(id)arg0;
- (void)setContentPlaySuccessfullyHandler:(id /* block */)arg0;
- (void)contentPlaySuccessfully;
- (void)setContentPlayFailedHandler:(id /* block */)arg0;
- (void)contentPlayFailed;
- (id /* block */)animationFrameHandler;
- (void)setAnimationFrameHandler:(id /* block */)arg0;
- (id)createTransitionView:(id)arg0 lottie:(id)arg1;
- (id)pendantModel;
- (void)setupTransitionViewWithModel:(id)arg0 lottie:(id)arg1;
- (void)checkButtonState:(id)arg0;
- (void)dismissButtonTapped;
- (unsigned long long)capsuleState;
- (unsigned long long)structureState;
- (id)expandProgressView;
- (void)setExpandProgressView:(id)arg0;
- (id)foldProgressView;
- (void)setFoldProgressView:(id)arg0;
- (void)setHasGestureRecognizer:(BOOL)arg0;
- (void)setIsMovingPendant:(BOOL)arg0;
- (BOOL)feedPendantEnableFold;
- (struct CGPoint { double x0; double x1; })safeAreaForPendant:(id)arg0;
- (void)tryAutoFoldPendant;
- (void)tryConsumeGesture;
- (double)heightToRightBottom;
- (double)heightToTop;
- (BOOL)isRightSide;
- (long long)feedPendantFoldType;
- (double)heightToLeftBottom;
- (void)setPendantStructureState:(unsigned long long)arg0 animation:(BOOL)arg1 complete:(id /* block */)arg2;
- (BOOL)hasGestureRecognizer;
- (id /* block */)contentPlaySuccessfullyHandler;
- (id /* block */)contentPlayFailedHandler;
- (id /* block */)closeTapHandler;
- (void)playLoopAniamtion;
- (void)setStructureState:(unsigned long long)arg0;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)playCapsuleAnimation;
- (void)playContentViewShowAnimation;
- (unsigned long long)p_adaptContentState:(unsigned long long)arg0;
- (id)currentShowingUIKey;
- (void)setCurrentShowingUIKey:(id)arg0;
- (unsigned long long)pendantStructureState;
- (id)getCurrentCapsuleView;
- (void)p_updateCountViewWith:(id)arg0 complete:(id /* block */)arg1;
- (void)p_updateCapsuleTextWith:(id)arg0 complete:(id /* block */)arg1;
- (void)p_updateProgressWithValue:(id)arg0 animated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)p_removeBubble:(id)arg0 complete:(id /* block */)arg1;
- (void)p_updateBubbleWithModel:(id)arg0 complete:(id /* block */)arg1;
- (void)bubbleTapped:(id)arg0;
- (id /* block */)bubbleTapHandler;
- (void)udpateTransitionViewWithLottie:(id)arg0 complete:(id /* block */)arg1;
- (unsigned long long)pendantShowState;
- (void)showTransitionViewFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 transitionType:(unsigned long long)arg2 animated:(BOOL)arg3 complete:(id /* block */)arg4 playComplete:(id /* block */)arg5;
- (void)updateUIWithUIInfo:(id)arg0 complete:(id /* block */)arg1;
- (void)showUIWithKey:(id)arg0 animate:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)updateCapsuleState:(unsigned long long)arg0;
- (void)updateUIWithKey:(id)arg0 string:(id)arg1 complete:(id /* block */)arg2;
- (void)updateUIWithKey:(id)arg0 value:(id)arg1 complete:(id /* block */)arg2;
- (void)updateUIWithKey:(id)arg0 value:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)updateUIWithKey:(id)arg0 model:(id)arg1 complete:(id /* block */)arg2;
- (void)setCloseTapHandler:(id /* block */)arg0;
- (BOOL)isMovingPendant;
- (id /* block */)edgedBubbleTapHandler;
- (void)setEdgedBubbleTapHandler:(id /* block */)arg0;
- (void)setBubbleTapHandler:(id /* block */)arg0;
- (void)setCapsuleState:(unsigned long long)arg0;
- (id)initWithModel:(id)arg0;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void).cxx_destruct;
- (void)setCapsuleView:(id)arg0;
- (void)pauseAnimation;
- (void)show;
- (id)contentView;
- (id)capsuleView;
- (void)hide;
- (void)dealloc;
- (void)setContentView:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (id)transitionView;
- (id)bubble;
- (void)setBubble:(id)arg0;
- (void)setTransitionView:(id)arg0;
- (void)handlePanGesture:(id)arg0;
- (void)setupNotifications;

@end
