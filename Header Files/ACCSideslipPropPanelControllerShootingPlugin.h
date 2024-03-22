//
//     Generated by private class-dump
//

@class ACCSideslipPropLongPressGestureRecognizer, NSString, UIView;
@protocol ACCSideslipPropPanelControllerProtocol, ACCRecordPropService, ACCRecorderSideslipViewContainerProtocol, ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropViewContainerProtocol, ACCLightningCaptureButtonAnimationProtocol, ACCShootSourceService;

@interface ACCSideslipPropPanelControllerShootingPlugin : NSObject <UIGestureRecognizerDelegate, ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol> {
    id<ACCSideslipPropPanelControllerProtocol> _controller;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
    id<ACCRecorderSideslipViewContainerProtocol> _slipRecorderViewContainer;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCRecordPropService> _propService;
    ACCSideslipPropLongPressGestureRecognizer *_longPressGesture;
    UIView<ACCLightningCaptureButtonAnimationProtocol> *_recordButton;
    id<ACCShootSourceService> _shootSourceService;
}

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCRecorderSideslipViewContainerProtocol> slipRecorderViewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) ACCSideslipPropLongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) UIView<ACCLightningCaptureButtonAnimationProtocol> *recordButton;
@property (weak, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sideslipPropService;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setSideslipPropService:(id)arg0;
- (id)sideslipPropPanelService;
- (void)setSideslipPropPanelService:(id)arg0;
- (id)shootSourceService;
- (void)setShootSourceService:(id)arg0;
- (void)sideslipPropPickCollectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)controllerViewDidLoad:(id)arg0;
- (void)p_bindService;
- (void)setupLongPressShooting;
- (id)slipRecorderViewContainer;
- (void)longPressShootingAction:(id)arg0;
- (BOOL)allowShooting;
- (void)p_startShootingIfNeeded;
- (void)setSlipRecorderViewContainer:(id)arg0;
- (void)setController:(id)arg0;
- (id)longPressGesture;
- (void).cxx_destruct;
- (id)controller;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)recordButton;
- (void)setRecordButton:(id)arg0;

@end
