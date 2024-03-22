//
//     Generated by private class-dump
//

@class RTVInteractionPreviewListView, NSString, RTVInteractionTracker;
@protocol RTVInteractionController, RTVInteractionTipsController, RTVInteractionPreviewContainerConfigurator, RTVInteractionPreviewContainerMessageController, RTVXRRoomSessionControllerInterface, RTVInteractionControlViewController, RTVInteractionConfigureManagerInterface, RTVInteractionPreviewContentDelegate, RTVUserProfileManagerInterface, RTVInteractionPreviewContainerPariticipantsController, RTVSessionPreviewProcotol, RTVXRControllerInjector, RTVInteractionPreviewContentContext, RxInjector, RTVInteractionRecorder;

@interface RTVInteractionPreviewContainer : UIView <RTVXRControllerInterface, RTVVoipSessionObserver, RTVInteractionPreviewListViewDelegate, RTVInteractionPreviewFullContent> {
    BOOL _active;
    id<RTVInteractionPreviewContentDelegate> delegate;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVInteractionController> _interactionController;
    id<RTVInteractionConfigureManagerInterface> _configureManager;
    id<RTVInteractionPreviewContainerConfigurator> _previewContainerConfigure;
    id<RTVInteractionPreviewContainerPariticipantsController> _pariticipantsController;
    id<RTVInteractionPreviewContainerMessageController> _messageController;
    id<RTVInteractionControlViewController> _interactionControlViewController;
    RTVInteractionTracker *_tracker;
    id<RTVInteractionRecorder> _interactionStateRecorder;
    id<RTVSessionPreviewProcotol> _session;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVInteractionPreviewContentContext> _context;
    id<RTVUserProfileManagerInterface> _profileManager;
    RTVInteractionPreviewListView *_previewListView;
    id<RTVInteractionTipsController> _tipsController;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerConfigurator> previewContainerConfigure;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerPariticipantsController> pariticipantsController;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerMessageController> messageController;
@property (readonly, weak, nonatomic) id<RTVInteractionControlViewController> interactionControlViewController;
@property (readonly, nonatomic) RTVInteractionTracker *tracker;
@property (readonly, weak, nonatomic) id<RTVInteractionRecorder> interactionStateRecorder;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVInteractionPreviewContentContext> context;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVInteractionPreviewListView *previewListView;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) id<RTVInteractionTipsController> tipsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionPreviewContentDelegate> delegate;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)__createComponents;
- (void)__configComponents;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)configureManager;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (id)roomController;
- (id)interactionStateRecorder;
- (id)interactionControlViewController;
- (BOOL)showInviteGuideTipsView:(id)arg0;
- (id)tipsController;
- (void)deactivatePreview;
- (void)beginGestureInteractionWithType:(unsigned long long)arg0;
- (void)endGestureInteractionWithType:(unsigned long long)arg0;
- (void)updateLayoutWithContentHeight:(double)arg0;
- (double)minPreviewHeight;
- (void)notifyChangeToActive:(BOOL)arg0;
- (id)previewListView;
- (id)pariticipantsController;
- (id)previewContainerConfigure;
- (void)layoutPreviewContainer;
- (void)didTapPreviewListView:(id)arg0;
- (id)tracker;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)session;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)contentView;
- (id)injector;
- (id)delegate;
- (id)interactionController;
- (id)context;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)profileManager;
- (id)messageController;
- (void)activePreview;
- (double)containerWidth;

@end