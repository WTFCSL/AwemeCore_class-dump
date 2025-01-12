//
//     Generated by private class-dump
//

@class IESFormatConversationVADSlidingWindow, NSString, IESLiveState, IESLiveStateMachine, AWEFormatRealtimeChatMsg;
@protocol IESFormatConversationContext;

@interface IESFormatConversationStatusManager : NSObject <IESFormatConversationContext, AWEFormatChatServiceDelegate, AWEFormatCaptionLifeCycle, IESDigitalHumanMediaServiceDelegate, IESDigitalHumanServiceDelegate> {
    id /* block */ _shouldEndConversation;
    IESLiveStateMachine *_stateMachine;
    IESLiveState *_previousState;
    IESLiveState *_currentState;
    IESFormatConversationVADSlidingWindow *_vadSlidingWindow;
    double _startTimestampOfPreviousStatus;
    double _endTimestampOfPreviousStatus;
    double _startTimestampOfCurrentStatus;
    AWEFormatRealtimeChatMsg *_lastMessageOfUser;
    AWEFormatRealtimeChatMsg *_lastMessageOfDigitalHuman;
    long long _latestConversationEvent;
}

@property (retain, nonatomic) IESLiveStateMachine *stateMachine;
@property (retain, nonatomic) IESLiveState *previousState;
@property (retain, nonatomic) IESLiveState *currentState;
@property (retain, nonatomic) IESFormatConversationVADSlidingWindow *vadSlidingWindow;
@property (nonatomic) double startTimestampOfPreviousStatus;
@property (nonatomic) double endTimestampOfPreviousStatus;
@property (nonatomic) double startTimestampOfCurrentStatus;
@property (retain, nonatomic) AWEFormatRealtimeChatMsg *lastMessageOfUser;
@property (retain, nonatomic) AWEFormatRealtimeChatMsg *lastMessageOfDigitalHuman;
@property (nonatomic) long long latestConversationEvent;
@property (readonly, nonatomic) id<IESFormatConversationContext> context;
@property (readonly, nonatomic) BOOL conversationStarted;
@property (copy, nonatomic) id /* block */ shouldEndConversation;
@property (readonly, nonatomic) long long previousConversationStatus;
@property (readonly, nonatomic) long long currentConversationStatus;
@property (readonly, nonatomic) double durationOfPreviousStatus;
@property (readonly, nonatomic) double elapsedTimeOfCurrentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)arg0;
- (void)onAppEnterForeground:(id)arg0;
- (void)captionDidWithdraw;
- (void)digitalHumanCaptionDidFinishNormally;
- (void)userCaptionDidFinishNormallyWithMessage:(id)arg0;
- (void)chatService:(id)arg0 didReceivedMsg:(id)arg1;
- (void)chatServiceDidTriggerInterrupt:(id)arg0;
- (void)digitalHumanService:(id)arg0 didReceiveEvent:(unsigned long long)arg1 infoDict:(id)arg2;
- (long long)previousConversationStatus;
- (long long)currentConversationStatus;
- (double)startTimestampOfCurrentStatus;
- (void)setStartTimestampOfPreviousStatus:(double)arg0;
- (void)setEndTimestampOfPreviousStatus:(double)arg0;
- (void)setStartTimestampOfCurrentStatus:(double)arg0;
- (void)setLatestConversationEvent:(long long)arg0;
- (void)interruptUserSpeaking;
- (void)interruptDigitalHuman;
- (double)startTimestampOfPreviousStatus;
- (double)endTimestampOfPreviousStatus;
- (void)onAppEnterBackground:(id)arg0;
- (id)vadSlidingWindow;
- (void)setVadSlidingWindow:(id)arg0;
- (void)setLastMessageOfUser:(id)arg0;
- (void)userSendInteractCommand;
- (void)setLastMessageOfDigitalHuman:(id)arg0;
- (id /* block */)shouldEndConversation;
- (BOOL)conversationStarted;
- (BOOL)canInterruptUserInStatus:(long long)arg0;
- (BOOL)canInterruptDigitalHumanInStatus:(long long)arg0;
- (double)durationOfPreviousStatus;
- (double)elapsedTimeOfCurrentStatus;
- (id)lastMessageOfUser;
- (id)lastMessageOfDigitalHuman;
- (long long)latestConversationEvent;
- (void)digitalHumanMediaService:(id)arg0 didDetectLocalUserVoiceWithLinearVolume:(long long)arg1 nonlinearVolume:(long long)arg2;
- (void)digitalHumanMediaService:(id)arg0 didNotDetectLocalUserVoiceWithLinearVolume:(long long)arg1 nonlinearVolume:(long long)arg2;
- (void)endConversationWithReason:(long long)arg0;
- (void)userSayHiToDigitalHuman;
- (void)userFailToSayHiToDigitalHuman;
- (void)userSayGoodByeToDigitalHuman;
- (void)userTurnOnMicrophone;
- (void)userTurnOffMicrophone;
- (void)switchToUserTextMode;
- (void)switchToUserVoiceMode;
- (void)jumpToFullScreenPageFromFormat;
- (void)backToFormatFromFullScreenPage;
- (BOOL)canInterruptUser;
- (BOOL)canInterruptDigitalHuman;
- (void)setShouldEndConversation:(id /* block */)arg0;
- (void)setCurrentState:(id)arg0;
- (id)stateMachine;
- (void).cxx_destruct;
- (id)currentState;
- (void)setStateMachine:(id)arg0;
- (id)context;
- (id)previousState;
- (void)dealloc;
- (void)setPreviousState:(id)arg0;
- (void)startConversation;

@end
