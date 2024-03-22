//
//     Generated by private class-dump
//

@class UIView, IESLiveVideoGiftController, AWEAwemeModel, NSString, UIButton, LOTAnimationView, LOTComposition, IESLiveVideoGiftMetalConfiguration, UIVisualEffectView;

@interface AWECampaignBigRedPacketViewController : UIViewController <IESLiveVideoGiftControllerDelegate> {
    BOOL _isShowing;
    BOOL _didAppeared;
    BOOL _hasErrorOccurred;
    AWEAwemeModel *_awemeModel;
    id /* block */ _closeBlock;
    id /* block */ _tapBlock;
    LOTAnimationView *_animationView;
    IESLiveVideoGiftController *_redpacketAlphaPlayer;
    UIButton *_closeButton;
    LOTComposition *_lottie;
    IESLiveVideoGiftMetalConfiguration *_alphaPlayerConfig;
    UIVisualEffectView *_backgroundView;
    UIView *_containerView;
}

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) IESLiveVideoGiftController *redpacketAlphaPlayer;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) LOTComposition *lottie;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *alphaPlayerConfig;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL didAppeared;
@property (nonatomic) BOOL hasErrorOccurred;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setIsShowing:(BOOL)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)didFinishPlayingWithError:(id)arg0;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (BOOL)didAppeared;
- (void)setDidAppeared:(BOOL)arg0;
- (void)feedContainerViewControllerDidSwitchTab:(id)arg0;
- (id)lottie;
- (void)setLottie:(id)arg0;
- (void)contentTapped;
- (void)setAlphaPlayerConfig:(id)arg0;
- (id)alphaPlayerConfig;
- (void)onLongPressGesture;
- (void)setupAnimationUI;
- (void)trackInteractiveVideoActionLogWithMessage:(id)arg0;
- (id)redpacketAlphaPlayer;
- (void)tryToPlayAlphaVideo;
- (BOOL)hasErrorOccurred;
- (void)setHasErrorOccurred:(BOOL)arg0;
- (void)monitorService:(id)arg0 status:(unsigned long long)arg1 level:(unsigned long long)arg2 error:(id)arg3 extraInfo:(id)arg4 campaignID:(id)arg5;
- (void)closeButClicked;
- (id)initWithLottie:(id)arg0;
- (id)initWithAlphaPlayerConfiguration:(id)arg0;
- (void)setRedpacketAlphaPlayer:(id)arg0;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (void)addObservers;

@end