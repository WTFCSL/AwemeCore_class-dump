//
//     Generated by private class-dump
//

@protocol IESLivePlaybackCommentReactions <IESLivePlaybackCommentInterface>

@optional

- (void)showCommentView:(id)arg0 referredUser:(id)arg1 requestPage:(id)arg2 extraTrackParams:(id)arg3;
- (void)commentBeganWithContent:(id)arg0;
- (void)clearCommentDraft;
- (void)commentSucceedWithFakeMessage:(id)arg0 messageID:(unsigned long long)arg1;
- (void)commentSendToWebContent:(id)arg0;
- (void)updateCommentBtn;

@end