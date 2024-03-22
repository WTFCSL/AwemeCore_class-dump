//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol AFDRichContentAlbumImageDelegateProtocol, AFDRichContentPageContextProtocol;

@protocol AFDAlbumPageContextProtocol <NSObject>

@property (nonatomic, weak) id<AFDRichContentPageContextProtocol> pageContext;
@property (nonatomic) BOOL needAnimateWhenUpdateContent;
@property (nonatomic) BOOL isPinchZoomable;
@property (nonatomic) BOOL needMoveToCenterWhenMagnify;
@property (nonatomic) BOOL showFullscreenBackgroundView;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) BOOL preferSinkingTransition;
@property (nonatomic) BOOL isInFullPageTransition;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic) BOOL hideSticker;
@property (nonatomic) BOOL useInternalVideoController;
@property (nonatomic, copy) id /* block */ trackVideoPlayFinishBlock;
@property (nonatomic, copy) id /* block */ trackAlbumPlayFinishBlock;
@property (nonatomic, copy) id /* block */ albumContainerSlideBlock;
@property (nonatomic) BOOL hasTrackedVideoPlayFinish;
@property (nonatomic, copy) id /* block */ hasTrackedVideoPlayBlock;
@property (nonatomic, copy) NSDictionary *logExtra;
@property (nonatomic) BOOL isIgnoreReverse;
@property (nonatomic) BOOL isScrollDisabled;
@property (nonatomic) BOOL disableGraphicPlaytimeTrack;
@property (nonatomic) BOOL disableGraphicPlayTimeFeedTrack;
@property (nonatomic) BOOL needFastPlay;
@property (nonatomic) BOOL disableEnterProfile;
@property (nonatomic) BOOL notFadeOut;
@property (nonatomic, weak) id<AFDRichContentAlbumImageDelegateProtocol> delegate;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (BOOL)notFadeOut;
- (void)setNotFadeOut:(BOOL)arg0;
- (BOOL)preferSinkingTransition;
- (void)setPreferSinkingTransition:(BOOL)arg0;
- (BOOL)isInFullPageTransition;
- (void)setIsInFullPageTransition:(BOOL)arg0;
- (BOOL)isIgnoreReverse;
- (void)setIsIgnoreReverse:(BOOL)arg0;
- (BOOL)isPinchZoomable;
- (void)setIsPinchZoomable:(BOOL)arg0;
- (BOOL)needMoveToCenterWhenMagnify;
- (void)setNeedMoveToCenterWhenMagnify:(BOOL)arg0;
- (BOOL)showFullscreenBackgroundView;
- (void)setShowFullscreenBackgroundView:(BOOL)arg0;
- (BOOL)needAnimateWhenUpdateContent;
- (void)setNeedAnimateWhenUpdateContent:(BOOL)arg0;
- (BOOL)disableEnterProfile;
- (void)setDisableEnterProfile:(BOOL)arg0;
- (BOOL)useInternalVideoController;
- (void)setUseInternalVideoController:(BOOL)arg0;
- (BOOL)hideSticker;
- (void)setHideSticker:(BOOL)arg0;
- (BOOL)isScrollDisabled;
- (void)setIsScrollDisabled:(BOOL)arg0;
- (id /* block */)trackVideoPlayFinishBlock;
- (void)setTrackVideoPlayFinishBlock:(id /* block */)arg0;
- (id /* block */)trackAlbumPlayFinishBlock;
- (void)setTrackAlbumPlayFinishBlock:(id /* block */)arg0;
- (id /* block */)albumContainerSlideBlock;
- (void)setAlbumContainerSlideBlock:(id /* block */)arg0;
- (id /* block */)hasTrackedVideoPlayBlock;
- (void)setHasTrackedVideoPlayBlock:(id /* block */)arg0;
- (BOOL)hasTrackedVideoPlayFinish;
- (void)setHasTrackedVideoPlayFinish:(BOOL)arg0;
- (BOOL)disableGraphicPlaytimeTrack;
- (void)setDisableGraphicPlaytimeTrack:(BOOL)arg0;
- (BOOL)disableGraphicPlayTimeFeedTrack;
- (void)setDisableGraphicPlayTimeFeedTrack:(BOOL)arg0;
- (unsigned long long)richContentPlayMode;
- (BOOL)needFastPlay;
- (void)setNeedFastPlay:(BOOL)arg0;
- (void)setUserScrolled:(BOOL)arg0;
- (void)setIsMuted:(BOOL)arg0;
- (void)setContentMode:(unsigned long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)isMuted;
- (unsigned long long)contentMode;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (BOOL)userScrolled;
- (void)setPlayMode:(unsigned long long)arg0;

@end
