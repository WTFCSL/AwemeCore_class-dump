//
//     Generated by private class-dump
//

@class UIViewController, AFDMomentCameraContext, NSString, CECMomentCameraToolBarContainer, AFDMomentCameraViewModelFactory;
@protocol ACCServiceProvideRecipe, CKMCameraViewLayoutProtocol, IESServiceProvider, AFDMomentCameraBaseComponentDelegate;

@interface AFDMomentCameraBaseComponent : NSObject <AFDMomentCameraBaseComponentProtocol> {
    id<IESServiceProvider> _shootServiceProvider;
    id<AFDMomentCameraBaseComponentDelegate> _delegate;
    AFDMomentCameraViewModelFactory *_viewModelFactory;
    UIViewController *_controller;
    CECMomentCameraToolBarContainer *_toolBarContainer;
    AFDMomentCameraContext *_cameraContext;
    id<CKMCameraViewLayoutProtocol> _layoutManager;
    id<ACCServiceProvideRecipe> _serviceProvider;
}

@property (weak, nonatomic) id<IESServiceProvider> shootServiceProvider;
@property (weak, nonatomic) id<AFDMomentCameraBaseComponentDelegate> delegate;
@property (readonly, weak, nonatomic) AFDMomentCameraViewModelFactory *viewModelFactory;
@property (weak, nonatomic) UIViewController *controller;
@property (weak, nonatomic) CECMomentCameraToolBarContainer *toolBarContainer;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly, weak, nonatomic) id<CKMCameraViewLayoutProtocol> layoutManager;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraContext;
- (void)setCameraContext:(id)arg0;
- (void)componentDidLoad;
- (id)viewModelFactory;
- (void)setShootServiceProvider:(id)arg0;
- (id)toolBarContainer;
- (id)shootServiceProvider;
- (id)initWithViewModelFactory:(id)arg0 layoutManager:(id)arg1;
- (void)setToolBarContainer:(id)arg0;
- (void)setController:(id)arg0;
- (id)layoutManager;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)controller;
- (id)delegate;
- (id)serviceProvider;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
