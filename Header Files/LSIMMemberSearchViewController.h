//
//     Generated by private class-dump
//

@class NSObject, NSString, NSArray, LSNaviBar, LSIMCommonModalViewController, LSIMBizConversation, LSIMMemberSearchBar, UITableView, LSStatusView, LSIMMemberManager;
@protocol LSIMLoadingToastProtocol, LSIMMemberSearchViewControllerDelegate;

@interface LSIMMemberSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, LSIMMemberSearchBarDelegate, LSIMMemberSearchTableViewCellDelegate> {
    id<LSIMMemberSearchViewControllerDelegate> _delegate;
    unsigned long long _style;
    LSIMBizConversation *_conversation;
    LSIMMemberManager *_memberManager;
    LSIMCommonModalViewController *_modalVC;
    LSNaviBar *_naviBar;
    UITableView *_tableView;
    LSIMMemberSearchBar *_searchBar;
    LSStatusView *_statusView;
    NSObject<LSIMLoadingToastProtocol> *_loadingView;
    NSArray *_groupMembers;
    NSArray *_searchGroupMembers;
    NSString *_searchText;
}

@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) LSIMBizConversation *conversation;
@property (weak, nonatomic) LSIMMemberManager *memberManager;
@property (retain, nonatomic) LSIMCommonModalViewController *modalVC;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LSIMMemberSearchBar *searchBar;
@property (retain, nonatomic) LSStatusView *statusView;
@property (retain, nonatomic) NSObject<LSIMLoadingToastProtocol> *loadingView;
@property (copy, nonatomic) NSArray *groupMembers;
@property (copy, nonatomic) NSArray *searchGroupMembers;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<LSIMMemberSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)naviBar;
- (void)setNaviBar:(id)arg0;
- (void)setModalVC:(id)arg0;
- (void)commonModalViewDidClosed:(id)arg0;
- (id)modalVC;
- (void)p_handleMakeConversationWithParticipant:(id)arg0;
- (void)searchBarDidBeginInput:(id)arg0;
- (void)makeConversationDidTappedWithParticipant:(id)arg0;
- (id)useDataSource;
- (id)searchGroupMembers;
- (BOOL)resignSearchBar;
- (void)p_trackerClickSearch;
- (void)setSearchGroupMembers:(id)arg0;
- (id)memberManager;
- (void)setMemberManager:(id)arg0;
- (void)p_sortMembers;
- (id)initWithStyle:(unsigned long long)arg0 groupConversation:(id)arg1 memberManager:(id)arg2;
- (id)searchBar;
- (unsigned long long)style;
- (id)groupMembers;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (BOOL)isFullScreen;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setSearchBar:(id)arg0;
- (id)searchText;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setSearchText:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)setStyle:(unsigned long long)arg0;
- (id)conversation;
- (void)setConversation:(id)arg0;
- (void)closeButtonTapped:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)statusView;
- (void)setStatusView:(id)arg0;
- (void)setGroupMembers:(id)arg0;

@end
