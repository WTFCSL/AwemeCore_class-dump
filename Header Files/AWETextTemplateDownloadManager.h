//
//     Generated by private class-dump
//

@class NSCache, NSHashTable;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface AWETextTemplateDownloadManager : NSObject {
    NSHashTable *_observers;
    NSCache *_stickerDownloadProgressCache;
    id<IESServiceProvider> _serviceProvider;
    id<ACCEditServiceProtocol> _editService;
    double _startTime;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSCache *stickerDownloadProgressCache;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) double startTime;

+ (id)fontFilePath:(id)arg0;
+ (id)catchResources:(id)arg0;
+ (void)downloadEffectWithResource:(id)arg0 completion:(id /* block */)arg1;
+ (id)manager;

- (void)p_downloadSticker:(id)arg0;
- (void)downloadStickerIfNeed:(id)arg0;
- (id)stickerDownloadProgress:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)notifyObserversDidBeginDownloadSticker:(id)arg0;
- (void)notifyObserversDidFinishDownloadSticker:(id)arg0 error:(id)arg1;
- (void)notifyObserversNeedUpdateCellDownloadedSticker:(id)arg0;
- (void)notifyObserversDidChangeProgressWithSticker:(id)arg0 progress:(double)arg1;
- (void)updatePropCellDownloaded:(id)arg0;
- (void)downloadFontIfNeed:(id)arg0 sticker:(id)arg1;
- (void)notifyObserversDidFinishDownloadSticker:(id)arg0 extraParams:(id)arg1;
- (id)stickerDownloadProgressCache;
- (void)monitorOpenEditorDurationWithDuration:(double)arg0 success:(BOOL)arg1 error:(id)arg2 logTypeStr:(id)arg3;
- (id)neededExtraPrama:(id)arg0;
- (void)setStickerDownloadProgressCache:(id)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (double)startTime;
- (id)serviceProvider;
- (void)addObserver:(id)arg0;
- (void)removeObserver:(id)arg0;

@end
