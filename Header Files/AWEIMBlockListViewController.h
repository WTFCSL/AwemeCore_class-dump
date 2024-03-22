//
//     Generated by private class-dump
//

@class AWEPrivacySettingBasicEmptyView, NSString, AWEIMBlockListDataController, UITableView;

@interface AWEIMBlockListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWERouterViewControllerProtocol, AWEIMBlockListViewControllerProtocol> {
    BOOL _useCardUIStyle;
    NSString *_enterFrom;
    UITableView *_tableView;
    AWEPrivacySettingBasicEmptyView *_emptyView;
    AWEIMBlockListDataController *_dataController;
    long long _type;
    NSString *_emptyViewDescription;
    NSString *_cellBtnAttentionTitle;
    NSString *_cellBtnNormalTitle;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEPrivacySettingBasicEmptyView *emptyView;
@property (retain, nonatomic) AWEIMBlockListDataController *dataController;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *emptyViewDescription;
@property (copy, nonatomic) NSString *cellBtnAttentionTitle;
@property (copy, nonatomic) NSString *cellBtnNormalTitle;
@property (nonatomic) BOOL useCardUIStyle;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishUnBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHideMyPostFromUser:(id)arg0 status:(long long)arg1;
- (void)didFinishShowMyPostToUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishUnHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (void)setDataController:(id)arg0;
- (void)_endRefreshing;
- (void)backBtnClicked:(id)arg0;
- (BOOL)useCardUIStyle;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (void)_loadMoreData;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)configWithListType;
- (void)_showEmptyView;
- (void)_dismissEmptyView;
- (void)setEmptyViewDescription:(id)arg0;
- (id)emptyViewDescription;
- (id)cellBtnAttentionTitle;
- (id)cellBtnNormalTitle;
- (void)blockBtnClickedWithUser:(id)arg0 indexPath:(id)arg1;
- (void)hideMyPostBtnClickedWithUser:(id)arg0 indexPath:(id)arg1;
- (void)hideHerPostBtnClickedWithUser:(id)arg0 indexPath:(id)arg1;
- (BOOL)isUserBlockStatusBlockedOrIsTeenModeEnable:(id)arg0;
- (void)__refreshRowWithIndex:(long long)arg0;
- (void)__refreshUserWithID:(id)arg0 WithType:(long long)arg1 ToNewStatus:(long long)arg2;
- (void)__refreshUserRemarkWithUser:(id)arg0;
- (void)__refreshUserFollowStatusWithUser:(id)arg0 status:(long long)arg1;
- (void)announceAccessibility:(id)arg0 delay:(double)arg1;
- (void)setCellBtnAttentionTitle:(id)arg0;
- (void)setCellBtnNormalTitle:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(long long)arg2;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)_fetchData;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)dataController;
- (void)_setupUI;

@end