//
//     Generated by private class-dump
//

@class UIImage, NSDictionary, PHObject;

@interface CAKAlbumAssetThumbnailModel : NSObject {
    BOOL _isDegraded;
    BOOL _didFinished;
    BOOL _didReset;
    PHObject *_asset;
    UIImage *_image;
    NSDictionary *_info;
    id /* block */ _resultHandler;
}

@property (retain, nonatomic) PHObject *asset;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL didFinished;
@property (nonatomic) BOOL didReset;
@property (copy, nonatomic) id /* block */ resultHandler;

- (BOOL)didFinished;
- (void)setDidFinished:(BOOL)arg0;
- (void)callbackResultIfNeed;
- (BOOL)isFaild;
- (void)resetImageCache;
- (id)info;
- (id /* block */)resultHandler;
- (void).cxx_destruct;
- (id)image;
- (void)setInfo:(id)arg0;
- (void)setIsDegraded:(BOOL)arg0;
- (void)setImage:(id)arg0;
- (void)setResultHandler:(id /* block */)arg0;
- (id)asset;
- (void)setAsset:(id)arg0;
- (BOOL)isDegraded;
- (BOOL)didReset;
- (void)setDidReset:(BOOL)arg0;

@end
