//
//     Generated by private class-dump
//

@class IESLiveAnchorStickerViewModel, IESLiveStickerItemNewModel, NSTimer, NSString, CALayer, CAShapeLayer, IESLiveStickerView, UITextField, IESLiveStickerViewController, UILabel;
@protocol IESLiveStickerAnchorActions, IESLiveGameModule;

@interface IESLiveAnchorStickerFragment : IESLiveRoomComponent <IESLiveStickerViewControllerDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, IESLiveAnchorToolsModuleStickerInterface, IESLiveSocialInteractAction, HTSLiveMessageSubscriber, IESLiveStickerAnchorLayoutProtocol, HTSLiveStickerRouter, IESLivePublicScreenLayoutSubscriber> {
    BOOL _keyboardDidShow;
    BOOL _isDeleteHintLabelMagnified;
    BOOL _imageStickerEffectivelyUsed;
    BOOL _textStickerEffectivelyUsed;
    BOOL _shouldHideSticker;
    BOOL _shouldHideStickerWithPin;
    IESLiveAnchorStickerViewModel *_viewModel;
    IESLiveStickerView *_imageStickerView;
    IESLiveStickerView *_textStickerView;
    UITextField *_stickerTextField;
    id<IESLiveGameModule> _gameModule;
    id<IESLiveStickerAnchorActions> _anchorActions;
    double _messageListTop;
    CAShapeLayer *_outlineLayer;
    CALayer *_topLayer;
    CALayer *_chatLayer;
    CALayer *_bottomLayer;
    UILabel *_deleteHintLabel;
    IESLiveStickerViewController *_stickerListViewController;
    IESLiveStickerItemNewModel *_imageModel;
    IESLiveStickerItemNewModel *_textModel;
    NSTimer *_imageStickerReportTimer;
    NSTimer *_textStickerReportTimer;
    struct CGPoint { double x; double y; } _startMovePoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundaryRect;
}

