//
//     Generated by private class-dump
//

@class NSString, AWEBigFontPanelViewController, DUXSheet, UIViewController;

@interface AWEBigFontAlertManager : NSObject <AWEAlertProtocol, DUXSheetDelegate, AWEBigFontPanelViewControllerDelegate, AWEBigFontAlertManagerProtocol> {
    BOOL _showing;
    BOOL _oldDefinesPresentationContext;
    DUXSheet *_sheet;
    AWEBigFontPanelViewController *_panelVC;
    UIViewController *_sourceVC;
}

@property BOOL showing;
@property (weak, nonatomic) DUXSheet *sheet;
@property (weak, nonatomic) AWEBigFontPanelViewController *panelVC;
@property (nonatomic) BOOL oldDefinesPresentationContext;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)didClickLinkText;
- (BOOL)shouldShowAlert;
- (void)setSourceVC:(id)arg0;
- (id)sourceVC;
- (id)panelVC;
- (void)setPanelVC:(id)arg0;
- (void)observeNotifications;
- (BOOL)shouldWaitOtherNotification;
- (id)getBigFontGuidenceAlert;
- (void)showBigFontGuidenceOnFeedIfNeeded;
- (void)setOldDefinesPresentationContext:(BOOL)arg0;
- (void)trackAlertCloseWithExitMethod:(id)arg0;
- (BOOL)oldDefinesPresentationContext;
- (void)didClickEnsureButton;
- (void)didChangeSwitchValue:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (void)dealloc;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg0;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
