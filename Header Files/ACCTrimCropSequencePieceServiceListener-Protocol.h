//
//     Generated by private class-dump
//

@protocol ACCTrimCropSequencePieceServiceListener <NSObject>

@optional

- (void)sequencePieceService:(id)arg0 willTransferToIndex:(long long)arg1 needClearLast:(BOOL)arg2 isAutoTransfer:(BOOL)arg3;
- (void)sequencePieceService:(id)arg0 didTransferToIndex:(long long)arg1 isAutoTransfer:(BOOL)arg2;
- (void)sequencePieceService:(id)arg0 didChangedAtAddedIndexSet:(id)arg1 deletedIndexSet:(id)arg2;
- (void)sequencePieceService:(id)arg0 viewScrollToIndex:(long long)arg1;

@end