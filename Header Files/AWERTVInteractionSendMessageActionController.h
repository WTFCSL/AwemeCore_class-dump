//
//     Generated by private class-dump
//

@class NSString, RTVInteractionMessageListViewController, RTVInteractionTracker;
@protocol RTVUserProfileManagerInterface, RTVInteractionContentController, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVInteractionSessionInterface;

@interface AWERTVInteractionSendMessageActionController : NSObject <RTVXRControllerInterface, RTVInteractionMessageListViewControllerDelegate, RTVInteractionSendMessageActionControllerInterface> {
    id<RTVInteractionContentController> contentViewController;
    RTVInteractionMessageListViewController *_inputViewController;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    RTVInteractionTracker *_tracker;
    id<RTVInteractionSessionInterface> _session;
    id<RTVUserProfileManagerInterface> _profileManager;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) RTVInteractionTracker *tracker;
@property (readonly, weak, nonatomic) id<RTVInteractionSessionInterface> session;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionContentController> contentViewController;
@property (readonly, nonatomic) RTVInteractionMessageListViewController *inputViewController;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (id)roomController;
- (id)anotherUserID;
- (id)checkSendMsgWithFloatMode:(BOOL)arg0 needRoute:(BOOL)arg1;
- (void)postEnterMessageListNotiWithConvID:(id)arg0 enterMethod:(id)arg1;
- (void)routeToConversationOfType:(unsigned long long)arg0 convID:(id)arg1 anotherUserID:(id)arg2 floatMode:(BOOL)arg3 needRoute:(BOOL)arg4;
- (void)interactionMessageListViewController:(id)arg0 willSendMessage:(id)arg1;
- (void)__routeToConversationOfType:(unsigned long long)arg0 convID:(id)arg1 anotherUserID:(id)arg2 floatMode:(BOOL)arg3 needRoute:(BOOL)arg4;
- (id)__isCurrentUserInGroupConvWithID:(id)arg0;
- (id)__createConversationWithUserIDs:(id)arg0 type:(unsigned long long)arg1;
- (void)__sendRouteToChatNotification;
- (id)__transferToMessageVCWithConvID:(id)arg0 convType:(unsigned long long)arg1 extension:(id)arg2;
- (id)__transferToMessageVCWithUserID:(id)arg0 showKeyboard:(BOOL)arg1 ext:(id)arg2;
- (id)tracker;
- (id)contentViewController;
- (void).cxx_destruct;
- (void)setContentViewController:(id)arg0;
- (id)session;
- (id)inputViewController;
- (id)injector;
- (id)delegate;
- (id)profileManager;

@end
