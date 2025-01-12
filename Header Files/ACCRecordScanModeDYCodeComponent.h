//
//     Generated by private class-dump
//

@class ACCAnimatedButton, UILabel, NSString;
@protocol ACCRecorderViewContainer, ACCRecordCloseService, ACCRecordModeFactory, ACCRecordScanModelFlowService, ACCRecordSwitchModeService, ACCQRCodeResultHandlerProtocol;

@interface ACCRecordScanModeDYCodeComponent : ACCFeatureComponent <ACCRecordScanModelFlowSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber> {
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordScanModelFlowService> _scanFlowService;
    id<ACCRecordCloseService> _closeService;
    id<ACCRecordModeFactory> _modeFactory;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCQRCodeResultHandlerProtocol> _qrCodeResultHandler;
    ACCAnimatedButton *_codeButton;
    UILabel *_codeLabel;
    ACCAnimatedButton *_dyCodeButtonForAuthorityView;
    UILabel *_dyCodeLabelForAuthorityView;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanFlowService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCQRCodeResultHandlerProtocol> qrCodeResultHandler;
@property (retain, nonatomic) ACCAnimatedButton *codeButton;
@property (retain, nonatomic) UILabel *codeLabel;
@property (retain, nonatomic) ACCAnimatedButton *dyCodeButtonForAuthorityView;
@property (retain, nonatomic) UILabel *dyCodeLabelForAuthorityView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)modeFactory;
- (id)closeService;
- (void)setModeFactory:(id)arg0;
- (void)setCloseService:(id)arg0;
- (void)clickStickersBtn;
- (id)codeButton;
- (void)setCodeButton:(id)arg0;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)setDyCodeButtonForAuthorityView:(id)arg0;
- (void)setDyCodeLabelForAuthorityView:(id)arg0;
- (id)dyCodeButtonForAuthorityView;
- (id)dyCodeLabelForAuthorityView;
- (id)scanFlowService;
- (void)setScanFlowService:(id)arg0;
- (void)DYCodeUIShow:(BOOL)arg0;
- (id)qrCodeResultHandler;
- (void)updateAuthorityViewShow:(BOOL)arg0;
- (void)setQrCodeResultHandler:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)codeLabel;
- (void)setCodeLabel:(id)arg0;

@end
