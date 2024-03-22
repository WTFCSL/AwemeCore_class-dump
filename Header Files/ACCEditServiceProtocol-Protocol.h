//
//     Generated by private class-dump
//

@class UIView;
@protocol ACCEditImageAlbumMixedProtocol, ACCEditAudioEffectProtocol, ACCImageEditTemplateProtocol, ACCEditSessionBuilderProtocol, ACCMediaContainerViewProtocol, ACCEditBGMProtocol, ACCEditMultiTrackProtocol, ACCLivePhotoEditServiceProtocol, ACCEditCaptureFrameProtocol, ACCEditCanvasProtocol, ACCEditHDRProtocol, ACCEditPreviewProtocol, ACCEditEffectProtocol, ACCEditStickerProtocol, ACCImageEditHDRProtocol, ACCEditBeautyProtocol, ACCEditFilterProtocol;

@protocol ACCEditServiceProtocol <ACCCameraSubscription>

@property (readonly, nonatomic) id<ACCEditBeautyProtocol> beauty;
@property (readonly, nonatomic) id<ACCEditFilterProtocol> filter;
@property (readonly, nonatomic) id<ACCEditStickerProtocol> sticker;
@property (readonly, nonatomic) id<ACCEditCanvasProtocol> canvas;
@property (readonly, nonatomic) id<ACCEditPreviewProtocol> preview;
@property (readonly, nonatomic) id<ACCEditHDRProtocol> hdr;
@property (readonly, nonatomic) id<ACCEditAudioEffectProtocol> audioEffect;
@property (readonly, nonatomic) id<ACCEditBGMProtocol> BGM;
@property (readonly, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhoto;
@property (readonly, nonatomic) id<ACCEditEffectProtocol> effect;
@property (readonly, nonatomic) id<ACCEditCaptureFrameProtocol> captureFrame;
@property (readonly, nonatomic) id<ACCEditImageAlbumMixedProtocol> imageAlbumMixed;
@property (readonly, nonatomic) id<ACCImageEditHDRProtocol> imageEditHDR;
@property (readonly, nonatomic) id<ACCEditMultiTrackProtocol> multiTrack;
@property (readonly, nonatomic) id<ACCImageEditTemplateProtocol> imageEditTemplate;
@property (retain, nonatomic) id<ACCEditSessionBuilderProtocol> editBuilder;
@property (readonly, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;
@property (readonly, nonatomic) BOOL useVEPublic;
@property (copy, nonatomic) id /* block */ firstFrameTrackBlock;
@property (copy, nonatomic) id /* block */ sensorialPlayFrameTrackBlock;

- (id)audioEffect;
- (id)beauty;
- (BOOL)useVEPublic;
- (id)mediaContainerView;
- (id)initWithPublishModel:(id)arg0;
- (void)buildEditSession;
- (id)BGM;
- (id)captureFrame;
- (id)imageAlbumMixed;
- (id)imageEditHDR;
- (id)multiTrack;
- (id)imageEditTemplate;
- (id)editBuilder;
- (void)setEditBuilder:(id)arg0;
- (id)effect;
- (id)filter;
- (id)preview;
- (id)livePhoto;
- (id)canvas;
- (id)sticker;
- (id)hdr;

@optional

- (void)resetEditSessionWithPublishModel:(id)arg0;
- (id /* block */)firstFrameTrackBlock;
- (void)setFirstFrameTrackBlock:(id /* block */)arg0;
- (id /* block */)sensorialPlayFrameTrackBlock;
- (void)setSensorialPlayFrameTrackBlock:(id /* block */)arg0;

@end