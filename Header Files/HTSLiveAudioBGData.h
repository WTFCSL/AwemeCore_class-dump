//
//     Generated by private class-dump
//

@class NSData, HTSLiveAudioSpeakingImageList, NSString, UIImage, NSURL, HTSLiveImage, HTSLiveAnimatedBgInfo, NSMutableArray;

@interface HTSLiveAudioBGData : IESLivePBBaseMessage

@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL thumbnailDownloading;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL resourceAvailable;
@property (nonatomic) BOOL thumbnailResourceAvailable;
@property (readonly, nonatomic) BOOL isStrongInsertBg;
@property (readonly, nonatomic) BOOL isTimeLimit;
@property (readonly, nonatomic) BOOL isAnimatedBg;
@property (nonatomic) BOOL shouldAddedToRemoteThemeList;
@property (retain, nonatomic) UIImage *ugcImage;
@property (copy, nonatomic) NSString *uploadedUri;
@property (copy, nonatomic) NSString *fileFormat;
@property (retain, nonatomic) NSURL *videoFileUrl;
@property (retain, nonatomic) NSData *gifImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, copy, nonatomic) NSString *bgUri;
@property (nonatomic) long long fromType;
@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *imageUri;
@property (nonatomic) int imgType;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) HTSLiveImage *imageThumbnail;
@property (nonatomic) BOOL hasImageThumbnail;
@property (retain, nonatomic) HTSLiveImage *imageAnimatedBg;
@property (nonatomic) BOOL hasImageAnimatedBg;
@property (retain, nonatomic) HTSLiveImage *imageNormalAvatar;
@property (nonatomic) BOOL hasImageNormalAvatar;
@property (retain, nonatomic) HTSLiveImage *imageStartupAvatar;
@property (nonatomic) BOOL hasImageStartupAvatar;
@property (retain, nonatomic) HTSLiveImage *imageChatJoinIcon;
@property (nonatomic) BOOL hasImageChatJoinIcon;
@property (retain, nonatomic) HTSLiveImage *imageStaticBg;
@property (nonatomic) BOOL hasImageStaticBg;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList *speakingImageList;
@property (nonatomic) BOOL hasSpeakingImageList;
@property (copy, nonatomic) NSString *statusColorValue;
@property (copy, nonatomic) NSString *publicScreenColorValue;
@property (nonatomic) int timeLimit;
@property (nonatomic) int bgType;
@property (copy, nonatomic) NSString *emptyStartColor;
@property (copy, nonatomic) NSString *emptyEndColor;
@property (retain, nonatomic) HTSLiveImage *imageColdBg;
@property (nonatomic) BOOL hasImageColdBg;
@property (copy, nonatomic) NSString *micBgcolorValue;
@property (retain, nonatomic) NSMutableArray *iconMicNormalsArray;
@property (readonly, nonatomic) unsigned long long iconMicNormalsArray_Count;
@property (retain, nonatomic) HTSLiveImage *iconMicLock;
@property (nonatomic) BOOL hasIconMicLock;
@property (copy, nonatomic) NSString *colorMicText;
@property (copy, nonatomic) NSString *colorMicLine;
@property (copy, nonatomic) NSString *colorMicBg;
@property (copy, nonatomic) NSString *themeLabel;
@property (nonatomic) int bgStatus;
@property (retain, nonatomic) HTSLiveAnimatedBgInfo *animateInfo;
@property (nonatomic) BOOL hasAnimateInfo;
@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) int playMode;
@property (copy, nonatomic) NSString *themeTag;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int formatType;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList *speakingImageV2;
@property (nonatomic) BOOL hasSpeakingImageV2;

+ (id)descriptor;

- (BOOL)resourceAvailable;
- (BOOL)isAnimatedBg;
- (id)ugcImage;
- (id)bgUri;
- (id)themeTypeForTracking;
- (void)downloadResources:(id)arg0 anchorID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)thumbnailDownloading;
- (BOOL)thumbnailResourceAvailable;
- (id)videoFileUrl;
- (id)gifImageData;
- (id)uploadedUri;
- (BOOL)shouldAddedToRemoteThemeList;
- (void)setThumbnailDownloading:(BOOL)arg0;
- (void)setThumbnailResourceAvailable:(BOOL)arg0;
- (void)downloadThumbnailResources:(id)arg0 anchorID:(id)arg1 retryCount:(long long)arg2 completion:(id /* block */)arg3;
- (void)setResourceAvailable:(BOOL)arg0;
- (void)downloadResources:(id)arg0 anchorID:(id)arg1 retryCount:(long long)arg2 completion:(id /* block */)arg3;
- (id)ugcVideoUrlsNeedsToBeDownload;
- (BOOL)isUgcAudioBgData;
- (id)ugcAnimatedImageUrlsNeedsToBeDownload;
- (void)downloadResourcesWithImageUrls:(id)arg0 videoUrls:(id)arg1 roomID:(id)arg2 anchorID:(id)arg3 retryCount:(long long)arg4 completion:(id /* block */)arg5;
- (id)imageUrlsNeedsToBeDownload;
- (void)downloadImageWithUrls:(id)arg0 roomID:(id)arg1 anchorID:(id)arg2 retryCount:(long long)arg3 completion:(id /* block */)arg4;
- (void)downloadVideoWithUrls:(id)arg0 roomID:(id)arg1 anchorID:(id)arg2 retryCount:(long long)arg3 completion:(id /* block */)arg4;
- (BOOL)isValidImage:(id)arg0 url:(id)arg1;
- (id)ugcVideoFileName;
- (void)setVideoFileUrl:(id)arg0;
- (void)setUgcImage:(id)arg0;
- (void)setGifImageData:(id)arg0;
- (void)setUploadedUri:(id)arg0;
- (void)setShouldAddedToRemoteThemeList:(BOOL)arg0;
- (void)downloadThumbnailResources:(id)arg0 anchorID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isStrongInsertBg;
- (BOOL)isTimeLimit;
- (BOOL)isEqualWith:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isDefault;
- (BOOL)downloading;
- (id)fileFormat;
- (void)setDownloading:(BOOL)arg0;
- (void)setIsDefault:(BOOL)arg0;
- (void)setFileFormat:(id)arg0;
- (long long)fromType;
- (void)setFromType:(long long)arg0;

@end