//
//     Generated by private class-dump
//

@class NSString, AWEACLView;

@interface AWENativeAppSetDevModeViewController : UIViewController {
    NSString *_appName;
    NSString *_appTypeStr;
    AWEACLView *_aclView;
    long long _itemType;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTypeStr;
@property (retain, nonatomic) AWEACLView *aclView;
@property (nonatomic) long long itemType;

- (void)onBackButtonClicked;
- (void)openButtonClicked;
- (void)setAppTypeStr:(id)arg0;
- (id)appTypeStr;
- (id)initWithAppName:(id)arg0 appType:(long long)arg1;
- (void)setAclView:(id)arg0;
- (id)aclView;
- (void)setAppName:(id)arg0;
- (id)appName;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
