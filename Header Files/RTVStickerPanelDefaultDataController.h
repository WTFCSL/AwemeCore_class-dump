//
//     Generated by private class-dump
//

@class NSString;

@interface RTVStickerPanelDefaultDataController : RTVStickerPanelBaseDataController <RTVStickerManagerObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)__stickerHadDownloaded:(id)arg0;
- (void)stickerManager:(id)arg0 didBegindownloadSticker:(id)arg1;
- (void)stickerManager:(id)arg0 didFinishDownloadSticker:(id)arg1;
- (void)stickerManager:(id)arg0 didFailDownloadSticker:(id)arg1 error:(id)arg2;
- (void)stickerManager:(id)arg0 downloadSticker:(id)arg1 progressUpdate:(double)arg2;
- (id)createViewModelWithSticker:(id)arg0;
- (id)shouldSelectSticker:(id)arg0;

@end
