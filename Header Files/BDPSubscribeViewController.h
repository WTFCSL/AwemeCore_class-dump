//
//     Generated by private class-dump
//

@class BDPSubscribe, NSMutableDictionary, BDPPermissionTableViewController, NSMutableArray;

@interface BDPSubscribeViewController : BDPBusinessXScreenViewController {
    BDPPermissionTableViewController *_tableViewController;
    NSMutableArray *_subscribeGroups;
    NSMutableDictionary *_allTemplateInfoDict;
    BDPSubscribe *_subs;
}

@property (retain, nonatomic) BDPPermissionTableViewController *tableViewController;
@property (retain, nonatomic) NSMutableDictionary *allTemplateInfoDict;
@property (weak, nonatomic) BDPSubscribe *subs;

- (void)switchOnChange:(id)arg0;
- (void)setAllTemplateInfoDict:(id)arg0;
- (void)setSubs:(id)arg0;
- (id)subs;
- (id)indexPathWithTag:(long long)arg0;
- (id)allTemplateInfoDict;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)arg0;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)arg0;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)setupView;
- (id)tableViewController;
- (void)setTableViewController:(id)arg0;
- (id)initWithUniqueID:(id)arg0;
- (void)updateNavigationTitle;

@end
