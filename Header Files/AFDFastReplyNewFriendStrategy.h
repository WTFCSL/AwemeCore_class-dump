//
//     Generated by private class-dump
//

@class NSString, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AFDFastReplyNewFriendStrategy : NSObject <AFDFastReplyBusinessStrategy> {
    AWEPageContext<AWEPlayInteractionContextProtocol> *_context;
}

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fastReplyCanShowWithContext:(id)arg0;
+ (unsigned long long)replyType;

- (id)fastReplyTriggerRule;
- (void)fastReplyDidDismiss;
- (id)fastReplyEmojis;
- (id)fastReplyPlaceholder;
- (id)fastReplyEnterMethod;
- (id)fastReplyClickEvent;
- (id)fastReplyShowEvent;
- (id)fastReplyAvatarURL;
- (BOOL)fastReplyNeedIMEmojiBtn;
- (id)fastReplyShowParams;
- (id)fastReplyTrackerClickParamsWithClickType:(unsigned long long)arg0;
- (id)fastReplyInputMode;
- (void)fastReplyDidShow;
- (void)fastReplyDidClickedWithType:(unsigned long long)arg0;
- (void)fastReplyDidSend;
- (unsigned long long)inputViewType;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
