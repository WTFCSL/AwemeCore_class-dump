//
//     Generated by private class-dump
//

@class NSString, AWEASSMusicNavView, ACCASMusicCategoryManager, UIView, UITableView;

@interface AWEASMusicCategoryTableViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource, HTSVideoAudioSupplier> {
    BOOL _shouldHideCellMoreButton;
    BOOL _isCommerce;
    BOOL _disableCutMusic;
    id /* block */ _completion;
    id /* block */ _enableClipBlock;
    id /* block */ _willClipBlock;
    UIView *_emptyView;
    UIView *_contentView;
    UITableView *_tableView;
    ACCASMusicCategoryManager *_manager;
    NSString *_previousPage;
    AWEASSMusicNavView *_navView;
    long long _recordMode;
    double _videoDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) ACCASMusicCategoryManager *manager;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (retain, nonatomic) AWEASSMusicNavView *navView;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL disableCutMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)isCommerce;
- (void)setIsCommerce:(BOOL)arg0;
- (long long)recordMode;
- (void)setRecordMode:(long long)arg0;
- (id)navView;
- (void)setNavView:(id)arg0;
- (void)setDisableCutMusic:(BOOL)arg0;
- (void)setEnableClipBlock:(id /* block */)arg0;
- (BOOL)shouldHideCellMoreButton;
- (void)setShouldHideCellMoreButton:(BOOL)arg0;
- (id /* block */)enableClipBlock;
- (BOOL)disableCutMusic;
- (id /* block */)willClipBlock;
- (void)setWillClipBlock:(id /* block */)arg0;
- (double)viewTopOffset;
- (void)cancelBtnClicked:(id)arg0;
- (void)dismissAllPages;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (id /* block */)completion;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setCompletion:(id /* block */)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)contentView;
- (void)setManager:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)refreshUI;
- (double)videoDuration;
- (void)viewDidLoad;
- (id)manager;
- (void)setContentView:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)loadData;
- (void)setupView;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setVideoDuration:(double)arg0;

@end
