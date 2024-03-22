//
//     Generated by private class-dump
//

@class NSString;
@protocol RTVXRStateRecorder, RTVInteractionConfigureManagerInterface, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVFeedSessionInterface;

@interface __RTVVoipFeedInteractionPreviewContainerConfigurator : NSObject <RTVInteractionPreviewContainerConfigurator, RTVInteractionControllerObserver> {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVFeedSessionInterface> _session;
    id<RTVXRStateRecorder> _xrStateRecorder;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigureManager;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> session;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)xrStateRecorder;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (id)roomController;
- (id)interactionConfigureManager;
- (BOOL)autoAdjustPreviewScaleAccrodingToCameraOffStatus;
- (double)preferredSpacing;
- (unsigned long long)fullContentStyle;
- (unsigned long long)maxShowPreviewCount;
- (BOOL)needDisplayChatMessages;
- (id)extraMonitorInfo;
- (Class)previewControllerClass;
- (BOOL)needContainerTapGesture;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fullContentInsets;
- (double)preferredHighlightHeight;
- (double)preferrdCameraOnHeight;
- (BOOL)needBackground;
- (BOOL)__isBigRoom;
- (BOOL)__interfaceOrientationIsPortrait;
- (void).cxx_destruct;
- (id)session;
- (id)injector;
- (double)preferredHeight;

@end
