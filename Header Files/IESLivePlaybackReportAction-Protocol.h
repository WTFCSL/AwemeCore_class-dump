//
//     Generated by private class-dump
//

@protocol IESLivePlaybackReportAction <NSObject>

- (void)reportComment:(id)arg0 contentId:(id)arg1 agreeMsgId:(id)arg2 commentType:(id)arg3 sender:(id)arg4 source:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)reportWebCommentWithParams:(id)arg0 source:(unsigned long long)arg1;
- (void)reportRoom:(unsigned long long)arg0;
- (void)reportUser:(id)arg0 source:(unsigned long long)arg1;

@end