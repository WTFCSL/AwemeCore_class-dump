//
//     Generated by private class-dump
//

@class ACCCameraSubscription, ACCTrimCropEditViewModel, NSString, UIView;
@protocol ACCTrimPlayControlService, ACCTrimCropSequencePieceServiceProtocol, ACCTrimCropBottomBarServiceProtocol, ACCTrimCropPieceProtocol;

@interface ACCTrimPlayerComponent : ACCTrimCropBaseComponent <ACCTrimCropBottomBarListener> {
    id<ACCTrimCropSequencePieceServiceProtocol> _sequencePieceService;
    id<ACCTrimCropPieceProtocol> _piece;
    ACCTrimCropEditViewModel *_viewModel;
    id<ACCTrimPlayControlService> _playControlService;
    id<ACCTrimCropBottomBarServiceProtocol> _trimCropBottomBarService;
    UIView *_playControlView;
    ACCCameraSubscription *_subscription;
    struct CGSize { double width; double height; } _previewContainerViewSize;
}

@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) ACCTrimCropEditViewModel *viewModel;
@property (weak, nonatomic) id<ACCTrimPlayControlService> playControlService;
@property (weak, nonatomic) id<ACCTrimCropBottomBarServiceProtocol> trimCropBottomBarService;
@property (nonatomic) struct CGSize { double width; double height; } previewContainerViewSize;
@property (retain, nonatomic) UIView *playControlView;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (id)playControlView;
- (void)setPlayControlView:(id)arg0;
- (id)sequencePieceService;
- (void)setSequencePieceService:(id)arg0;
- (id)piece;
- (void)setPiece:(id)arg0;
- (void)didSwitchToBar:(id)arg0;
- (id)trimCropBottomBarService;
- (void)setPreviewContainerViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)playControlService;
- (void)playControlAction:(id)arg0;
- (void)setPlayControlService:(id)arg0;
- (void)setTrimCropBottomBarService:(id)arg0;
- (struct CGSize { double x0; double x1; })previewContainerViewSize;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (void)willTransitionIn;
- (void)resetPlayer;

@end
