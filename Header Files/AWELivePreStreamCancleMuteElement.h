//
//     Generated by private class-dump
//

@class UIView;
@protocol AFDMuteAwemeCancelViewProtocol;

@interface AWELivePreStreamCancleMuteElement : AWELiveLeftElement <AFDMuteAwemeMessage> {
    BOOL _isShowing;
    UIView<AFDMuteAwemeCancelViewProtocol> *_cancelMuteView;
}

@property (retain, nonatomic) UIView<AFDMuteAwemeCancelViewProtocol> *cancelMuteView;
@property (nonatomic) BOOL isShowing;

- (void)setIsShowing:(BOOL)arg0;
- (void)muteAwemeCanceled;
- (void)viewDidDisposed;
- (void)viewController_viewWillAppear;
- (void)prepareForDisPlay;
- (void)accessibilityElementAutomaticFocus;
- (id)slotIdentity;
- (unsigned long long)excludeStatus;
- (void)streamPlayer_startToPlay;
- (id)cancelMuteView;
- (void)p_shortenBottomArea:(double)arg0;
- (void)showAnimationMuteButton;
- (void)trackCancelMuteViewEvent:(id)arg0;
- (void)setCancelMuteView:(id)arg0;
- (void)recoverVoice;
- (void)didtappedCancelMuteView;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (void)prepareForReuse;
- (void)reset;
- (void)viewDidLoad;
- (int)priority;
- (void)showMuteButton;
- (void)clean;
- (void)layoutUI;

@end
