//
//     Generated by private class-dump
//

@protocol RTVStickerManagerInterface <NSObject>

- (id)stickerWithResourceID:(id)arg0 pannelName:(id)arg1;
- (id)stickerWithStickerID:(id)arg0;
- (double)downloadProgressWithSticker:(id)arg0;
- (id)downloadStickerIfNeeded:(id)arg0;
- (id)downloadStickerIfNeededWithID:(id)arg0;
- (void)addObserver:(id)arg0;
- (void)removeObserver:(id)arg0;

@end
