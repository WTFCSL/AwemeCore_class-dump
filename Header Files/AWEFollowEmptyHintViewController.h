//
//     Generated by private class-dump
//

@class NSString, UIView, NSObject, UITableView;
@protocol AWEFriendsContactCardViewProtocol, AWEUserRecommendTableViewManagerProtocol, AWEUserRecommendTableSectionProviderProtocol;

@interface AWEFollowEmptyHintViewController : UIViewController <AWEUserMessage, AWEUserRecommendTableViewManagerDataSource, UITableViewDataSource, UITableViewDelegate, AWEFollowEmptyHintViewControllerProtocol, AWEFriendsContactCommonViewDelegate> {
    BOOL canEmptyRefresh;
    BOOL _shouldRefreshFollowNum;
    UITableView *_recommendTableView;
    NSObject<AWEUserRecommendTableViewManagerProtocol> *_recommendManager;
    UIView<AWEFriendsContactCardViewProtocol> *_contactCardView;
}

@property (retain, nonatomic) UITableView *recommendTableView;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewManagerProtocol> *recommendManager;
@property (retain, nonatomic) UIView<AWEFriendsContactCardViewProtocol> *contactCardView;
@property (nonatomic) BOOL shouldRefreshFollowNum;
@property (readonly) id<AWEUserRecommendTableSectionProviderProtocol> recommendSectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL canEmptyRefresh;

+ (Class)aAWEConcernMutiTargetConfigCommonAdapterClass;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)updateRecommendHint:(BOOL)arg0;
- (id)aAWEConcernMutiTargetConfigCommonAdapter;
- (void)updateEmptyViewText:(id)arg0;
- (BOOL)shouldRefreshFollowNum;
- (void)setShouldRefreshFollowNum:(BOOL)arg0;
- (id)recommendSectionProvider;
- (void)refreshEmptyPageWithAddressBookAuthorized:(BOOL)arg0;
- (void)updateRecommendUsers:(BOOL)arg0;
- (id)recommendTableView;
- (id)emptyViewTitleLabelText;
- (id)recommendManager;
- (BOOL)shouldShowGuideEntryAfterCheckBDCert;
- (void)setCanEmptyRefresh:(BOOL)arg0;
- (BOOL)canEmptyRefresh;
- (void)updateUploadAddressBookHint:(BOOL)arg0;
- (void)commonViewButtonDidClicked;
- (void)setRecommendTableView:(id)arg0;
- (void)setRecommendManager:(id)arg0;
- (void)setContactCardView:(id)arg0;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)setBackgroundColor:(id)arg0;
- (void)setupUI;
- (id)contactCardView;

@end
