//
//     Generated by private class-dump
//

@class DUXBasicSheet, AWEDanmakuSettingsView, NSDictionary, NSString, UIView, AWEPlayInteractionDanmakuStylesInfo;
@protocol AWEDanmakuSettingsPanelDelegate;

@interface AWEDanmakuSettingsPanelViewController : UIViewController <DUXSheetDelegate, AWEPadUIAdaptionViewTransitionObserver, AWEDanmakuSettingsPanelViewControllerProtocol> {
    BOOL _needShowDanmakuSwitch;
    BOOL _shouldShowDanmakuManager;
    BOOL _supportDanmakuMask;
    id<AWEDanmakuSettingsPanelDelegate> _delegate;
    NSDictionary *_logExtra;
    UIView *_topBar;
    AWEDanmakuSettingsView *_settingsView;
    unsigned long long _danmakuScene;
    UIView *_container;
    UIView *_effectView;
    DUXBasicSheet *_sheet;
    AWEPlayInteractionDanmakuStylesInfo *_danmakuInfo;
}

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) AWEDanmakuSettingsView *settingsView;
@property (nonatomic) unsigned long long danmakuScene;
@property (nonatomic) BOOL needShowDanmakuSwitch;
@property (nonatomic) BOOL shouldShowDanmakuManager;
@property (nonatomic) BOOL supportDanmakuMask;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *danmakuInfo;
@property (weak, nonatomic) id<AWEDanmakuSettingsPanelDelegate> delegate;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)showSettingsPanelInVerticalScreen:(BOOL)arg0 showMaskSwicth:(BOOL)arg1 supportShowMask:(BOOL)arg2 shouldShowDanmakuManager:(BOOL)arg3;

- (void)sheetDidDismiss:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (id)danmakuInfo;
- (id)initWithDanmakuScene:(unsigned long long)arg0 showMaskSwicth:(BOOL)arg1 supportShowMask:(BOOL)arg2 shouldShowDanmakuManager:(BOOL)arg3;
- (double)safeAreaOffset;
- (void)updateDanmakuCount:(id)arg0;
- (void)updateDanmakuViewWithSupportMask:(BOOL)arg0;
- (void)showSettingsPanelInLandscapeScreen;
- (void)setDanmakuInfo:(id)arg0;
- (id)settingsView;
- (void)setSettingsView:(id)arg0;
- (void)setDanmakuScene:(unsigned long long)arg0;
- (unsigned long long)danmakuScene;
- (void)trackCloseSettingsPanelIfNeeded;
- (BOOL)needShowDanmakuSwitch;
- (BOOL)supportDanmakuMask;
- (BOOL)shouldShowDanmakuManager;
- (void)setNeedShowDanmakuSwitch:(BOOL)arg0;
- (void)setShouldShowDanmakuManager:(BOOL)arg0;
- (void)setSupportDanmakuMask:(BOOL)arg0;
- (id)container;
- (id)effectView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setContainer:(id)arg0;
- (id)topBar;
- (id)delegate;
- (void)setEffectView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)setTopBar:(id)arg0;
- (void)setupUI;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
