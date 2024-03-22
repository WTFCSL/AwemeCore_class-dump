//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWEIMPolymerizationDiggDataController, AWEUserModel, UITableView, NSMutableArray, NSNumber, NSIndexPath;

@interface AWEIMPolymerizationDiggListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEIMNoticeUserAction, AWEUserMessage, AWEIMPolymerizationDiggCellDelegate, AWERouterViewControllerProtocol, AWEZoomTransitionOuterContextProvider> {
    BOOL _isOnline;
    NSNumber *_noticeID;
    AWEAwemeModel *_model;
    AWEUserModel *_userModel;
    NSString *_tagText;
    NSIndexPath *_zoomIndexPath;
    UITableView *_tableView;
    AWEIMPolymerizationDiggDataController *_dataController;
    NSMutableArray *_dataSource;
    long long _noticeType;
    long long _diggType;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMPolymerizationDiggDataController *dataController;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long diggType;
@property (copy, nonatomic) NSNumber *noticeID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL isOnline;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSIndexPath *zoomIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishUnBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClicked;
- (void)setDataController:(id)arg0;
- (void)setTagText:(id)arg0;
- (id)tagText;
- (void)coverTappedWithOptions:(id)arg0;
- (void)setNoticeID:(id)arg0;
- (long long)diggType;
- (id)noticeID;
- (void)setNoticeType:(long long)arg0;
- (void)p_setupUI;
- (void)p_endRefreshing;
- (void)p_loadMoreData;
- (void)p_refreshDataWithInitial:(BOOL)arg0;
- (void)p_updateCellNameLabel:(id)arg0 user:(id)arg1;
- (void)setZoomIndexPath:(id)arg0;
- (id)zoomIndexPath;
- (id)p_fromUserWithModel:(id)arg0;
- (void)nicknameTappedWithDiggModel:(id)arg0;
- (void)avatarTappedWithDiggModel:(id)arg0;
- (void)p_trackerInnerMessageWithAction:(id)arg0 diggModel:(id)arg1;
- (void)setDiggType:(long long)arg0;
- (void)p_trackerEnterDiggList;
- (id)truncationNameStringMaxWidth:(double)arg0 str:(id)arg1 attributes:(id)arg2;
- (void)p_setupDataSource;
- (void)trackAndTransToProfileWithUser:(id)arg0 enterMethod:(id)arg1 enterPosition:(id)arg2;
- (void)clickHeaderViewCloseTapped;
- (void)p_updateTitleName:(id)arg0;
- (void)updateUserStatus:(id)arg0 status:(long long)arg1;
- (void)setModel:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)headerView;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isOnline;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1;
- (long long)noticeType;
- (id)dataController;
- (void)setIsOnline:(BOOL)arg0;

@end
