//
//     Generated by private class-dump
//

@class NSString, AWESettingBaseViewModel, UIView;

@interface AWEPrivacySettingFindMyWayViewController : AWESettingBaseViewController {
    BOOL _hasAppear;
    AWESettingBaseViewModel *_viewModel;
    NSString *_enterFrom;
    UIView *_indicatorLineView;
}

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (nonatomic) BOOL hasAppear;

- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg0;
- (id)indicatorLineView;
- (void)setIndicatorLineView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end