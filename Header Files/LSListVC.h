//
//     Generated by private class-dump
//

@class UIView, NSString, LSNaviBar, MJRefreshComponent, NSMutableDictionary, UITableView, NSObject, LSStatusView;
@protocol LSAdditionalViewProtocol, LSListVMProtocol, LSListVCDelegate;

@interface LSListVC : UIViewController <LSAdditionalViewDelegate, LSListVCProtocol, LSListVMDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL _hasShowedData;
    id<LSListVCDelegate> _vcDelegate;
    LSStatusView *_statusView;
    LSNaviBar *_naviBar;
    UITableView *_tableView;
    MJRefreshComponent *_refreshHeader;
    MJRefreshComponent *_refreshFooter;
    UIView<LSAdditionalViewProtocol> *_topView;
    UIView<LSAdditionalViewProtocol> *_bottomView;
    NSObject<LSListVMProtocol> *_listVM;
    unsigned long long _listStyle;
    NSMutableDictionary *_cellReuseIDAndViews;
    UIView *_topViewContainer;
    UIView *_bottomViewContainer;
}

@property (nonatomic) unsigned long long listStyle;
@property (readonly, nonatomic) NSMutableDictionary *cellReuseIDAndViews;
@property (readonly, nonatomic) UIView *topViewContainer;
@property (readonly, nonatomic) UIView *bottomViewContainer;
@property (nonatomic) BOOL hasShowedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LSListVCDelegate> vcDelegate;
@property (retain, nonatomic) LSStatusView *statusView;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MJRefreshComponent *refreshHeader;
@property (retain, nonatomic) MJRefreshComponent *refreshFooter;
@property (retain, nonatomic) UIView<LSAdditionalViewProtocol> *topView;
@property (retain, nonatomic) UIView<LSAdditionalViewProtocol> *bottomView;
@property (retain, nonatomic) NSObject<LSListVMProtocol> *listVM;

- (id)listVM;
- (void)setRefreshHeader:(id)arg0;
- (void)p_setupUI;
- (id)naviBar;
- (void)setNaviBar:(id)arg0;
- (void)setListVM:(id)arg0;
- (void)closePage;
- (id)refreshHeader;
- (id)refreshFooter;
- (void)setRefreshFooter:(id)arg0;
- (void)setVcDelegate:(id)arg0;
- (id)vcDelegate;
- (void)p_bindModel;
- (void)additionalView:(id)arg0 heightChanged:(double)arg1;
- (id)initWithListStyle:(unsigned long long)arg0;
- (id)bottomViewContainer;
- (void)cellDidChangeHeightWithIndexPath:(id)arg0 needShowFull:(BOOL)arg1;
- (void)listVM:(id)arg0 action:(id)arg1;
- (id)topViewContainer;
- (void)p_pageStateChanged:(long long)arg0;
- (void)p_naviBarStateChanged:(long long)arg0;
- (void)p_refreshHeaderStateChanged:(long long)arg0;
- (void)p_refreshFooterStateChanged:(long long)arg0;
- (id)useRefreshComponent;
- (id)useLoadMoreComponent;
- (BOOL)hasShowedData;
- (void)setHasShowedData:(BOOL)arg0;
- (void)disableLoadMoreRefreshComponent;
- (void)resetLoadMoreRefreshComponent;
- (id)cellReuseIDAndViews;
- (void)listVM:(id)arg0 cellVMHeightDidChanged:(id)arg1 needShowFull:(BOOL)arg2;
- (void)showPageWithFromVC:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)modalPresentationStyle;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)topView;
- (id)bottomView;
- (BOOL)hidesBottomBarWhenPushed;
- (void)setTopView:(id)arg0;
- (void)setBottomView:(id)arg0;
- (unsigned long long)listStyle;
- (void)setListStyle:(unsigned long long)arg0;
- (id)statusView;
- (void)setStatusView:(id)arg0;

@end
