//
//     Generated by private class-dump
//

@protocol IESVideoPlayerProtocol;

@interface AWEFriendsImpl.SkiiSectionViewController : _TtGC14AWEFriendsImpl32RichContentBaseSectionControllerCS_20SkiiSectionViewModel_ <AWEPlayVideoDelegate, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol, AWEAwemePlayVideoInteractionProtocol, AFDVideoControllerHolder> {
    void /* unknown type, empty encoding */ forceUsePlayerVideoPlayEndTracker;
    void /* unknown type, empty encoding */ videoController;
}

@property (nonatomic) void /* unknown type, empty encoding */ forceUsePlayerVideoPlayEndTracker;
@property (nonatomic, retain) id<IESVideoPlayerProtocol> playerController;

+ (Class)sectionViewModelClass;

- (void)playerWillStartNextLoop:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)showPauseIcon;
- (void)hidePauseIcon;
- (id)internalLogExtraDict;
- (id)getPlayModeWithAutoPlayMode;
- (id)repostModel;
- (id)repostFromModel;
- (id)playerExtraTrackInfo;
- (BOOL)isPlaying;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)hideInteractionViews:(BOOL)arg0;
- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)getVideoController;
- (void)prepareForDisplayIfNeeded;
- (void)sectionControllerWillDisplay:(id)arg0;
- (void)sectionControllerDidEndDisplaying:(id)arg0;
- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)playerController;
- (Class)cellClass;
- (void)setPlayerController:(id)arg0;

@end
