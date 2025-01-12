//
//     Generated by private class-dump
//

@class AWEECOMIMNavigationBar, NSString;

@interface AWEECOMIMBaseViewController : UIViewController <BTMPageManagableProtocol> {
    AWEECOMIMNavigationBar *_navigationBar;
}

@property (retain, nonatomic) AWEECOMIMNavigationBar *navigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)refreshWithIsDarkTheme;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)arg0;
- (id)btmParamsDictWithEnterNewPage:(BOOL)arg0;
- (id)btmPageID;
- (id)naviBarLeftButtonImageDarkTheme;
- (id)naviBarLeftButtonImageDefault;
- (void).cxx_destruct;
- (id)navigationBar;
- (BOOL)isDarkTheme;
- (void)setNavigationBar:(id)arg0;
- (void)viewDidLoad;
- (void)setTitle:(id)arg0;
- (id)pageName;

@end
