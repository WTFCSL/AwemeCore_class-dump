//
//     Generated by private class-dump
//

@class UIView, AWEVideoPlayerController, NSString, AWEButton, AFDCloseFriendsWidgetCreateGuideModel, AFDModalViewHelper, UIButton, AWEUILoadingView, NSDictionary, AVPlayerLayer, UILabel, AVPlayer;

@interface AFDCloseFriendsWidgetCreateGuideViewController : UIViewController <AWEPanelTransitionWithBackground, AWEVideoPlayerControllerDelegate, AWERouterViewControllerProtocol> {
    BOOL _playing;
    id /* block */ _dismissBlock;
    AFDModalViewHelper *_helper;
    UIButton *_closeButton;
    UILabel *_descriptionTextLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AWEButton *_nextButton;
    long long _currentStep;
    UIView *_videoContainerView;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AWEVideoPlayerController *_playerController;
    AWEUILoadingView *_playerLoadingView;
    NSString *_insertItemID;
    NSDictionary *_eventParam;
    NSString *_guideLoadType;
    unsigned long long _maxGuideStep;
    AFDCloseFriendsWidgetCreateGuideModel *_model;
}

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *descriptionTextLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEButton *nextButton;
@property (nonatomic) long long currentStep;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AWEVideoPlayerController *playerController;
@property (retain, nonatomic) AWEUILoadingView *playerLoadingView;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) NSString *insertItemID;
@property (retain, nonatomic) NSDictionary *eventParam;
@property (retain, nonatomic) NSString *guideLoadType;
@property (nonatomic) unsigned long long maxGuideStep;
@property (retain, nonatomic) AFDCloseFriendsWidgetCreateGuideModel *model;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)presentedViewPanFinished;
- (void)playbackDidFinishForURL:(id)arg0;
- (void)preparedToPlayForURL:(id)arg0;
- (void)closeButtonClicked:(id)arg0;
- (void)setVideoContainerView:(id)arg0;
- (id)initWithEventParam:(id)arg0 model:(id)arg1;
- (id)initWithInsertItemID:(id)arg0 eventParam:(id)arg1 model:(id)arg2;
- (void)setupMaxGuideStep;
- (BOOL)isHitModel;
- (id)eventParam;
- (void)trackWidgetGuideShowWithParams:(id)arg0;
- (id)guideLoadType;
- (void)trackWidgetGuideClickWithTarget:(id)arg0;
- (void)markCloseCountWithFromNextButton:(BOOL)arg0;
- (unsigned long long)maxGuideStep;
- (id)insertItemID;
- (void)__configPlayer;
- (id)playerLoadingView;
- (void)setPlayerLoadingView:(id)arg0;
- (void)nextButtonClicked:(id)arg0;
- (void)handleAppBecomeActiveNotification;
- (void)handleAppResignActiveNotification;
- (void)setInsertItemID:(id)arg0;
- (void)setEventParam:(id)arg0;
- (void)setGuideLoadType:(id)arg0;
- (void)setMaxGuideStep:(unsigned long long)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (long long)currentStep;
- (id)init;
- (id)playerLayer;
- (void)viewDidAppear:(BOOL)arg0;
- (void)setCurrentStep:(long long)arg0;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (id)model;
- (id)playerController;
- (id)titleLabel;
- (id)helper;
- (id)subtitleLabel;
- (void)setPlayerController:(id)arg0;
- (void)setPlayer:(id)arg0;
- (BOOL)isPlaying;
- (void)setPlayerLayer:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setPlaying:(BOOL)arg0;
- (id)player;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)descriptionTextLabel;
- (void)setDescriptionTextLabel:(id)arg0;
- (id)videoContainerView;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
