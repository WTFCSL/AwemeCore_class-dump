//
//     Generated by private class-dump
//

@class UIButton, AFDMomentCameraFlipViewModel;
@protocol AFDMomentCameraFlowService;

@interface AFDMomentCameraFlipComponent : AFDMomentCameraBaseComponent {
    AFDMomentCameraFlipViewModel *_viewModel;
    id<AFDMomentCameraFlowService> _flowService;
    UIButton *_flipButton;
}

@property (retain, nonatomic) AFDMomentCameraFlipViewModel *viewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) UIButton *flipButton;

- (void)bindObserver;
- (void)componentDidLoad;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)didTapFlipButton;
- (void)setFlipButton:(id)arg0;
- (id)flipButton;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
