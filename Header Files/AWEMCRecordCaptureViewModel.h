//
//     Generated by private class-dump
//

@protocol AFDMomentCameraFlowService;

@interface AWEMCRecordCaptureViewModel : AFDMomentCameraBaseViewModel {
    BOOL _shouldShowCaptureButton;
    BOOL _userInteractionEnabled;
    BOOL _isDisabled;
    BOOL _shouldShowTipLabel;
    id<AFDMomentCameraFlowService> _flowService;
}

@property (nonatomic) BOOL shouldShowCaptureButton;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL shouldShowTipLabel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)setupViewModel;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (BOOL)shouldShowCaptureButton;
- (void)p_updateWithState:(long long)arg0;
- (void)setShouldShowCaptureButton:(BOOL)arg0;
- (void)setShouldShowTipLabel:(BOOL)arg0;
- (BOOL)shouldShowTipLabel;
- (void)setIsDisabled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (BOOL)isDisabled;
- (BOOL)userInteractionEnabled;

@end
