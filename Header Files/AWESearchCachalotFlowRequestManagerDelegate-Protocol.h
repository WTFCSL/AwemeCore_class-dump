//
//     Generated by private class-dump
//

@protocol AWESearchCachalotFlowRequestManagerDelegate <NSObject>

@optional

- (void)chunkRequestDidEndWithCommonResponse:(id)arg0 withError:(id)arg1 forceCanceled:(BOOL)arg2;
- (void)didStartReadChunk;
- (void)willStartParseChunkData:(unsigned long long)arg0;
- (void)didEndParseChunkData:(unsigned long long)arg0 error:(id)arg1;
- (void)handlePredictResponse:(id)arg0;
- (void)showPredictContent:(id)arg0;
- (void)clearPredictContent:(id)arg0;
- (void)replacePredictContentWithResponse:(id)arg0;
- (void)appendMoreContentWithResponse:(id)arg0;
- (void)syncPageParamsWithResponse:(id)arg0;
- (void)handlePatchResponse:(id)arg0;
- (void)handlePatchOperationsData:(id)arg0;
- (void)chunkRequestDidEndWithResponse:(id)arg0 withError:(id)arg1 forceCanceled:(BOOL)arg2;
- (id)registerStateMachine;
- (void)handleInitialResponse:(id)arg0;

@end
