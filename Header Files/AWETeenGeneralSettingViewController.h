//
//     Generated by private class-dump
//

@class AWETeenGeneralSettingViewModel, NSString, UILabel, UITableView;

@interface AWETeenGeneralSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    AWETeenGeneralSettingViewModel *_viewModel;
    long long _colorStyle;
    UILabel *_versionLabel;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenGeneralSettingViewModel *viewModel;
@property (nonatomic) long long colorStyle;
@property (retain, nonatomic) UILabel *versionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClick:(id)arg0;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg0;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (long long)colorStyle;
- (void)setColorStyle:(long long)arg0;

@end