//
//     Generated by private class-dump
//

@class NSMutableDictionary, RxScheduler, RTVXRRoomMessageRTMFallbackSender, NSString;
@protocol RTVSEIMessageController, RTVSettingsManager, RTVXREngine, RTVMultipleDelegateInterface, RTVXRRoomSessionControllerInterface, RTVXRRoomMessageBusinessTypeTransformerInterface, RTVXRRoomManagerInterface, RTVUserProfileManagerInterface, RTVXRControllerInjector, RTVXRRoomMessageSenderDelegate, RTVInteractionClientInterface, RxInjector, RTVXRMonitor, RTVXRRoomMessageSenderObserver;

@interface __RTVXRRoomMessageSender : NSObject <RTVXRRoomMessageSender, RTVXRControllerInterface, RTVXREngineDelegate, RTVSEIMessageObserver, RTVInteractionClientObserver> {
    id<RTVXRRoomMessageSenderDelegate> delegate;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXREngine> _engine;
    id<RTVSEIMessageController> _seiMessageController;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVSettingsManager> _settingManager;
    id<RTVXRMonitor> _monitor;
    id<RTVXRRoomMessageSenderObserver, RTVMultipleDelegateInterface> _multipleDelegate;
    RxScheduler *_scheduler;
    NSMutableDictionary *_sendDeferredMapper;
    NSMutableDictionary *_sendMessageResultCheckInfoMapper;
    NSMutableDictionary *_messageIdentifierMapper;
    NSMutableDictionary *_doubleSendFilter;
    id<RTVXRRoomMessageBusinessTypeTransformerInterface> _messageTypeTansformer;
    id<RTVInteractionClientInterface> _interactionClient;
    id<RTVXRRoomManagerInterface> _roomManager;
    RTVXRRoomMessageRTMFallbackSender *_fallbackSender;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (readonly, weak, nonatomic) id<RTVSEIMessageController> seiMessageController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) id<RTVXRMonitor> monitor;
@property (retain, nonatomic) id<RTVXRRoomMessageSenderObserver, RTVMultipleDelegateInterface> multipleDelegate;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *sendDeferredMapper;
@property (readonly, nonatomic) NSMutableDictionary *sendMessageResultCheckInfoMapper;
@property (readonly, nonatomic) NSMutableDictionary *messageIdentifierMapper;
@property (readonly, nonatomic) NSMutableDictionary *doubleSendFilter;
@property (readonly, nonatomic) id<RTVXRRoomMessageBusinessTypeTransformerInterface> messageTypeTansformer;
@property (readonly, nonatomic) id<RTVInteractionClientInterface> interactionClient;
@property (readonly, nonatomic) id<RTVXRRoomManagerInterface> roomManager;
@property (readonly, nonatomic) RTVXRRoomMessageRTMFallbackSender *fallbackSender;
@property (weak, nonatomic) id<RTVXRRoomMessageSenderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)multipleDelegate;
- (void)setMultipleDelegate:(id)arg0;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)roomController;
- (id)roomManager;
- (void)xrEngine:(id)arg0 onRoomBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onUserBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onRoomMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onUserMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onUserMessageSendResult:(long long)arg1 error:(long long)arg2;
- (void)xrEngine:(id)arg0 onRoomMessageSendResult:(long long)arg1 error:(long long)arg2;
- (void)interactionClient:(id)arg0 didReceiveOperation:(id)arg1;
- (id)messageTypeTansformer;
- (void)didReceiveSEIMessage:(id)arg0 messageKey:(id)arg1;
- (id)seiMessageController;
- (void)__addMonitorInfoIfNeeded:(id)arg0;
- (id)sendMessageResultCheckInfoMapper;
- (BOOL)__enableRTMFallbackSenderMessage:(id)arg0;
- (id)sendDeferredMapper;
- (id)messageIdentifierMapper;
- (id)fallbackSender;
- (id)doubleSendFilter;
- (void)__monitorReceiveMessageIfNeeded:(id)arg0 withOrderIndex:(long long)arg1;
- (id)__errorWithCode:(long long)arg0 userInfo:(id)arg1;
- (void)__handleRTMMessageSendResult:(long long)arg0 success:(BOOL)arg1 messageSource:(long long)arg2;
- (void)__didReceiveMessageWithData:(id)arg0 fromUserID:(id)arg1 source:(long long)arg2;
- (id)__dispatchReceiveMessage:(id)arg0;
- (id)sendMessageContent:(id)arg0;
- (id)sendMessageContent:(id)arg0 toUserID:(id)arg1;
- (id)sendMessage:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (id)__sendMessage:(id)arg0;
- (id)scheduler;
- (id)engine;
- (id)injector;
- (id)delegate;
- (void)addObserver:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)removeObserver:(id)arg0;
- (id)settingManager;
- (unsigned long long)__currentTimestamp;
- (id)profileManager;
- (id)interactionClient;

@end
