//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, UIView, DUXContentSheet, AWEPlayInteractionContext, UITableView, UIViewController;
@protocol AWEChapterCatalogPanelDelegate;

@interface AWEChapterCatalogPanelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate> {
    BOOL _shouldShowLoading;
    BOOL _isShowingTabbar;
    BOOL _hasDismissed;
    BOOL _allowHandlePlayedTime;
    BOOL _firstEnterPanel;
    BOOL _tracked;
    BOOL _clickChatpterSwitch;
    UITableView *_tableView;
    NSString *_referString;
    NSString *_fromPage;
    UIViewController *_containerVC;
    NSString *_enterMethod;
    NSArray *_chapterList;
    AWEAwemeModel *_model;
    UIView *_topBlackView;
    DUXContentSheet *_sheet;
    id<AWEChapterCatalogPanelDelegate> _delegate;
    long long _selectedIndex;
    AWEPlayInteractionContext *_playContext;
    id /* block */ _playedTimeHandler;
    double _startTime;
}

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSArray *chapterList;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *topBlackView;
@property (nonatomic) BOOL shouldShowLoading;
@property (nonatomic) BOOL isShowingTabbar;
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) BOOL allowHandlePlayedTime;
@property (nonatomic) BOOL firstEnterPanel;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (weak, nonatomic) id<AWEChapterCatalogPanelDelegate> delegate;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) AWEPlayInteractionContext *playContext;
@property (copy, nonatomic) id /* block */ playedTimeHandler;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL tracked;
@property (nonatomic) BOOL clickChatpterSwitch;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *fromPage;
@property (weak, nonatomic) UIViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithModel:(id)arg0 referString:(id)arg1 enterMethod:(id)arg2 fromPage:(id)arg3 delegate:(id)arg4 context:(id)arg5;

- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (void)sheetWillDismiss:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)sheet:(id)arg0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 withUserInteraction:(BOOL)arg2;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (id)dux_titleForColoseButton;
- (void)setFromPage:(id)arg0;
- (id)chapterList;
- (void)setChapterList:(id)arg0;
- (BOOL)isShowingTabbar;
- (void)configureModel:(id)arg0 referString:(id)arg1 enterMethod:(id)arg2 fromPage:(id)arg3 chapterList:(id)arg4 context:(id)arg5;
- (void)setIsShowingTabbar:(BOOL)arg0;
- (void)partialSheetWillShow:(id)arg0;
- (void)setPlayContext:(id)arg0;
- (void)setAllowHandlePlayedTime:(BOOL)arg0;
- (id /* block */)playedTimeHandler;
- (void)setFirstEnterPanel:(BOOL)arg0;
- (void)addChapterProgressBarView;
- (void)setClickChatpterSwitch:(BOOL)arg0;
- (id)topBlackView;
- (BOOL)shouldShrinkVideo;
- (void)configureTopBlackView;
- (BOOL)allowHandlePlayedTime;
- (BOOL)firstEnterPanel;
- (void)updateSelectedCellWithIndex:(long long)arg0 animated:(BOOL)arg1;
- (void)setPlayedTimeHandler:(id /* block */)arg0;
- (void)scrollToCurrentCellIfNeedWithTableView:(id)arg0 indexPath:(id)arg1 animated:(BOOL)arg2;
- (BOOL)clickChatpterSwitch;
- (void)trackExitChapterCatalogPanel;
- (void)trackClickContentWithSelectedIdx:(long long)arg0;
- (void)setTopBlackView:(id)arg0;
- (void)setModel:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)setTracked:(BOOL)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setSelectedIndex:(long long)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (double)startTime;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)tracked;
- (long long)selectedIndex;
- (BOOL)hasDismissed;
- (void)setHasDismissed:(BOOL)arg0;
- (void)dismissSheet;
- (id)sheet;
- (void)setupHandler;
- (id)fromPage;
- (id)playContext;
- (BOOL)shouldShowLoading;
- (void)setShouldShowLoading:(BOOL)arg0;
- (void)configureSubviews;
- (void)setSheet:(id)arg0;

@end
