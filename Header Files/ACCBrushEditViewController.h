//
//     Generated by private class-dump
//

@class NLEInterface_OC, NSString, ACCBrushEditViewModel, DVEBrushEditHelper, ACCStickerContainerView, ACCBrushEditTrackManager, NSArray, AWEBinding, ACCBrushEditView, UIView;
@protocol DVECoreBrushStickerEditorProtocol, DVENLEEditorProtocol, ACCSequenceEditServiceProtocol, DVEBrushEditPluginProtocol, ACCStickerServiceProtocol, ACCEditServiceProtocol;

@interface ACCBrushEditViewController : UIViewController <DVEBrushPreviewEditPluginDelegate, DVECommonLargeSliderDelegate, ACCBrushTopBarDelegate> {
    BOOL _hasStartedTransferring;
    ACCBrushEditView *_brushEditView;
    UIView *_mediaContainerView;
    id<ACCEditServiceProtocol> _editService;
    ACCBrushEditViewModel *_viewModel;
    id<DVECoreBrushStickerEditorProtocol> _brushEditor;
    id<DVENLEEditorProtocol> _nleEditor;
    id<DVEBrushEditPluginProtocol> _brushPlugin;
    ACCBrushEditTrackManager *_trackManager;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    NSString *_brushRootPath;
    NSArray *_sizeOfSolidLine;
    NSArray *_sizeOfHighlighterLine;
    NSArray *_sizeOfArrowLine;
    NSArray *_sizeOfEraser;
    NSString *_draftPath;
    ACCStickerContainerView *_stickerContainerView;
    double _containerScale;
    AWEBinding *_transferBinding;
    id<ACCStickerServiceProtocol> _stickerService;
    struct CGPoint { double x; double y; } _containerCenter;
}

@property (weak, nonatomic) ACCBrushEditViewModel *viewModel;
@property (readonly, weak, nonatomic) NLEInterface_OC *nle;
@property (readonly, weak, nonatomic) DVEBrushEditHelper *brushHelper;
@property (weak, nonatomic) id<DVECoreBrushStickerEditorProtocol> brushEditor;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVEBrushEditPluginProtocol> brushPlugin;
@property (retain, nonatomic) ACCBrushEditTrackManager *trackManager;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (copy, nonatomic) NSString *brushRootPath;
@property (copy, nonatomic) NSArray *sizeOfSolidLine;
@property (copy, nonatomic) NSArray *sizeOfHighlighterLine;
@property (copy, nonatomic) NSArray *sizeOfArrowLine;
@property (copy, nonatomic) NSArray *sizeOfEraser;
@property (copy, nonatomic) NSString *draftPath;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (nonatomic) double containerScale;
@property (nonatomic) struct CGPoint { double x; double y; } containerCenter;
@property (nonatomic) BOOL hasStartedTransferring;
@property (retain, nonatomic) AWEBinding *transferBinding;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCBrushEditView *brushEditView;
@property (weak, nonatomic) UIView *mediaContainerView;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configData;
- (id)trackManager;
- (void)setTrackManager:(id)arg0;
- (id)nleEditor;
- (id)nle;
- (void)setNleEditor:(id)arg0;
- (id)brushHelper;
- (id)brushPlugin;
- (void)restoreSelectColorIfNeedWithColorValues:(id)arg0;
- (id)brushEditor;
- (id)updatedColorWithColor:(id)arg0;
- (void)trackBrushColorWithValue:(id)arg0;
- (void)didClickUndo;
- (void)trackBrushChangedWithValue:(id)arg0;
- (void)trackBrushSliderChanged;
- (void)trackBrushUndo;
- (void)trackBrushRedo;
- (void)setBrushEditor:(id)arg0;
- (void)setBrushPlugin:(id)arg0;
- (void)brushDidPanBegan:(id)arg0;
- (void)brushDidPanChanged:(id)arg0;
- (void)brushDidPanEnded:(id)arg0;
- (void)brushDidDoublePan:(id)arg0;
- (void)brushDidScale:(double)arg0 shouldChange:(BOOL)arg1 gesture:(id)arg2;
- (void)didClickDone;
- (void)didSelectBrush:(id)arg0;
- (void)sliderInteractionDidBegin:(id)arg0;
- (void)sliderInteractionDidEnd:(id)arg0;
- (void)bindServiceInject:(id)arg0;
- (void)setDraftPath:(id)arg0;
- (id)draftPath;
- (id)mediaContainerView;
- (void)setMediaContainerView:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)stickerContainerView;
- (void)setStickerContainerView:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)initWithPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setHolderImage:(id)arg0;
- (void)playNLEOnPreview;
- (void)hiddenHolderView;
- (id)brushEditView;
- (void)setupBrushSlot;
- (void)setupTransferObserve;
- (id)sizeOfSolidLine;
- (void)configScale;
- (struct CGPoint { double x0; double x1; })containerCenter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculate4_3MaskCornerViewRect;
- (void)trackEnterBrushPage;
- (void)addMaskConrnerView;
- (void)setHasStartedTransferring:(BOOL)arg0;
- (BOOL)hasStartedTransferring;
- (void)setupBrushPageWithViewModel:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setTransferBinding:(id)arg0;
- (void)setBrushEditView:(id)arg0;
- (id)brushRootPath;
- (id)sizeOfHighlighterLine;
- (id)sizeOfEraser;
- (id)sizeOfArrowLine;
- (id)transferBinding;
- (void)trackSaveBrush;
- (id)saveBrushSticker;
- (void)trackPreviewPinch;
- (void)setContainerScale:(double)arg0;
- (void)setContainerCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)didLongPressUndo;
- (void)setBrushRootPath:(id)arg0;
- (void)setSizeOfSolidLine:(id)arg0;
- (void)setSizeOfHighlighterLine:(id)arg0;
- (void)setSizeOfArrowLine:(id)arg0;
- (void)setSizeOfEraser:(id)arg0;
- (double)containerScale;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupService;

@end