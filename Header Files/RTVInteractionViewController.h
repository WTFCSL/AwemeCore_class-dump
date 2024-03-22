//
//     Generated by private class-dump
//

@class NSString, UIViewController, NSMutableSet;
@protocol RTVInteractionTipsController, RTVInteractionControlViewController, __RTVVoipContextManagerPrivateInterface, RTVInteractionController, RTVXRContainer, RTVXRRoomSessionControllerInterface, RTVInteractionPreviewContainerController, RTVChatController, RTVXRInteractionController, RxInjector, RTVInteractionRecorder, RTVXRControllerInjector, RTVUserProfileManagerInterface, RTVInteractionCastService, RTVInteractionSendMessageActionControllerInterface, RTVInteractionConfigureManagerInterface, RTVInteractionContentController, RTVPIPControllerInterface, RTVXRStateRecorder, RTVXRBusinessContextDelegate, RTVSessionPreviewProcotol, RTVInteractionContext;

@interface RTVInteractionViewController : UIViewController <RTVInteractionContainerController, RTVInteractionContentDelegate, RTVInteractionTipsControllerDelegate, RTVInteractionControlViewControllerObserver, RTVPiPControllerDelegate, RTVInteractionCastServiceContainerDelegate, RTVInteractionSendMessageActionControllerDelegate, RTVXRRoomSessionControllerObserver> {
    BOOL isActive;
    BOOL _disableInternalContentCreation;
    UIViewController<RTVXRContainer> *voipSessionController;
    id<RTVXRBusinessContextDelegate> delegate;
    UIViewController<RTVInteractionContentController> *_contentViewController;
    id<RTVInteractionCastService> _interactionCastService;
    UIViewController<RTVInteractionPreviewContainerController> *_previewContainer;
    UIViewController<RTVInteractionControlViewController> *_controlviewController;
    id<RTVInteractionSendMessageActionControllerInterface> _sendMessageActionController;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVInteractionController> _interactionController;
    id<RTVXRInteractionController> _xrInteractionController;
    id<__RTVVoipContextManagerPrivateInterface> _voipContextCenter;
    id<RTVXRStateRecorder> _xrStateRecorder;
    id<RTVInteractionRecorder> _interactionStateRecorder;
    id<RTVChatController> _chatController;
    id<RTVPIPControllerInterface> _PiPController;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigureManager;
    id<RTVUserProfileManagerInterface> _profileManager;
    NSMutableSet *_ontheCallPaticipatorIDs;
    id<RTVSessionPreviewProcotol> _session;
    id<RTVInteractionContext> _context;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVInteractionTipsController> _tipsController;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _safeAreaInsetsInPortrait;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _safeAreaInsetsInLandscape;
}

@property (retain, nonatomic) UIViewController<RTVInteractionContentController> *contentViewController;
@property (readonly, nonatomic) id<RTVInteractionCastService> interactionCastService;
@property (readonly, weak, nonatomic) UIViewController<RTVInteractionPreviewContainerController> *previewContainer;
@property (readonly, weak, nonatomic) UIViewController<RTVInteractionControlViewController> *controlviewController;
@property (readonly, weak, nonatomic) id<RTVInteractionSendMessageActionControllerInterface> sendMessageActionController;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> xrInteractionController;
@property (readonly, nonatomic) id<__RTVVoipContextManagerPrivateInterface> voipContextCenter;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, weak, nonatomic) id<RTVInteractionRecorder> interactionStateRecorder;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, nonatomic) id<RTVPIPControllerInterface> PiPController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) NSMutableSet *ontheCallPaticipatorIDs;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) id<RTVInteractionContext> context;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVInteractionTipsController> tipsController;
@property (nonatomic) BOOL disableInternalContentCreation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsInPortrait;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsInLandscape;
@property (retain, nonatomic) UIViewController<RTVXRContainer> *voipSessionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVXRBusinessContextDelegate> delegate;
@property (nonatomic) BOOL isActive;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)contentVC;
- (id)PiPController;
- (id)controllerInjector;
- (id)transitionToInterfaceOrientations:(BOOL)arg0;
- (id)xrStateRecorder;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (void)notifyChangeActive:(BOOL)arg0;
- (void)notifyDidChangeActive:(BOOL)arg0;
- (id)xrInteractionController;
- (void)castVideoPanelController:(id)arg0 showPanelViewController:(id)arg1;
- (id)roomController;
- (void)castVideoPanelController:(id)arg0 dismissPanelViewController:(id)arg1;
- (id)interactionStateRecorder;
- (id)sendMessageActionController;
- (BOOL)currentInterfaceOrientationIsPortait;
- (id)interactionConfigureManager;
- (id)ontheCallPaticipatorIDs;
- (void)interactionControlViewController:(id)arg0 actionTypeTriggered:(unsigned long long)arg1;
- (void)rtvSession:(id)arg0 participatorsDidChange:(id)arg1 oldParticipators:(id)arg2;
- (void)renderWithBusinessHandler:(id)arg0 context:(id)arg1;
- (void)switchFullScreenWithAnimator:(id)arg0;
- (void)switchNarrowWithAnimator:(id)arg0;
- (id)layoutTransitionDelegate;
- (void)willSwitchToNarrow:(BOOL)arg0;
- (void)didSwitchToNarrow:(BOOL)arg0;
- (id)customPreview;
- (id)extraBusinessInfoWithNavigateTransitionType:(unsigned long long)arg0;
- (id)tipsContainerView;
- (void)disableInternalContentVC;
- (void)reinstallContentViewController:(id)arg0;
- (void)assignContentViewController:(id)arg0;
- (void)updatePureMode:(long long)arg0 withAnimator:(id)arg1;
- (id)voipSessionController;
- (void)setVoipSessionController:(id)arg0;
- (id)dismissInterruptAndResignKeyWindow;
- (BOOL)isNarrowWindowVerticalAlignBottom;
- (void)foldInteraction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetNarrowRect;
- (id)interactionCastService;
- (void)__createInteractionCastService;
- (void)exitInteractionWithReason:(long long)arg0 delay:(BOOL)arg1;
- (id)tipsController;
- (void)setOntheCallPaticipatorIDs:(id)arg0;
- (void)__addChildViewController:(id)arg0;
- (void)setDisableInternalContentCreation:(BOOL)arg0;
- (BOOL)disableInternalContentCreation;
- (void)__updateSafeAreaInsetsIfNeeded:(BOOL)arg0;
- (void)__createContentViewController;
- (void)__createControlViewController;
- (void)__createPreviewContainer;
- (id)controlviewController;
- (void)__addContentViewController;
- (void)__layoutContentViewController;
- (BOOL)__currentOrientationLayoutIsPortrait;
- (double)__bottomOffsetForContentViewControllerWithOrientationIsPortrait:(BOOL)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsInPortrait;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsInLandscape;
- (void)setSafeAreaInsetsInPortrait:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setSafeAreaInsetsInLandscape:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)voipContextCenter;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })__currentSafeAreaInsets;
- (void)__onInteractionControlViewShareButtonClicked;
- (void)__laterDismiss:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialPreferredFrame;
- (id)childViewControllerForStatusBarStyle;
- (id)contentViewController;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setContentViewController:(id)arg0;
- (id)session;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)previewContainer;
- (id)injector;
- (id)delegate;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)interactionController;
- (id)context;
- (BOOL)isActive;
- (id)childViewControllerForStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize { double x0; double x1; })arg1;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (long long)containerType;
- (id)chatController;
- (id)profileManager;

@end
