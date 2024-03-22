//
//     Generated by private class-dump
//

@class NSArray, NSString, NSData, PHAsset;
@protocol WBMediaTransferProtocol;

@interface WBImageObject : NSObject {
    BOOL _isShareToStory;
    BOOL _isLivePhoto;
    NSData *imageData;
    id<WBMediaTransferProtocol> _delegate;
    PHAsset *_livePhotoAsset;
    NSArray *_finalAssetArray;
    NSArray *_imageDataArray;
    NSArray *_imagePathArray;
    NSData *_livePhotoImageData;
    NSData *_livePhotoVideoData;
    NSString *_livePhotoImagePath;
    NSString *_livePhotoVideoPath;
    NSString *_livePhotoVideoFormat;
    NSData *_panoramaImageData;
}

@property (retain, nonatomic) PHAsset *livePhotoAsset;
@property (retain, nonatomic) NSArray *finalAssetArray;
@property (retain, nonatomic) NSArray *imageDataArray;
@property (retain, nonatomic) NSArray *imagePathArray;
@property (retain, nonatomic) NSData *livePhotoImageData;
@property (retain, nonatomic) NSData *livePhotoVideoData;
@property (retain, nonatomic) NSString *livePhotoImagePath;
@property (retain, nonatomic) NSString *livePhotoVideoPath;
@property (retain, nonatomic) NSString *livePhotoVideoFormat;
@property (nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) NSData *panoramaImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL isShareToStory;
@property (weak, nonatomic) id<WBMediaTransferProtocol> delegate;

+ (id)dictionaryWithImageObject:(id)arg0;
+ (id)imageObjectWithDictionary:(id)arg0;
+ (id)object;

- (id)imagePathArray;
- (void)setImagePathArray:(id)arg0;
- (id)livePhotoImagePath;
- (id)livePhotoVideoPath;
- (id)imageDataArray;
- (void)setImageDataArray:(id)arg0;
- (void)callAddLivePhoto:(id)arg0 completion:(id /* block */)arg1;
- (void)setLivePhotoVideoPath:(id)arg0;
- (void)setLivePhotoImagePath:(id)arg0;
- (void)setLivePhotoVideoFormat:(id)arg0;
- (id)finalAssetArray;
- (id)panoramaImageData;
- (id)livePhotoVideoFormat;
- (void)setFinalAssetArray:(id)arg0;
- (void)setPanoramaImageData:(id)arg0;
- (void)setLivePhotoAsset:(id)arg0 completion:(id /* block */)arg1;
- (void)setLivePhotoImageUrl:(id)arg0 livePhotoVideoUrl:(id)arg1;
- (id)livePhotoAsset;
- (void)setLivePhotoAsset:(id)arg0;
- (id)livePhotoImageData;
- (void)setLivePhotoImageData:(id)arg0;
- (id)livePhotoVideoData;
- (void)setLivePhotoVideoData:(id)arg0;
- (BOOL)isShareToStory;
- (void)setIsShareToStory:(BOOL)arg0;
- (id)validate;
- (void)addImages:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (void)setImageData:(id)arg0;
- (id)delegate;
- (void)setIsLivePhoto:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)isLivePhoto;
- (id)imageData;

@end
