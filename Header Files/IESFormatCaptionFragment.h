//
//     Generated by private class-dump
//

@class AWEFormatRealtimeChatMsg, AWEFormatCaptionAudioSyncQueue, UIView, NSString, AWEFormatCaptionTipView, AWEFormatTextCaptionContainerView, AWEFormatMultiMediaCaptionContainerView;
@protocol AWEFormatChatService;

@interface IESFormatCaptionFragment : IESFormatComponentBase <AWEFormatChatServiceDelegate, AWEFormatCaptionAudioSyncQueueDelegate, IESDigitalHumanServiceDelegate, IESFormatInteractionModeManagementServiceDelegate> {
    BOOL _didShowTip;
    BOOL _shouldRenderCaption;
    AWEFormatMultiMediaCaptionContainerView *_multiMediaView;
    AWEFormatTextCaptionContainerView *_textView;
    AWEFormatCaptionTipView *_tipView;
    AWEFormatRealtimeChatMsg *_currentMsg;
    AWEFormatCaptionAudioSyncQueue *_audioSyncQueue;
    id<AWEFormatChatService> _chatService;
    UIView *_captionContainer;
}

@property (retain, nonatomic) AWEFormatMultiMediaCaptionContainerView *multiMediaView;
@property (retain, nonatomic) AWEFormatTextCaptionContainerView *textView;
@property (retain, nonatomic) AWEFormatCaptionTipView *tipView;
@property (retain, nonatomic) AWEFormatRealtimeChatMsg *currentMsg;
@property (retain, nonatomic) AWEFormatCaptionAudioSyncQueue *audioSyncQueue;
@property (retain, nonatomic) id<AWEFormatChatService> chatService;
@property (nonatomic) BOOL didShowTip;
@property (retain, nonatomic) UIView *captionContainer;
@property (nonatomic) BOOL shouldRenderCaption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queue:(id)arg0 shouldSyncWithText:(id)arg1 msgID:(id)arg2;
- (void)queueDidSyncAll:(id)arg0;
- (id)chatService;
- (void)formatConversationDidStartHangOnWithContext:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDestroy;
- (BOOL)shouldRenderCaption;
- (void)setupUIWithAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)dismissCurrentCaption;
- (void)dismissTipViewIfNeed;
- (void)captionDidWithdraw;
- (void)updateCaptionWithMsg:(id)arg0;
- (void)switchNewCaptionWithMsg:(id)arg0;
- (void)showTipViewIfNeeded;
- (void)digitalHumanCaptionDidFinishNormally;
- (id)captionContainer;
- (void)updateTextCaptionWithMsg:(id)arg0;
- (void)updateMultiMediaCaptionWithMsg:(id)arg0;
- (void)handleLifeCycleAfterUpdateCaption;
- (id)multiMediaView;
- (void)userCaptionDidFinishNormally;
- (void)dismissMultiMediaCaptionBeforeSwitchNewCaption;
- (void)switchMultiMediaNewCaptionWithMsg:(id)arg0;
- (void)switchTextNewCaptionWithMsg:(id)arg0 completion:(id /* block */)arg1;
- (void)handleLifeCycleAfterSwitchCaption;
- (void)chatService:(id)arg0 didReceivedMsg:(id)arg1;
- (void)chatServiceDidTriggerInterrupt:(id)arg0;
- (void)digitalHumanService:(id)arg0 didReceiveEvent:(unsigned long long)arg1 infoDict:(id)arg2;
- (void)cleanUIWithAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setMultiMediaView:(id)arg0;
- (id)currentMsg;
- (void)setCurrentMsg:(id)arg0;
- (id)audioSyncQueue;
- (void)setAudioSyncQueue:(id)arg0;
- (void)setChatService:(id)arg0;
- (BOOL)didShowTip;
- (void)setDidShowTip:(BOOL)arg0;
- (void)setCaptionContainer:(id)arg0;
- (void)setShouldRenderCaption:(BOOL)arg0;
- (id)textView;
- (void).cxx_destruct;
- (void)setTextView:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;

@end
