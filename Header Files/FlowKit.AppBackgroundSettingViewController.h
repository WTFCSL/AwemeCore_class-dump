//
//     Generated by private class-dump
//

@interface FlowKit.AppBackgroundSettingViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ safeAreaTop;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ topInset;
    void /* unknown type, empty encoding */ lastSelectedIndexPath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModelList;
    void /* unknown type, empty encoding */ contentBack;
    void /* unknown type, empty encoding */ backButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ tableView;
}

- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)viewDidLoad;
- (void)back;

@end
