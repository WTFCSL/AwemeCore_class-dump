//
//     Generated by private class-dump
//

@class IESLiveMultiKTVStageProfilePlugin, IESLiveMultiKTVMidiFeedbackPlugin, IESLiveMultiKTVChallengeBgPlugin, IESLiveUGCVideoPlugin, NSMutableArray, IESLiveMultiKTVVideoPlayPlugin, IESLiveMultiKTVControlPlugin, NSString, IESLiveMultiKTVLyricModePlugin, IESLiveMultiKTVEndHotAndRankPlugin, IESLiveMultiKTVAudioStageContainerView, IESLiveMultiKTVMidiPlugin, IESLiveMultiKTVVideoPreviewPlugin, IESLiveLinkmicPreviewLoadTracker, IESLiveMultiKTVLyricPlugin;
@protocol IESLiveRoomService, IESLiveSEIReceiverService, IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVAudioStageController : NSObject <IESLiveMultiKTVStageLayoutProvider, IESLiveMultiKTVAudioStageProvider, IESLiveMultiKTVAudioStageVideoPreviewViewAction, IESLiveMultiKTVAudioStageContainerDelegate, IESLiveMultkKTVBackgroundActions, IESLiveMultiKTVStageControllerProtocol> {
    id<IESLiveSEIReceiverService> _ktvSEIReceiver;
    IESLiveMultiKTVStageProfilePlugin *_profilePlugin;
    IESLiveMultiKTVVideoPreviewPlugin *_videoPreviewPlugin;
    IESLiveMultiKTVAudioStageContainerView *_ktvStageContainerView;
    id<IESLiveMultiKTVStageProvider> _ktvStageProvider;
    IESLiveLinkmicPreviewLoadTracker *_previewLoadTracker;
    id<IESLiveRoomService> _room;
    IESLiveMultiKTVChallengeBgPlugin *_challengeBgPlugin;
    IESLiveMultiKTVLyricPlugin *_lyricsPluginV2;
    IESLiveMultiKTVEndHotAndRankPlugin *_rankPlugin;
    IESLiveMultiKTVLyricModePlugin *_lyricModePlugin;
    IESLiveMultiKTVMidiPlugin *_midiPlugin;
    IESLiveMultiKTVControlPlugin *_controlPlugin;
    IESLiveMultiKTVMidiFeedbackPlugin *_midiFeedbackPlugin;
    IESLiveMultiKTVVideoPlayPlugin *_videoPlayPlugin;
    IESLiveUGCVideoPlugin *_ugcVideoPlugin;
    NSMutableArray *_ktvPlugins;
    NSMutableArray *_challengeModePlugins;
    NSMutableArray *_lyricModePlugins;
    NSMutableArray *_currentActivePlugins;
    NSString *_themeID;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveMultiKTVAudioStageContainerView *ktvStageContainerView;
@property (retain, nonatomic) IESLiveMultiKTVChallengeBgPlugin *challengeBgPlugin;
@property (retain, nonatomic) IESLiveMultiKTVLyricPlugin *lyricsPluginV2;
@property (retain, nonatomic) IESLiveMultiKTVEndHotAndRankPlugin *rankPlugin;
@property (retain, nonatomic) IESLiveMultiKTVLyricModePlugin *lyricModePlugin;
@property (retain, nonatomic) IESLiveMultiKTVMidiPlugin *midiPlugin;
@property (retain, nonatomic) IESLiveMultiKTVControlPlugin *controlPlugin;
@property (retain, nonatomic) IESLiveMultiKTVMidiFeedbackPlugin *midiFeedbackPlugin;
@property (retain, nonatomic) IESLiveMultiKTVVideoPlayPlugin *videoPlayPlugin;
@property (retain, nonatomic) IESLiveUGCVideoPlugin *ugcVideoPlugin;
@property (retain, nonatomic) NSMutableArray *ktvPlugins;
@property (retain, nonatomic) NSMutableArray *challengeModePlugins;
@property (retain, nonatomic) NSMutableArray *lyricModePlugins;
@property (retain, nonatomic) NSMutableArray *currentActivePlugins;
@property (copy, nonatomic) NSString *themeID;
@property (retain, nonatomic) id<IESLiveSEIReceiverService> ktvSEIReceiver;
@property (retain, nonatomic) IESLiveMultiKTVStageProfilePlugin *profilePlugin;
@property (retain, nonatomic) IESLiveMultiKTVVideoPreviewPlugin *videoPreviewPlugin;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> ktvStageProvider;
@property (weak, nonatomic) IESLiveLinkmicPreviewLoadTracker *previewLoadTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentHeight;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)updateStatusBarBackgroundColor:(id)arg0;
- (id)initWithRoomModel:(id)arg0;
- (BOOL)supportOpenCamera;
- (id)seiReceiver;
- (void)smoothExitRoomToPreview;
- (void)smoothEnterRoomFromPreview;
- (id)themeID;
- (void)setThemeID:(id)arg0;
- (void)dealWithOpenCamera:(BOOL)arg0;
- (BOOL)enableCameraCapture;
- (void)changeCaptureInputType:(long long)arg0;
- (void)updateSoundAnimationWithStartURLs:(id)arg0 loopURLs:(id)arg1;
- (void)updateFanticketAreaHidden:(BOOL)arg0;
- (id)profileContainer;
- (void)updateStageViewBackgroundImageWithImageURLs:(id)arg0;
- (void)updateGrabSongBackgroundImageUrls:(id)arg0;
- (void)updateSingBtnBackgroundGradientColorWithStartColor:(id)arg0 endColor:(id)arg1;
- (int)remoteUserSingMode;
- (void)draggedContainerDidMoved:(double)arg0;
- (id)previewLoadTracker;
- (void)setPreviewLoadTracker:(id)arg0;
- (id)stageContainer;
- (id)dynamicKTVContainer;
- (id)midiContainer;
- (id)draggedContainer;
- (id)giftBackgroundContainer;
- (id)stageSnapshotImage;
- (void)updateVideoStyleLayout:(long long)arg0;
- (void)updatePlayerViewAppearanceAsVideoStyleChanged:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)reusedDynamicPlugin;
- (id)stageContainerView;
- (void)updateThemeID:(id)arg0;
- (id)ktvStageContainerView;
- (void)setKtvStageProvider:(id)arg0;
- (BOOL)p_enableUGCMV;
- (void)ktvStageContainerLayoutDidFinish:(id)arg0;
- (void)updateStageViewBackgroundImage:(id)arg0;
- (void)updateDraggedContainerHeightWithScale:(double)arg0;
- (void)updateDraggedContainerInteractionEnabled:(BOOL)arg0;
- (id)videoPreviewPlugin;
- (id)videoPreviewProvider;
- (id)hotRankProvider;
- (id)lyricModeProvider;
- (void)didKTVThemeChangedToGoldenRoom:(BOOL)arg0;
- (void)activatePlugins;
- (void)deactivatePlugins;
- (id)activePlugins;
- (void)draggedMidiContainerShouldShow:(BOOL)arg0;
- (void)setRankPlugin:(id)arg0;
- (id)rankPlugin;
- (void)setVideoPreviewPlugin:(id)arg0;
- (void)setChallengeBgPlugin:(id)arg0;
- (id)challengeBgPlugin;
- (void)setProfilePlugin:(id)arg0;
- (id)profilePlugin;
- (void)setMidiPlugin:(id)arg0;
- (id)midiPlugin;
- (void)setControlPlugin:(id)arg0;
- (id)controlPlugin;
- (void)setMidiFeedbackPlugin:(id)arg0;
- (id)midiFeedbackPlugin;
- (id)videoPlayPlugin;
- (id)ktvPlugins;
- (id)lyricsPluginV2;
- (id)ugcVideoPlugin;
- (id)lyricModePlugin;
- (void)makePluginsDeactive:(id)arg0;
- (id)currentActivePlugins;
- (void)enterDynamicStageMode;
- (void)makePluginsActive:(id)arg0;
- (void)exitDynamicStageMode;
- (void)setupStagePlugins;
- (id)generateSnapshotImageFromView:(id)arg0 opaque:(BOOL)arg1;
- (id)ktvSEIReceiver;
- (id)initWithRoomModel:(id)arg0 videoPlayPlugin:(id)arg1;
- (void)setKtvSEIReceiver:(id)arg0;
- (void)setKtvStageContainerView:(id)arg0;
- (id)ktvStageProvider;
- (void)setLyricsPluginV2:(id)arg0;
- (void)setLyricModePlugin:(id)arg0;
- (void)setVideoPlayPlugin:(id)arg0;
- (void)setUgcVideoPlugin:(id)arg0;
- (void)setKtvPlugins:(id)arg0;
- (id)challengeModePlugins;
- (void)setChallengeModePlugins:(id)arg0;
- (id)lyricModePlugins;
- (void)setLyricModePlugins:(id)arg0;
- (void)setCurrentActivePlugins:(id)arg0;
- (void).cxx_destruct;
- (id)profileProvider;
- (id)backgroundContainer;
- (id)contentContainer;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)allPlugins;
- (id)titleContainer;
- (void)loadPlugins;
- (void)unloadPlugins;

@end