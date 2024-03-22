//
//     Generated by private class-dump
//

@class HGAboutSummaryView, NSString, UITableView, HGButton, HGAboutInfoModel, HGUniqueID;

@interface HGAboutController : HGAboutBaseController <UITableViewDelegate, UITableViewDataSource> {
    NSString *_appID;
    HGUniqueID *_uniqueID;
    HGAboutInfoModel *_aboutModel;
    HGAboutSummaryView *_summaryView;
    UITableView *_tableView;
    HGButton *_openAppBtn;
}

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) HGAboutInfoModel *aboutModel;
@property (retain, nonatomic) HGAboutSummaryView *summaryView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HGButton *openAppBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)openAppBtn;
- (void)setOpenAppBtn:(id)arg0;
- (void)setAboutModel:(id)arg0;
- (id)aboutModel;
- (void)setAppID:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)uniqueID;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUniqueID:(id)arg0;
- (id)appID;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUniqueID:(id)arg0;
- (id)summaryView;
- (void)setSummaryView:(id)arg0;

@end