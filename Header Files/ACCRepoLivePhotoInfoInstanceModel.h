//
//     Generated by private class-dump
//

@class NSURL, NSString;
@protocol ACCPublishRepository;

@interface ACCRepoLivePhotoInfoInstanceModel : NSObject <NSCopying, ACCRepositoryContextDeprecated, ACCRepoLivePhotoInfoInstanceModelData, ACCRepoRegister> {
    BOOL _didHandleLivePhotoToImageAlbum;
    BOOL _disableCacheLiveMode;
    BOOL _isMultiLivePhoto;
    id<ACCPublishRepository> repoDeprecated;
    unsigned long long _imageAlbumLivePhotoMode;
    NSURL *_livePhotoVideoSourceUrl;
    NSURL *_livePhotoImageSourceUrl;
    NSString *_phAssetLocalIdentifier;
    NSString *_compressedImageFilePath;
    double _imageScale;
    double _imageDuration;
    struct CGSize { double width; double height; } _imageSize;
}

@property (nonatomic) unsigned long long imageAlbumLivePhotoMode;
@property (retain, nonatomic) NSURL *livePhotoVideoSourceUrl;
@property (retain, nonatomic) NSURL *livePhotoImageSourceUrl;
@property (nonatomic) BOOL didHandleLivePhotoToImageAlbum;
@property (nonatomic) BOOL disableCacheLiveMode;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (copy, nonatomic) NSString *phAssetLocalIdentifier;
@property (retain, nonatomic) NSString *compressedImageFilePath;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double imageDuration;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (BOOL)isMultiLivePhoto;
- (void)setIsMultiLivePhoto:(BOOL)arg0;
- (unsigned long long)imageAlbumLivePhotoMode;
- (void)setImageAlbumLivePhotoMode:(unsigned long long)arg0;
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
- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (BOOL)enable;
- (void)setImageScale:(double)arg0;
- (double)imageScale;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;

@end