//
//     Generated by private class-dump
//

@protocol CSPChunkRequestDelegate <NSObject>

- (void)chunkRequestDidEndWithCommonResponse:(id)arg0 withError:(id)arg1 forceCanceled:(BOOL)arg2;
- (void)chunkRequestDidEndWithCommonResponse:(id)arg0 withError:(id)arg1 forceCanceled:(BOOL)arg2;

@optional

- (void)didReceiveCommonResponse:(id)arg0;
- (void)didReceiveCommonResponse:(id)arg0;
- (void)willStartParseChunkData;
- (void)didEndParseChunkDataWithError:(id)arg0;
- (void)clearBeforeNewLink;
- (void)willStartReadChunk;
- (void)didStartReadChunk;
- (void)didReceiveAllData;
- (void)willEndReadChunk:(long long)arg0;
- (void)didEndReadChunk:(long long)arg0;
- (void)didReceiveJSON:(id)arg0;

@end