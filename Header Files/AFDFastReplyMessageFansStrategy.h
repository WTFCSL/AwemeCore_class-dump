//
//     Generated by private class-dump
//

@class NSString, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AFDFastReplyMessageFansStrategy : NSObject <AFDFastReplyBusinessStrategy> {
    AWEPageContext<AWEPlayInteractionContextProtocol> *_context;
}

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fastReplyCanShowWithContext:(id)arg0;

- (id)fastReplyTriggerRule;
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
- (BOOL)fastReplyShouldPlayEmojiAnimation;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
