//
//     Generated by private class-dump
//

@interface IESLiveVerificationApi : HTSLiveApi

- (void)fetchIdentifyCodeWithRoomID:(id)arg0 anchorID:(id)arg1 secAnchorId:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchIdentifyStatusWithVerificationId:(long long)arg0 MsgID:(long long)arg1 Verified:(BOOL)arg2;

@end
