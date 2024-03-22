//
//     Generated by private class-dump
//

@class AWEVideoImageGenerator, UIView, NSString, AWEVideoPublishViewModel, AWEVideoCoverFakeProfileView, AWEVideoCoverTextEditView, AWECoverTextStickerContainerView, AWECoverTextEditingModel, NSMutableDictionary, UIImageView, AWEVideoCoverSafeAreaMaskView;
@protocol AWECoverPreviewDelegate, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWECoverPreviewController : UIViewController <AWECoverStickerContainerViewDelegate> {
    BOOL _generateImaging;
    BOOL _styleChanged;
    BOOL _isSlides;
    UIView *_playerView;
    AWECoverTextEditingModel *_editingModel;
    UIImageView *_interactionImageView;
    UIView *_cropView;
    UIImageView *_coverImageView;
    AWEVideoCoverFakeProfileView *_fakeProfileView;
    id<AWECoverPreviewDelegate> _delegate;
    id /* block */ _hideNavBarBlock;
    id /* block */ _showNavBarBlock;
    id /* block */ _handleEditFinishBlock;
    AWEVideoPublishViewModel *_publishModel;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    double _fontScale;
    UIView *_playerContentView;
    AWECoverTextStickerContainerView *_stickerContentView;
    AWEVideoCoverSafeAreaMaskView *_safeMaskView;
    AWEVideoImageGenerator *_imageGenerator;
    AWEVideoCoverTextEditView *_coverTextEditView;
    NSString *_previousTitle;
    NSMutableDictionary *_offsetCacheDictionary;
    long long _previousAlbumIndex;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) UIView *cropView;
@property (retain, nonatomic) UIView *playerContentView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) AWECoverTextStickerContainerView *stickerContentView;
@property (retain, nonatomic) AWEVideoCoverSafeAreaMaskView *safeMaskView;
@property (retain, nonatomic) AWEVideoImageGenerator *imageGenerator;
@property (retain, nonatomic) AWECoverTextEditingModel *editingModel;
@property (nonatomic) BOOL styleChanged;
@property (nonatomic) BOOL isSlides;
@property (nonatomic) BOOL generateImaging;
@property (retain, nonatomic) AWEVideoCoverTextEditView *coverTextEditView;
@property (copy, nonatomic) NSString *previousTitle;
@property (retain, nonatomic) NSMutableDictionary *offsetCacheDictionary;
@property (nonatomic) long long previousAlbumIndex;
@property (retain, nonatomic) UIImageView *interactionImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEVideoCoverFakeProfileView *fakeProfileView;
@property (weak, nonatomic) id<AWECoverPreviewDelegate> delegate;
@property (copy, nonatomic) id /* block */ hideNavBarBlock;
@property (copy, nonatomic) id /* block */ showNavBarBlock;
@property (copy, nonatomic) id /* block */ handleEditFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (BOOL)isSlides;
- (void)setIsSlides:(BOOL)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (struct CGPoint { double x0; double x1; })coverOffset;
- (void)configCoverImage:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)p_commonTrackParams;
- (id)playerContentView;
- (void)setPlayerContentView:(id)arg0;
- (void)addMaskConrnerView;
- (void)reloadAlbumCover;
- (void)p_configureSubViews;
- (void)p_recoverCoverPostion;
- (id)fakeProfileView;
- (struct CGSize { double x0; double x1; })p_previewSize;
- (BOOL)enableTextSticker;
- (id)stickerContentView;
- (id)interactionImageView;
- (BOOL)enableSafeMask;
- (id)safeMaskView;
- (id)editingModelTransformTexts:(id)arg0;
- (void)updateEffectWithEditInfo:(id)arg0;
- (void)clearAllState;
- (id)editingModel;
- (void)updatePreviewImage:(id)arg0;
- (void)p_recoverLocation:(id)arg0;
- (BOOL)styleChanged;
- (long long)previousAlbumIndex;
- (id)offsetCacheDictionary;
- (void)setPreviousAlbumIndex:(long long)arg0;
- (void)p_coverImageStartAnimation:(id)arg0;
- (void)coverImageViewStartAnimationWithTimeInSecond:(double)arg0 count:(long long)arg1 size:(struct CGSize { double x0; double x1; })arg2 completion:(id /* block */)arg3;
- (BOOL)enableCoverImageView;
- (void)setGenerateImaging:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })p_perferredCoverSize;
- (id)coverTextEditView;
- (void)handleEditFinish:(id)arg0 textModel:(id)arg1 location:(unsigned long long)arg2;
- (BOOL)playerContentViewMaskToBounds;
- (void)setStyleChanged:(BOOL)arg0;
- (void)p_trackEditCoverTextWithEditingModel;
- (void)p_startEditingImpl;
- (id /* block */)showNavBarBlock;
- (void)setPreviousTitle:(id)arg0;
- (void)p_trackCompleteCoverTextWithEditingModel;
- (id /* block */)handleEditFinishBlock;
- (id /* block */)hideNavBarBlock;
- (void)handleStartEdit;
- (void)p_showMaskAndFakeView;
- (void)p_hideMaskAndFakeView;
- (void)p_moveCoverWithPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)previousTitle;
- (void)tapStickerOnStickerContainerView:(id)arg0;
- (void)showMaskViewWithContainerView:(id)arg0;
- (void)hideMaskViewWithContainerView:(id)arg0;
- (void)stickerContainerView:(id)arg0 updateStickerImage:(id)arg1;
- (void)stickerContainerView:(id)arg0 updataeStickerLocation:(id)arg1;
- (void)stickerContainerView:(id)arg0 moveCover:(struct CGPoint { double x0; double x1; })arg1;
- (void)didEndMoveCoverWithContainerView:(id)arg0;
- (id)initWithPublishViewModel:(id)arg0 editService:(id)arg1 sequenceEditService:(id)arg2 fontScale:(double)arg3;
- (id)generateCoverTextImage;
- (id)generateCoverTextImageWithScale:(double)arg0;
- (id)generateCoverTextModel;
- (void)recoverCoverTextStep1;
- (void)recoverCoverTextStep2:(id)arg0;
- (void)coverImageViewStopAnimation;
- (void)coverImageViewStartAnimationWithTimeInSecond:(double)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)cancelImageGenerator;
- (void)configCoverTextEditViewWithSuperView:(id)arg0;
- (void)handleEffectSelected:(id)arg0;
- (void)handleTitleSelected:(id)arg0;
- (struct CGPoint { double x0; double x1; })currentCoverCropOffset;
- (void)setEditingModel:(id)arg0;
- (BOOL)generateImaging;
- (void)setInteractionImageView:(id)arg0;
- (void)setFakeProfileView:(id)arg0;
- (void)setHideNavBarBlock:(id /* block */)arg0;
- (void)setShowNavBarBlock:(id /* block */)arg0;
- (void)setHandleEditFinishBlock:(id /* block */)arg0;
- (void)setStickerContentView:(id)arg0;
- (void)setSafeMaskView:(id)arg0;
- (void)setCoverTextEditView:(id)arg0;
- (void)setOffsetCacheDictionary:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (id)imageGenerator;
- (id)playerView;
- (void)setDelegate:(id)arg0;
- (void)setPlayerView:(id)arg0;
- (void)viewDidLoad;
- (void)setImageGenerator:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (id)cropView;
- (void)setCropView:(id)arg0;

@end
