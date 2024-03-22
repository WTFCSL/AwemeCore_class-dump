//
//     Generated by private class-dump
//

@class NSString;
@protocol RTVUserProfileManagerInterface, RTVChatControllerDelegate, AWEIMRTVChatControllerProtocol, RxInjector, RTVXRRoomSessionControllerInterface, RTVInteractionConfigureManagerInterface, RTVVoipContextManagerInterface;

@interface __RTVChatDataController : NSObject <RTVChatDataController, AWEIMRTVChatControllerDelegate, RTVXRControllerInterface> {
    id<RTVChatControllerDelegate> delegate;
    id<RxInjector> _injector;
    id<RTVXRRoomSessionControllerInterface> _roomSession;
    id<AWEIMRTVChatControllerProtocol> _chatController;
    id<RTVVoipContextManagerInterface> _contextManager;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigManager;
    NSString *_imConvID;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomSession;
@property (readonly, nonatomic) id<AWEIMRTVChatControllerProtocol> chatController;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigManager;
@property (readonly, copy, nonatomic) NSString *imConvID;
@property (weak, nonatomic) id<RTVChatControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (unsigned long long)__imRTVChatControllerType:(unsigned long long)arg0;
- (id)__createChatController:(id)arg0 type:(unsigned long long)arg1;
- (id)sendMessage:(id)arg0 toIM:(BOOL)arg1;
- (id)roomSession;
- (id)imConvID;
- (BOOL)__isSendFromSelf:(id)arg0;
- (id)__rtvMessageWithIMMessage:(id)arg0;
- (id)interactionConfigManager;
- (unsigned long long)__rtvChatMessageWithAWEIMRTVChatMessage:(long long)arg0;
- (unsigned long long)__rtvChatMessageStatusWithAWEIMRTVChatMessageStatus:(long long)arg0;
- (void)renderWithConversationID:(id)arg0 type:(unsigned long long)arg1;
- (void)updateIMConvID:(id)arg0;
- (void)rtvChatController:(id)arg0 didReceiveMessages:(id)arg1;
- (void)rtvChatController:(id)arg0 sendErrorWithNotFriend:(id)arg1;
- (void)rtvChatController:(id)arg0 didReceiveSendMessageResponse:(id)arg1 error:(id)arg2;
- (BOOL)rtvChatControllerEnableDoubleSend;
- (BOOL)rtvChatControllerEnableDoubleReceive;
- (void).cxx_destruct;
- (id)injector;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)chatController;
- (id)contextManager;
- (id)profileManager;

@end