@property (retain, nonatomic) IESLiveAnchorStickerViewModel *viewModel;
@property (retain, nonatomic) IESLiveStickerView *imageStickerView;
@property (retain, nonatomic) IESLiveStickerView *textStickerView;
@property (retain, nonatomic) UITextField *stickerTextField;
@property (retain, nonatomic) id<IESLiveGameModule> gameModule;
@property (retain, nonatomic) id<IESLiveStickerAnchorActions> anchorActions;
@property (nonatomic) struct CGPoint { double x; double y; } startMovePoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundaryRect;
@property (nonatomic) double messageListTop;
@property (nonatomic) BOOL keyboardDidShow;
@property (nonatomic) BOOL isDeleteHintLabelMagnified;
@property (retain, nonatomic) CAShapeLayer *outlineLayer;
@property (retain, nonatomic) CALayer *topLayer;
@property (retain, nonatomic) CALayer *chatLayer;
@property (retain, nonatomic) CALayer *bottomLayer;
@property (retain, nonatomic) UILabel *deleteHintLabel;
@property (retain, nonatomic) IESLiveStickerViewController *stickerListViewController;
@property (retain, nonatomic) IESLiveStickerItemNewModel *imageModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *textModel;
@property (retain, nonatomic) NSTimer *imageStickerReportTimer;
@property (retain, nonatomic) NSTimer *textStickerReportTimer;
@property (nonatomic) BOOL imageStickerEffectivelyUsed;
@property (nonatomic) BOOL textStickerEffectivelyUsed;
@property (nonatomic) BOOL shouldHideSticker;
@property (nonatomic) BOOL shouldHideStickerWithPin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (id)topLayer;
- (id)bottomLayer;
- (id)textModel;
- (void)setTextModel:(id)arg0;
- (id)imageModel;
- (void)setImageModel:(id)arg0;
- (void)componentDidAppear;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)arg0;
- (id)stickerContainerView;
- (void)setTopLayer:(id)arg0;
- (void)keyBoardWillHide:(id)arg0;
- (void)setBottomLayer:(id)arg0;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (double)liveWidth;
- (void)uploadStickers;
- (void)startInteractiveWithScene:(unsigned long long)arg0;
- (void)endInteractiveWithScene:(unsigned long long)arg0;
- (void)hideCurrentSticker:(BOOL)arg0;
- (void)resumeCurrentSticker:(BOOL)arg0;
- (void)showStickerPickView;
- (void)setAuditLabelHidden:(BOOL)arg0;
- (void)setTextStickerContent:(id)arg0;
- (id)gameModule;
- (void)setGameModule:(id)arg0;
- (void)setStartMovePoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })startMovePoint;
- (void)stopImageStickerReportTimer;
- (void)stopTextStickerReportTimer;
- (void)layoutAnchorTextStickerViewWithModel:(id)arg0;
- (void)layoutAnchorImageStickerViewWithModel:(id)arg0;
- (void)removeAnchorTextStickerView;
- (void)removeAnchorImageStickerView;
- (BOOL)isStickerApplied;
- (void)hideCurrentStickerWithAnimated:(BOOL)arg0;
- (void)resumeCurrentStickerWithAnimated:(BOOL)arg0;
- (id)stickerTextField;
- (void)setStickerListViewController:(id)arg0;
- (BOOL)imageStickerEffectivelyUsed;
- (BOOL)textStickerEffectivelyUsed;
- (id)anchorActions;
- (void)addStickerItem;
- (void)refreshStickerView;
- (id)textStickerView;
- (void)updateStickerView:(id)arg0 withModel:(id)arg1;
- (id)imageStickerView;
- (BOOL)shouldHideSticker;
- (BOOL)shouldHideStickerWithPin;
- (void)addGestureForSticker:(id)arg0;
- (void)setImageStickerView:(id)arg0;
- (void)setTextStickerView:(id)arg0;
- (void)setImageStickerEffectivelyUsed:(BOOL)arg0;
- (void)setImageStickerReportTimer:(id)arg0;
- (void)setTextStickerEffectivelyUsed:(BOOL)arg0;
- (void)setTextStickerReportTimer:(id)arg0;
- (id)imageStickerReportTimer;
- (id)textStickerReportTimer;
- (void)setBoundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)generateOutlineLayer;
- (id)chatLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundaryRect;
- (id)deleteHintLabel;
- (struct CGPoint { double x0; double x1; })defaultStickerCenterWithSize:(struct CGSize { double x0; double x1; })arg0;
- (double)messageListTop;
- (BOOL)isStickerOversized:(id)arg0;
- (void)_deleteStickerView:(id)arg0;
- (double)currentSceneTopPadding;
- (id)stickerListViewController;
- (id)hiddenAnimationWithDuration:(double)arg0;
- (void)setShouldHideSticker:(BOOL)arg0;
- (void)loadTextStickerView;
- (void)startTextStickerReportTimer;
- (void)trackAnchorTextStickerShow;
- (void)loadImageStickerView;
- (void)startImageStickerReportTimer;
- (void)trackAnchorImageStickerShow;
- (void)__removeTextStickerView;
- (void)__removeImageStickerView;
- (void)stickerMoved:(id)arg0;
- (void)stickerClicked:(id)arg0;
- (id)modelForSticker:(id)arg0;
- (void)loadStickerTextField;
- (void)_showOutlineLayer:(BOOL)arg0;
- (void)_showDeleteHintLabel;
- (void)_checkIfStickerView:(id)arg0 inDeleteArea:(BOOL)arg1;
- (void)_tryResolveStickerHorizontalAlignment:(id)arg0;
- (void)_dismissDeleteHintLabel;
- (BOOL)isDeleteHintLabelMagnified;
- (void)setIsDeleteHintLabelMagnified:(BOOL)arg0;
- (void)stickerItemClick;
- (void)updateStickerView:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 animated:(BOOL)arg2;
- (BOOL)isStickerOverBounded:(id)arg0;
- (double)currentSceneStickerSafeAreaHeight;
- (void)_dismissOversizeStickerIfNeeded;
- (void)_resolveOverboundedStickerIfNeeded;
- (void)setMessageListTop:(double)arg0;
- (void)updateBoundaryRect;
- (void)setStickerTextField:(id)arg0;
- (void)setKeyboardDidShow:(BOOL)arg0;
- (BOOL)textShouldReturn:(id)arg0;
- (void)liveStickerViewController:(id)arg0 didSelectStickerModel:(id)arg1;
- (double)designatedMessageListWidth;
- (void)setAnchorActions:(id)arg0;
- (void)setChatLayer:(id)arg0;
- (void)setDeleteHintLabel:(id)arg0;
- (void)setShouldHideStickerWithPin:(BOOL)arg0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)addObserver;
- (BOOL)keyboardDidShow;
- (void)textFieldDidChange:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)outlineLayer;
- (void)setOutlineLayer:(id)arg0;

@end
