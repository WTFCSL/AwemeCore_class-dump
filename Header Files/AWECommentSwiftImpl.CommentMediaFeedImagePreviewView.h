//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentMediaFeedImagePreviewView : UIView <PHLivePhotoViewDelegate, AWECommentMediaFeedImagePreviewViewProtocol> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ fullSizeImageLoaded;
    void /* unknown type, empty encoding */ loadPictureTracker;
    void /* unknown type, empty encoding */ livePhotoPlayWayChangeBlock;
    void /* unknown type, empty encoding */ isLivePhotoPlaying;
    void /* unknown type, empty encoding */ isPlayOnce;
    void /* unknown type, empty encoding */ isPlayLoop;
    void /* unknown type, empty encoding */ didOffScreen;
    void /* unknown type, empty encoding */ didOnScreen;
    void /* unknown type, empty encoding */ needResumePlayLivePhotoLoop;
    void /* unknown type, empty encoding */ needResumePlayLivePhotoOnce;
    void /* unknown type, empty encoding */ resourceID;
    void /* unknown type, empty encoding */ stopPlayLivePhoto;
    void /* unknown type, empty encoding */ livePhotoDuration;
    void /* unknown type, empty encoding */ currentLivePhotoStartStamp;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_livePhotoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

@property (nonatomic) void /* unknown type, empty encoding */ fullSizeImageLoaded;
@property (nonatomic, retain) void /* unknown type, empty encoding */ loadPictureTracker;
@property (nonatomic, copy) id /* block */ livePhotoPlayWayChangeBlock;
@property (nonatomic) void /* unknown type, empty encoding */ isPlayOnce;
@property (nonatomic) void /* unknown type, empty encoding */ isPlayLoop;
@property (nonatomic) void /* unknown type, empty encoding */ didOffScreen;
@property (nonatomic) void /* unknown type, empty encoding */ didOnScreen;

- (void)livePhotoView:(id)arg0 didEndPlaybackWithStyle:(long long)arg1;
- (void)livePhotoView:(id)arg0 willBeginPlaybackWithStyle:(long long)arg1;
- (void)showLivePhoto;
- (void)displayLivePhotoFromLocal:(id)arg0 placeholderImage:(id)arg1;
- (void)displayLivePhotoFromRemote:(id)arg0 videoURL:(id)arg1 placeholderImage:(id)arg2;
- (id)loadPictureTracker;
- (void)setDidOffScreen:(BOOL)arg0;
- (id)getLivePhotoView;
- (void)setDidOnScreen:(BOOL)arg0;
- (void)setIsPlayLoop:(BOOL)arg0;
- (void)setIsPlayOnce:(BOOL)arg0;
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
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (id)getImage;

@end