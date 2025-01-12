//
//     Generated by private class-dump
//

@class NSDate, NSString, NSArray, NSURL, AWEAwemeModel, PHAsset, UIImage, BDWebImageRequest, NSURLSessionDownloadTask;

@interface AWEMemoriesPlayerTileModel : NSObject {
    BOOL _needToBeCanceled;
    int _localRequestID;
    unsigned long long _playerModelType;
    AWEAwemeModel *_awemeModel;
    NSArray *_albumUrlList;
    NSString *_localIdentifier;
    PHAsset *_asset;
    long long _imageIndex;
    UIImage *_coverImage;
    long long _resourceLoadState;
    double _downLoadProgress;
    NSURLSessionDownloadTask *_awemeVideoTask;
    BDWebImageRequest *_awemeImageTask;
    NSString *_imageCacheName;
}

@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long playerModelType;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *albumUrlList;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) long long imageIndex;
@property (copy, nonatomic) NSString *imageCacheName;
@property (nonatomic) long long resourceLoadState;
@property (nonatomic) double downLoadProgress;
@property (retain, nonatomic) UIImage *coverImage;
@property (readonly, copy, nonatomic) NSString *localImageCacheName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL needToBeCanceled;
@property (nonatomic) int localRequestID;
@property (weak, nonatomic) NSURLSessionDownloadTask *awemeVideoTask;
@property (weak, nonatomic) BDWebImageRequest *awemeImageTask;

+ (id)createLocalImageTileModelWithLocalIdentifier:(id)arg0;
+ (id)createLocalVideoTileModelWithLocalIdentifier:(id)arg0;
+ (id)createAwemeAlbumTileModelWithAwemeModel:(id)arg0 albumUrlList:(id)arg1 imageIndex:(long long)arg2;
+ (id)createAwemeVideoTileModelWithAwemeModel:(id)arg0;
+ (id)createLocalImageTileModelWithPHAsset:(id)arg0;
+ (id)createLocalVideoTileModelWithPHAsset:(id)arg0;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setCoverImage:(id)arg0;
- (void)downloadSuccess;
- (id)awemeModelForShare;
- (unsigned long long)playerModelType;
- (id)albumUrlList;
- (id)localImageCacheName;
- (long long)resourceLoadState;
- (double)downLoadProgress;
- (void)setNeedToBeCanceled:(BOOL)arg0;
- (void)downloadPrepared;
- (void)downloadInProcess:(double)arg0;
- (void)downloadCanceled;
- (void)setAwemeVideoTask:(id)arg0;
- (id)awemeImageTask;
- (void)setAwemeImageTask:(id)arg0;
- (BOOL)needToBeCanceled;
- (void)setLocalRequestID:(int)arg0;
- (void)releaseCoverImage;
- (void)preloadLocalImage;
- (void)setPlayerModelType:(unsigned long long)arg0;
- (void)setAlbumUrlList:(id)arg0;
- (id)awemeVideoTask;
- (void)setResourceLoadState:(long long)arg0;
- (int)localRequestID;
- (void)setDownLoadProgress:(double)arg0;
- (id)imageCacheName;
- (void)setImageCacheName:(id)arg0;
- (void)resetState;
- (void).cxx_destruct;
- (void)setFileURL:(id)arg0;
- (id)localIdentifier;
- (id)fileURL;
- (id)creationDate;
- (void)cancelDownload;
- (id)asset;
- (void)setAsset:(id)arg0;
- (void)setLocalIdentifier:(id)arg0;
- (id)coverImage;
- (void)downloadFailed;
- (void)setImageIndex:(long long)arg0;
- (long long)imageIndex;

@end
