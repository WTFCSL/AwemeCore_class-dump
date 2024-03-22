//
//     Generated by private class-dump
//

@class CAKAlbumThumbnailPrefetcherInputData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CAKAlbumThumbnailPrefetcher : NSObject {
    BOOL _didStart;
    CAKAlbumThumbnailPrefetcherInputData *_inputData;
    NSMutableDictionary *_resultMap;
    NSObject<OS_dispatch_queue> *_startQueue;
    struct CGSize { double width; double height; } _cacheSize;
}

@property (retain, nonatomic) NSMutableDictionary *resultMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue;
@property (nonatomic) BOOL didStart;
@property (readonly, nonatomic) CAKAlbumThumbnailPrefetcherInputData *inputData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } cacheSize;

+ (long long)prefetchCountWithColumnCount:(long long)arg0;

- (id)initWithInputData:(id)arg0;
- (void)startPrefetchWithPreferredColumnCount:(long long)arg0 usingRevertDisplayingOrder:(BOOL)arg1;
- (id)cacheKeyForAsset:(id)arg0;
- (id)resultMap;
- (id)preloadModelWithAsset:(id)arg0;
- (id)startQueue;
- (void)addFetchTaskWithAsset:(id)arg0 preloadModel:(id)arg1;
- (BOOL)hasPreloadTaskForAsset:(id)arg0;
- (void)setPreloadResultHandlerWithAsset:(id)arg0 completion:(id /* block */)arg1;
- (void)setResultMap:(id)arg0;
- (void)setStartQueue:(id)arg0;
- (struct CGSize { double x0; double x1; })cacheSize;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)photoLibraryDidChange:(id)arg0;
- (void)dealloc;
- (id)inputData;
- (BOOL)didStart;
- (void)setDidStart:(BOOL)arg0;

@end
