//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, AWESearchCitySugViewController, NSArray, AWESearchBar, UIButton, UITableView, AWEUILoadingView, AWECitySelectAppearance;
@protocol AWECityManagerProtocol;

@interface AWECitySelectViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, BTMPageManagableProtocol> {
    BOOL _selectionNotChangeCurrentCity;
    BOOL _canSelectL3;
    BOOL _hasTrackCityList;
    BOOL _hideHistory;
    BOOL _hideHotCity;
    BOOL _showL2Only;
    AWECitySelectAppearance *_appearance;
    id /* block */ _completeBlock;
    UITableView *_tblView;
    AWESearchBar *_searchBar;
    AWESearchCitySugViewController *_searchCitySugViewController;
    UIView *_searchBarContainerView;
    UIButton *_cancelButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _keyboardHeight;
    id<AWECityManagerProtocol> _cityManager;
    AWEUILoadingView *_loadingView;
    NSArray *_sections;
    long long _pageType;
    long long _channelPageType;
    NSString *_customHint;
    NSString *_enterFrom;
    NSArray *_quickAccessList;
}

@property (retain, nonatomic) UITableView *tblView;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) AWESearchCitySugViewController *searchCitySugViewController;
@property (retain, nonatomic) UIView *searchBarContainerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) id<AWECityManagerProtocol> cityManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) BOOL hasTrackCityList;
@property (nonatomic) long long pageType;
@property (nonatomic) long long channelPageType;
@property (nonatomic) BOOL hideHistory;
@property (nonatomic) BOOL hideHotCity;
@property (copy, nonatomic) NSString *customHint;
@property (nonatomic) BOOL showL2Only;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSArray *quickAccessList;
@property (nonatomic) BOOL selectionNotChangeCurrentCity;
@property (retain, nonatomic) AWECitySelectAppearance *appearance;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) BOOL canSelectL3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)enterFrom;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)didClickCancelButton;
- (void)buildUI;
- (BOOL)showL2Only;
- (void)setShowL2Only:(BOOL)arg0;
- (void)setCanSelectL3:(BOOL)arg0;
- (BOOL)channelPageScene;
- (long long)channelPageType;
- (id)tblView;
- (void)initCitiesData;
- (void)p_trackCityListShow:(id)arg0 isPopVC:(BOOL)arg1 useCache:(BOOL)arg2;
- (id)customHint;
- (void)onClickBack:(id)arg0;
- (void)setTblView:(id)arg0;
- (id)searchCitySugViewController;
- (void)trackSelectCityMonitorResponse:(id)arg0 withError:(id)arg1;
- (void)initCitiesDataWithComplete:(id /* block */)arg0;
- (BOOL)isLocatedCity:(id)arg0;
- (void)onCitySelected:(id)arg0 isLocated:(BOOL)arg1;
- (BOOL)hideHistory;
- (id)quickAccessList;
- (BOOL)hideHotCity;
- (BOOL)hasTrackCityList;
- (void)setHasTrackCityList:(BOOL)arg0;
- (id)getErrorMsgFromError:(id)arg0 model:(id)arg1;
- (BOOL)selectionNotChangeCurrentCity;
- (BOOL)canSelectL3;
- (void)setSelectionNotChangeCurrentCity:(BOOL)arg0;
- (void)setSearchCitySugViewController:(id)arg0;
- (void)setSearchBarContainerView:(id)arg0;
- (void)setChannelPageType:(long long)arg0;
- (void)setHideHistory:(BOOL)arg0;
- (void)setHideHotCity:(BOOL)arg0;
- (void)setCustomHint:(id)arg0;
- (void)setQuickAccessList:(id)arg0;
- (long long)pageType;
- (id)sections;
- (id)searchBarContainerView;
- (id)searchBar;
- (double)keyboardHeight;
- (void)setCancelButton:(id)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)goBack;
- (void)setSearchBar:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setKeyboardHeight:(double)arg0;
- (id)cancelButton;
- (void)setAppearance:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)appearance;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg0;
- (void)keyboardWillShow:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg0;
- (long long)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)tapGestureRecognizer;
- (void)setPageType:(long long)arg0;
- (void)setSections:(id)arg0;
- (id)initWithParams:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)searchBarSearchButtonClicked:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)reloadSections;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)handleTapGesture:(id)arg0;
- (id)cityManager;
- (void)setCityManager:(id)arg0;

@end
