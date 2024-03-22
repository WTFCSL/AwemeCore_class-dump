//
//     Generated by private class-dump
//

@protocol ACCBusinessInputData, ACCUIViewControllerProtocol;

@interface ACCVideoCoverEditServiceContainer : IESStaticContainer {
    id<ACCBusinessInputData> _inputData;
    id<ACCUIViewControllerProtocol> _viewController;
}

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCUIViewControllerProtocol> viewController;

- (id)provideSingleton:(id)arg0 ACCVideoCoverEditSessionProtocol:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCVideoCoverEditServiceProtocol:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCEditVideoCoverMixedProtocol:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCVideoCoverEditTemplateProtocol:(id)arg1;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
