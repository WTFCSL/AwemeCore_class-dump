//
//     Generated by private class-dump
//

@class UIButton, CECMomentCameraFlipViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraFlipComponent : AFDMomentCameraBaseComponent {
    BOOL _flipFlag;
    CECMomentCameraFlipViewModel *_viewModel;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    UIButton *_flipButton;
}

@property (retain, nonatomic) CECMomentCameraFlipViewModel *viewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (nonatomic) BOOL flipFlag;
@property (retain, nonatomic) UIButton *flipButton;

- (void)bindObserver;
- (void)componentDidLoad;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (void)didTapFlipButton;
- (void)setFlipFlag:(BOOL)arg0;
- (BOOL)flipFlag;
- (void)setFlipButton:(id)arg0;
- (id)flipButton;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
