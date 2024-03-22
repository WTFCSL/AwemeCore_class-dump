//
//     Generated by private class-dump
//

@protocol AWECommentLoadPictureTrackerProtocol;

@protocol AWECommentMediaFeedImagePreviewViewProtocol <NSObject>

@property (nonatomic) BOOL fullSizeImageLoaded;
@property (nonatomic, weak) id<AWECommentLoadPictureTrackerProtocol> loadPictureTracker;
@property (nonatomic, copy) id /* block */ livePhotoPlayWayChangeBlock;
@property (nonatomic) BOOL didOffScreen;
@property (nonatomic) BOOL didOnScreen;
@property (nonatomic) BOOL isPlayOnce;
@property (nonatomic) BOOL isPlayLoop;

- (id)loadPictureTracker;
- (void)setDidOffScreen:(BOOL)arg0;
- (id)getLivePhotoView;
- (void)setDidOnScreen:(BOOL)arg0;
- (void)setIsPlayLoop:(BOOL)arg0;
- (void)setIsPlayOnce:(BOOL)arg0;
- (void)showLivePhoto;
- (BOOL)fullSizeImageLoaded;
- (void)setFullSizeImageLoaded:(BOOL)arg0;
- (void)setLoadPictureTracker:(id)arg0;
- (id /* block */)livePhotoPlayWayChangeBlock;
- (void)setLivePhotoPlayWayChangeBlock:(id /* block */)arg0;
- (BOOL)isPlayOnce;
- (BOOL)isPlayLoop;
- (BOOL)didOffScreen;
- (BOOL)didOnScreen;
- (id)getImageView;
- (id)getPlaceholder;
- (void)updateContent:(struct CGSize { double x0; double x1; })arg0 miniSizeImage:(id)arg1 miniSizeImageUrlList:(id)arg2 fullSizeImage:(id)arg3 fullSizeImageUrlList:(id)arg4 imageType:(id)arg5;
- (void)displayLivePhotoFromLocal:(id)arg0 placeholderImage:(id)arg1;
- (void)displayLivePhotoFromLocal:(id)arg0 placeholderImage:(id)arg1;
- (void)displayLivePhotoFromRemote:(id)arg0 videoURL:(id)arg1 placeholderImage:(id)arg2;
- (void)displayLivePhotoFromRemote:(id)arg0 videoURL:(id)arg1 placeholderImage:(id)arg2;
- (id)getImage;

@end