//
//     Generated by private class-dump
//

@class UITableView, NSString, IESLiveVocalizationAuthorityStore, UIView, UILabel, UIButton;

@interface IESLiveVocalizationAuthorityViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, IESLiveAnchorPayFunctionSettingCellDelegate> {
    BOOL _showBackBtn;
    BOOL _useStandardPanel;
    IESLiveVocalizationAuthorityStore *_store;
    UIView *_maskView;
    UIView *_baseView;
    UIButton *_backBtn;
    UILabel *_titleLabel;
    UIView *_lineView;
    UITableView *_tableView;
}

@property (retain, nonatomic) IESLiveVocalizationAuthorityStore *store;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL useStandardPanel;
@property (nonatomic) BOOL showBackBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (BOOL)useStandardPanel;
- (void)setUseStandardPanel:(BOOL)arg0;
- (void)settingCellClickControl:(id)arg0;
- (BOOL)showBackBtn;
- (void)setShowBackBtn:(BOOL)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)baseView;
- (id)store;
- (id)titleLabel;
- (id)maskView;
- (void)setStore:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setBaseView:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)backAction;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;

@end
