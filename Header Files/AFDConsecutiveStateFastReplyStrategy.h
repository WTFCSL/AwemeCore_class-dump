//
//     Generated by private class-dump
//

@interface AFDConsecutiveStateFastReplyStrategy : NSObject <AFDFastReplyBusinessTracker, AFDFastReplyBusinessDataSource, AFDFastReplyBusinessStrategy> {
    void /* unknown type, empty encoding */ playInteractionContext;
}

+ (BOOL)fastReplyCanShowWithContext:(id)arg0;

- (id)fastReplyEnterMethod;
- (id)fastReplyClickEvent;
- (id)fastReplyShowEvent;
- (id)fastReplyShowParams;
- (id)fastReplyTrackerClickParamsWithClickType:(unsigned long long)arg0;
- (id)fastReplyEmojis;
- (id)fastReplyPlaceholder;
- (id)fastReplyAvatarURL;
- (id)fastReplyTriggerRule;
- (id)fastReplyInputMode;
- (void)fastReplyDidClickedWithType:(unsigned long long)arg0;
- (void)fastReplyDidSend;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
