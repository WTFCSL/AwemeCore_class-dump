//
//     Generated by private class-dump
//

@interface IESLiveMultiLinkerApi : HTSLiveApi

- (void)multiAutoMatchWithFirst:(BOOL)arg0 matchType:(id)arg1 subType:(id)arg2 isHighWay:(BOOL)arg3 extraParams:(id)arg4 finished:(id /* block */)arg5;
- (void)cancelMultiAutoMatchWithType:(unsigned long long)arg0 matchType:(id)arg1 cancelMultiMatch:(BOOL)arg2 participantsStr:(id)arg3 completion:(id /* block */)arg4;
- (void)updateStreamLayoutWithType:(int)arg0 anchorUIOperationLayout:(int)arg1 focusUid:(id)arg2 callback:(id /* block */)arg3;

@end