//
//     Generated by private class-dump
//

@class UIButton, NSString, UITapGestureRecognizer, UIView, RTVFeedTracker;
@protocol RTVInteractionController, RTVFeedControllerInterface, RTVInteractionTipsController, RTVXRRoomSessionControllerInterface, RTVStateRecorder, RTVXRCaptureController, RTVInteractionToolBarControllerViewControllerDelegate, RTVInteractionConfigureManagerInterface, RTVInteractionContainerController, RTVVoipResourceFetcherInterface, RTVFeedContentController, RTVFeedHotReminderControllerInterface, RTVXRControllerInjector, RTVUserProfileManagerInterface, RTVFeedManagerInterface, RxInjector, RTVXRStateRecorder;

@interface RTVInteractionBottomBarViewController : UIViewController <RTVInteractionToolBarViewController, RTVXRCaptureControllerObserver, RTVXRControllerInterface, RTVXRRoomSessionControllerObserver, RTVInteractionControllerObserver> {
    id<RTVInteractionToolBarControllerViewControllerDelegate> _delegate;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RxInjector> _injector;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVXRCaptureController> _captureController;
    id<RTVInteractionController> _interactionController;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    RTVFeedTracker *_feedTracker;
    UIView *_contentView;
    UIView *_backCapsuleView;
    UIButton *_inviteFriendButton;
    UIButton *_castButton;
    UIButton *_sendButton;
    UIButton *_muteButton;
    UIButton *_emojiButton;
    UIButton *_moreButton;
    UIView *_muteButtonAccessoryView;
    long long _audioVolumeAnimatingValue;
    long long _audioVolumeAnimatingVersion;
    id<RTVFeedHotReminderControllerInterface> _hotReminderController;
    NSString *_tipShowingRequestIdentifier;
    id<RTVStateRecorder> _stateRecorder;
    id<RTVXRStateRecorder> _xrStateRecorder;
    NSString *_displayReadyToken;
    id<RTVFeedManagerInterface> _feedManager;
    id<RTVFeedContentController> _feedContentController;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigureManager;
    id<RTVInteractionContainerController> _interactionContainerController;
    id<RTVFeedControllerInterface> _feedController;
    UITapGestureRecognizer *_tapGesture;
    id<RTVInteractionTipsController> _tipsController;
    id<RTVInteractionConfigureManagerInterface> _configureManager;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) RTVFeedTracker *feedTracker;
@property (readonly, copy, nonatomic) NSString *currentProfileIMID;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *backCapsuleView;
@property (readonly, nonatomic) UIButton *inviteFriendButton;
@property (readonly, nonatomic) UIButton *castButton;
@property (readonly, nonatomic) UIButton *sendButton;
@property (readonly, nonatomic) UIButton *muteButton;
@property (readonly, nonatomic) UIButton *emojiButton;
@property (readonly, nonatomic) UIButton *moreButton;
@property (readonly, nonatomic) UIView *muteButtonAccessoryView;
@property (nonatomic) long long audioVolumeAnimatingValue;
@property (nonatomic) long long audioVolumeAnimatingVersion;
@property (readonly, weak, nonatomic) id<RTVFeedHotReminderControllerInterface> hotReminderController;
@property (copy, nonatomic) NSString *tipShowingRequestIdentifier;
@property (readonly, weak, nonatomic) id<RTVStateRecorder> stateRecorder;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (copy, nonatomic) NSString *displayReadyToken;
@property (readonly, nonatomic) id<RTVFeedManagerInterface> feedManager;
@property (readonly, weak, nonatomic) id<RTVFeedContentController> feedContentController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, weak, nonatomic) id<RTVInteractionContainerController> interactionContainerController;
@property (readonly, weak, nonatomic) id<RTVFeedControllerInterface> feedController;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, weak, nonatomic) id<RTVInteractionTipsController> tipsController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) BOOL supportInviteOutsideUser;
@property (weak, nonatomic) id<RTVInteractionToolBarControllerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__addObservers;
- (id)resourceFetcher;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)feedController;
- (id)inviteFriendButton;
- (BOOL)supportInviteOutsideUser;
- (id)controllerInjector;
- (id)currentProfileIMID;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)configureManager;
- (id)xrStateRecorder;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (id)roomController;
- (id)stateRecorder;
- (id)interactionConfigureManager;
- (void)rtvSession:(id)arg0 participatorsDidChange:(id)arg1 oldParticipators:(id)arg2;
- (void)roomController:(id)arg0 didUpdateTextChatInfo:(id)arg1 withBusinessModel:(id)arg2;
- (void)__updateComponents;
- (void)showInputViewController;
- (id)toolBarMoreButton;
- (id)toolBarCastButton;
- (id)tipsController;
- (void)xrCaptureController:(id)arg0 didChangeToMicrophoneMuted:(BOOL)arg1;
- (void)xrCaptureController:(id)arg0 didReceiveSpeakerAudioVolumUpdates:(id)arg1 totalVolume:(unsigned long long)arg2;
- (id)feedContentController;
- (id)feedTracker;
- (void)__showFeedTips;
- (void)setDisplayReadyToken:(id)arg0;
- (void)__dismissTipBubbleIfNeededWithAnimated:(BOOL)arg0;
- (id)displayReadyToken;
- (id)tipShowingRequestIdentifier;
- (id)hotReminderController;
- (void)__doShowHotFeedTips:(id)arg0;
- (id)interactionContainerController;
- (void)setTipShowingRequestIdentifier:(id)arg0;
- (id)castButton;
- (BOOL)__shouldShowInputViewController;
- (void)__updateMuteButtonMuted:(BOOL)arg0;
- (id)muteButtonAccessoryView;
- (long long)audioVolumeAnimatingValue;
- (void)setAudioVolumeAnimatingValue:(long long)arg0;
- (long long)audioVolumeAnimatingVersion;
- (void)setAudioVolumeAnimatingVersion:(long long)arg0;
- (id)backCapsuleView;
- (void)__showLongVideoSupportTip;
- (void)__startMuteButtonAccessoryAnimationWithVolume:(unsigned long long)arg0;
- (void)__stopMuteButtonAccessoryAnimation;
- (void)buttonTapped:(id)arg0;
- (void).cxx_destruct;
- (id)moreButton;
- (id)tapGesture;
- (id)contentView;
- (id)injector;
- (id)delegate;
- (id)captureController;
- (id)interactionController;
- (id)feedManager;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)sendButton;
- (id)emojiButton;
- (id)muteButton;
- (id)profileManager;

@end
