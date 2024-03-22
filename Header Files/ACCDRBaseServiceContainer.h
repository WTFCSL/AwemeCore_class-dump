//
//     Generated by private class-dump
//

@class UIViewController, AWEVideoPublishViewModel;
@protocol ACCDRViewControllerProtocol, ACCBusinessInputData;

@interface ACCDRBaseServiceContainer : IESStaticContainer {
    AWEVideoPublishViewModel *_model;
    UIViewController<ACCDRViewControllerProtocol> *_viewController;
    id<ACCBusinessInputData> _inputData;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *model;
@property (weak, nonatomic) UIViewController<ACCDRViewControllerProtocol> *viewController;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;

- (id)provideSingleton:(id)arg0 ACCDRImageService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCDRLynxUtilService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCDRContextProtocol:(id)arg1;
- (void)setModel:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end