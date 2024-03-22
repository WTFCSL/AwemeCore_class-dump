//
//     Generated by private class-dump
//

@interface AWEDiggShareFastReplyStrategy : NSObject <AFDFastReplyBusinessTracker, AFDFastReplyBusinessInputView, AFDFastReplyBusinessDataSource, AFDFastReplyBusinessStrategy> {
    void /* unknown type, empty encoding */ playInteractionContext;
    void /* unknown type, empty encoding */ hasDisplay;
}

+ (BOOL)fastReplyCanShowWithContext:(id)arg0;

- (id)fastReplyEnterMethod;
- (id)fastReplyClickEvent;
- (id)fastReplyShowEvent;
- (id)fastReplyShowParams;
- (id)fastReplyTrackerClickParamsWithClickType:(unsigned long long)arg0;
- (id)fastReplyInputMode;
- (id)fastReplyEmojis;
- (id)fastReplyPlaceholder;
- (id)fastReplyAvatarURL;
- (BOOL)fastReplyNeedIMEmojiBtn;
- (id)fastReplyTriggerRule;
- (void)fastReplyDidDismiss;
- (void)fastReplyDidShow;
- (void)fastReplyDidClickedWithType:(unsigned long long)arg0;
- (BOOL)fastReplyShouldAvoidPriority;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
