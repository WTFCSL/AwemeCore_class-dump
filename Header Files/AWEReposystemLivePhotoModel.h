//
//     Generated by private class-dump
//

@class NSString, UIImage, RACSignal;

@interface AWEReposystemLivePhotoModel : NSObject <AWERepositoryDraftProtocol, NSCopying, ACCRepoRegister, ACCRepositoryDraftContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepoSystemLivePhotoData> {
    BOOL _isSystemLivePhoto;
    BOOL _trackLivePhoto;
    NSString *_imagePath;
    NSString *_videoPath;
    UIImage *_videoFrameImage;
    NSString *_videoFramePath;
    long long _trackErrorType;
    NSString *_systemLivePhotoVideoFramePath;
    RACSignal *_systemLivePhotovideoFramePathSignal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSystemLivePhoto;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIImage *videoFrameImage;
@property (copy, nonatomic) NSString *videoFramePath;
@property (nonatomic) long long trackErrorType;
@property (nonatomic) BOOL trackLivePhoto;
@property (copy, nonatomic) NSString *systemLivePhotoVideoFramePath;
@property (weak, nonatomic) RACSignal *systemLivePhotovideoFramePathSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (BOOL)isSystemLivePhoto;
- (void)setIsSystemLivePhoto:(BOOL)arg0;
- (void)setSystemLivePhotoVideoFramePath:(id)arg0;
- (id)systemLivePhotoVideoFramePath;
- (id)systemLivePhotovideoFramePathSignal;
- (void)setVideoFrameImage:(id)arg0;
- (void)setVideoFramePath:(id)arg0;
- (void)setTrackErrorType:(long long)arg0;
- (id)videoFrameImage;
- (long long)trackErrorType;
- (void)setTrackLivePhoto:(BOOL)arg0;
- (void)setSystemLivePhotovideoFramePathSignal:(id)arg0;
- (BOOL)trackLivePhoto;
- (id)videoFramePath;
- (id)imagePath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setImagePath:(id)arg0;
- (id)videoPath;
- (void)setVideoPath:(id)arg0;

@end
