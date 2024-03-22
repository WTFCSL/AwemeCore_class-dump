//
//     Generated by private class-dump
//

@class UILabel, NSString, UITableView;

@interface AWELunaUgCollectionListPopView : AWELunaUgPopView <UITableViewDelegate, UITableViewDataSource> {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UITableView *_tableView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_lightColorNamed:(id)arg0;
- (BOOL)p_songCountIsExceed;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)updateWithConfig:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setTitleLabel:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setUpUI;

@end
