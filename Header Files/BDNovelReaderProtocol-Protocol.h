//
//     Generated by private class-dump
//

@protocol BDNovelReaderProtocol <NSObject>

- (void)switchReaderToolStatus:(BOOL)arg0;
- (BOOL)isReaderVC:(id)arg0;
- (void)ttsCloseWithBookId:(id)arg0;
- (BOOL)ttsSyncStatusWithBookId:(id)arg0 itemId:(id)arg1;
- (void)ttsPausePlay:(id)arg0 bookId:(id)arg1;
- (void)ttsClickPlay:(id)arg0 bookId:(id)arg1;
- (void)ttsPlayNextItemId:(id)arg0 bookId:(id)arg1;
- (BOOL)ttsSync:(double)arg0 bookId:(id)arg1 itemId:(id)arg2;
- (void)preFetchTTSData:(id)arg0 itemId:(id)arg1 toneId:(long long)arg2;
- (void)openReaderFromAudioWithUrl:(id)arg0 bookId:(id)arg1 itemId:(id)arg2 toneId:(long long)arg3 schemeParams:(id)arg4 currentTime:(double)arg5;
- (id)currentReaderInfo;

@end