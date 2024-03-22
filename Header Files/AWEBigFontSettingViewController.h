//
//     Generated by private class-dump
//

@class NSString, AWEBigFontSettingBottomView, AWEBigFontPreview, UIView;

@interface AWEBigFontSettingViewController : UIViewController <AWERouterViewControllerProtocol> {
    NSString *_enterFrom;
    NSString *_referString;
    AWEBigFontPreview *_previewView;
    AWEBigFontSettingBottomView *_bottomView;
    UIView *_rightNaviBarButton;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEBigFontPreview *previewView;
@property (retain, nonatomic) AWEBigFontSettingBottomView *bottomView;
@property (retain, nonatomic) UIView *rightNaviBarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)awe_themeReload;
- (void)backButtonClicked;
- (void)addNotifications;
- (void)systemFontSizeChanged;
- (void)ensureButtonClicked;
- (void)setRightNaviBarButton:(id)arg0;
- (id)rightNaviBarButton;
- (unsigned long long)getSystemReflectFontSelectIndex;
- (void)showElderAlertIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (void)setPreviewView:(id)arg0;
- (id)previewView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)bottomView;
- (void)setBottomView:(id)arg0;

@end