//
//     Generated by private class-dump
//

@class AWESettingBaseViewModel;

@interface AWEAccountBindingViewController : AWESettingBaseViewController {
    BOOL _isUsingXiguaSDK;
    AWESettingBaseViewModel *_viewModel;
}

@property (nonatomic) BOOL isUsingXiguaSDK;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setIsUsingXiguaSDK:(BOOL)arg0;
- (BOOL)isUsingXiguaSDK;
- (void).cxx_destruct;
- (id)viewModel;
- (void)viewDidLoad;

@end