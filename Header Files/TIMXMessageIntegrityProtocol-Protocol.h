//
//     Generated by private class-dump
//

@protocol TIMXMessageIntegrityProtocol <NSObject>

- (id)mergeMessagesIntoRanges:(id)arg0;
- (id)intergrityConversationInfoWithIdentifier:(id)arg0 shortId:(long long)arg1 type:(int)arg2;
- (void)recursivelyFetchMsgesWithIndexV1_V2:(long long)arg0 indexV2:(long long)arg1 conversation:(id)arg2 direction:(unsigned long long)arg3 maxRecursiveCount:(long long)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchMsgesWithAnchorIndexV1:(long long)arg0 conversation:(id)arg1 direction:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)fetchMsgesWithAnchorIndexV1_V2:(long long)arg0 conversation:(id)arg1 direction:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)recursiveFetchMessagesWithMinIndexV2:(long long)arg0 maxIndex:(long long)arg1 direction:(unsigned long long)arg2 conversation:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)recursivelyFetchMsgesWithIndexV1:(long long)arg0 indexV2:(long long)arg1 conversation:(id)arg2 direction:(unsigned long long)arg3 maxRecursiveCount:(long long)arg4 completionBlock:(id /* block */)arg5;
- (void)recursiveFetchMessagesWithMinIndex:(long long)arg0 maxIndex:(long long)arg1 direction:(unsigned long long)arg2 conversation:(id)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)checkIfEmptyExistInMessages:(id)arg0 continueRanges:(id *)arg1 emptyRanges:(id *)arg2;
- (void)fetchMessagesWithMinIndex:(long long)arg0 maxIndex:(long long)arg1 direction:(unsigned long long)arg2 conversation:(id)arg3 completionBlock:(id /* block */)arg4;

@end