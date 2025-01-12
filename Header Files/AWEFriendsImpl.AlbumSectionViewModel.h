//
//     Generated by private class-dump
//

@class NSArray, AWEAwemeModel;

@interface AWEFriendsImpl.AlbumSectionViewModel : AWEFriendsImpl.RichContentBaseSectionViewModel <AFDAlbumSectionViewModelProtocol, AFDAlbumPlayFinishTrackTriggerOwner> {
    void /* unknown type, empty encoding */ firstCellBackgroundColor;
    void /* unknown type, empty encoding */ cellHasPreparedForPlaying;
    void /* unknown type, empty encoding */ _isPinchZoomable;
    void /* unknown type, empty encoding */ _isPinchZooming;
    void /* unknown type, empty encoding */ _curImageZoomInfo;
    void /* unknown type, empty encoding */ _isCurImageZoomIdentity;
    void /* unknown type, empty encoding */ _needMoveToCenterWhenMagnify;
    void /* unknown type, empty encoding */ _showFullscreenBackgroundView;
    void /* unknown type, empty encoding */ _contentMode;
    void /* unknown type, empty encoding */ albumContentShrink;
    void /* unknown type, empty encoding */ hasTrackedAlbumPlayFinish;
    void /* unknown type, empty encoding */ hasTrackedCaptionPicShow;
    void /* unknown type, empty encoding */ strongBeatInterupted;
    void /* unknown type, empty encoding */ isWaiting;
    void /* unknown type, empty encoding */ beginInternetSpeed;
    void /* unknown type, empty encoding */ firstFrameDuration;
    void /* unknown type, empty encoding */ firstFrameIndex;
    void /* unknown type, empty encoding */ firstImageOrigin;
    void /* unknown type, empty encoding */ hasLoadImageUris;
    void /* unknown type, empty encoding */ isRealyDisplayed;
    void /* unknown type, empty encoding */ imageLoadTotalDuration;
    void /* unknown type, empty encoding */ imageLoadTotalDurationFeed;
    void /* unknown type, empty encoding */ graphicTotalPlaytime;
    void /* unknown type, empty encoding */ graphicImageLoadTotalPlaytime;
    void /* unknown type, empty encoding */ longLoadImageIndexs;
    void /* unknown type, empty encoding */ _hideSticker;
    void /* unknown type, empty encoding */ needUpdateImageContentViewLayoutWithAnthorPostion;
    void /* unknown type, empty encoding */ isPanning;
    void /* unknown type, empty encoding */ useInternalVideoController;
    void /* unknown type, empty encoding */ _viewedImages;
    void /* unknown type, empty encoding */ awemeModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spriteManager;
    void /* unknown type, empty encoding */ exposedImageURI;
    void /* unknown type, empty encoding */ graphicPlayState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableRefinedImageLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageLayoutConfigCacheDict;
    void /* unknown type, empty encoding */ isProgressBarPressed;
    void /* unknown type, empty encoding */ hasTrackedFirstVisibleImageLoad;
    void /* unknown type, empty encoding */ firstVisibleImageShow;
    void /* unknown type, empty encoding */ hasTrackedFirstImageLoad;
    void /* unknown type, empty encoding */ playStartTimestamp;
    void /* unknown type, empty encoding */ graphicPlayTimeFeed;
    void /* unknown type, empty encoding */ trackGraphicPlayTimeBlock;
    void /* unknown type, empty encoding */ trackGraphicPlayTimeFeedBlock;
    void /* unknown type, empty encoding */ fakeImageModel;
    void /* unknown type, empty encoding */ trackNewAlbumPlayFinish;
    void /* unknown type, empty encoding */ trackPlayFinishBlock;
    void /* unknown type, empty encoding */ finishTrackTrigger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinchZoomTracker;
}

@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic) void /* unknown type, empty encoding */ hasTrackedAlbumPlayFinish;
@property (nonatomic) void /* unknown type, empty encoding */ hasTrackedCaptionPicShow;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) AWEAwemeModel *aweme;
@property (nonatomic, readonly) NSArray *albumImages;
@property (nonatomic) BOOL enableRefinedImageLayout;
@property (nonatomic, copy) id /* block */ trackNewAlbumPlayFinish;
@property (nonatomic, copy) id /* block */ trackPlayFinishBlock;
@property (nonatomic, retain) void /* unknown type, empty encoding */ finishTrackTrigger;

- (void)createFinishTrackTriggerIfNeeded;
- (void)resetFinishTrackTrigger;
- (void)trackPinchZoomWithZoomType:(long long)arg0;
- (id)albumImages;
- (id)aweme;
- (void)setEnableRefinedImageLayout:(BOOL)arg0;
- (double)totalPlayDuration:(BOOL)arg0;
- (void)playOrPauseTimer:(BOOL)arg0;
- (void)setAlbumPlayStatePlay;
- (BOOL)enableRefinedImageLayout;
- (unsigned long long)getRefinedImageContentMode:(id)arg0;
- (BOOL)hasTrackedCaptionPicShow;
- (void)setHasTrackedCaptionPicShow:(BOOL)arg0;
- (id)viewedImagesURI;
- (void)trackGraphicPlayTimeFeedIfNeeded;
- (void)trackGraphicPlayTimeIfNeeded;
- (void)initializeGraphicPlayTimeFeed;
- (void)initializePlayStartTimestamp;
- (BOOL)hasTrackedAlbumPlayFinish;
- (void)setHasTrackedAlbumPlayFinish:(BOOL)arg0;
- (double)getCurrentLoadDurationAndClear;
- (id)finishTrackTrigger;
- (void)setFinishTrackTrigger:(id)arg0;
- (id /* block */)trackNewAlbumPlayFinish;
- (void)setTrackNewAlbumPlayFinish:(id /* block */)arg0;
- (id /* block */)trackPlayFinishBlock;
- (void)setTrackPlayFinishBlock:(id /* block */)arg0;
- (id)awemeModelForFinishTrackTrigger;
- (long long)itemCount;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPaused;

@end
