//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOLivePhotoInfoInstanceModel : MTLModel <MTLJSONSerializing> {
    BOOL _didHandleLivePhotoToImageAlbum;
    BOOL _disableCacheLiveMode;
    BOOL _isMultiLivePhoto;
    long long _imageAlbumLivePhotoMode;
    NSString *_livePhotoVideoSourceUrl;
    NSString *_livePhotoImageSourceUrl;
    NSString *_phAssetLocalIdentifier;
    NSString *_compressedImageFilePath;
    double _imageWidth;
    double _imageHeight;
    double _imageScale;
    double _imageDuration;
}

@property (nonatomic) long long imageAlbumLivePhotoMode;
@property (copy, nonatomic) NSString *livePhotoVideoSourceUrl;
@property (copy, nonatomic) NSString *livePhotoImageSourceUrl;
@property (nonatomic) BOOL didHandleLivePhotoToImageAlbum;
@property (nonatomic) BOOL disableCacheLiveMode;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (copy, nonatomic) NSString *phAssetLocalIdentifier;
@property (copy, nonatomic) NSString *compressedImageFilePath;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageScale;
@property (nonatomic) double imageDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isMultiLivePhoto;
- (void)setIsMultiLivePhoto:(BOOL)arg0;
- (long long)imageAlbumLivePhotoMode;
- (void)setImageAlbumLivePhotoMode:(long long)arg0;
- (id)livePhotoVideoSourceUrl;
- (void)setLivePhotoVideoSourceUrl:(id)arg0;
- (id)livePhotoImageSourceUrl;
- (void)setLivePhotoImageSourceUrl:(id)arg0;
- (BOOL)didHandleLivePhotoToImageAlbum;
- (void)setDidHandleLivePhotoToImageAlbum:(BOOL)arg0;
- (BOOL)disableCacheLiveMode;
- (void)setDisableCacheLiveMode:(BOOL)arg0;
- (id)phAssetLocalIdentifier;
- (void)setPhAssetLocalIdentifier:(id)arg0;
- (id)compressedImageFilePath;
- (void)setCompressedImageFilePath:(id)arg0;
- (double)imageDuration;
- (void)setImageDuration:(double)arg0;
- (void)setImageScale:(double)arg0;
- (double)imageScale;
- (void).cxx_destruct;
- (double)imageWidth;
- (double)imageHeight;
- (void)setImageHeight:(double)arg0;
- (void)setImageWidth:(double)arg0;

@end
