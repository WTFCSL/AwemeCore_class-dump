//
//     Generated by private class-dump
//

@class UIImageView, BDPChoosePositionPluginModel, UITableView, NSObject, UIViewController, UIButton, UIView, MKAnnotationView, NSString, UITextField, NSArray, MKMapView, BDPChooseLocUserLocAnnotation, BDPLoadingAnimationView;
@protocol OS_dispatch_queue;

@interface BDPChooseLocViewController : BDPViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIGestureRecognizerDelegate> {
    BOOL _scrollToEnd;
    BOOL _needUpdateUserLoc;
    BOOL _isSearchViewInit;
    BOOL _isMapCanRender;
    UIViewController *_appController;
    UIView *_searchView;
    UIView *_defaultView;
    UIButton *_userLocButton;
    UITextField *_searchText;
    UIImageView *_selectedIcon;
    UIImageView *_shadowImageView;
    MKMapView *_mapView;
    id _subscribeHeadingToken;
    MKAnnotationView *_userAnnotationIcon;
    long long _page;
    long long _selectRow;
    NSArray *_dataArray;
    NSObject<OS_dispatch_queue> *_taskQueue;
    UITableView *_locTableView;
    long long _searchMode;
    BDPLoadingAnimationView *_loadingView;
    BDPChooseLocUserLocAnnotation *_pointAnno;
    long long _tableViewStyle;
    long long _regionChangeMode;
    double _lastContentOffset;
    UIView *_defSnapshotView;
    UIView *_seaSnapshotView;
    UIButton *_sendButton;
    UIButton *_cancleButton;
    BDPChoosePositionPluginModel *_cpLoc;
    id /* block */ _resultCallback;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _userLoc;
}

@property (nonatomic) BOOL scrollToEnd;
@property (retain, nonatomic) UIView *searchView;
@property (retain, nonatomic) UITextField *searchText;
@property (retain, nonatomic) id subscribeHeadingToken;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } userLoc;
@property (nonatomic) long long page;
@property (nonatomic) long long selectRow;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) UITableView *locTableView;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingView;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (nonatomic) BOOL isMapCanRender;
@property (retain, nonatomic) UIViewController *appController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldBecomeFirstResponder;
- (void)setupSearchView;
- (BOOL)scrollToEnd;
- (void)onClickCancleButton;
- (void)setIsMapCanRender:(BOOL)arg0;
- (id)subscribeHeadingToken;
- (void)setupOther;
- (void)setupCancleView;
- (id)locTableView;
- (void)onClickUserLocButton;
- (void)setLocTableView:(id)arg0;
- (void)onClickConfirmButton;
- (void)setSelectRow:(long long)arg0;
- (void)setScrollToEnd:(BOOL)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })userLoc;
- (long long)selectRow;
- (void)setUserLoc:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (void)setSubscribeHeadingToken:(id)arg0;
- (void)refreshCurrentLocation;
- (BOOL)isMapCanRender;
- (void)startSubscribeHeading;
- (id)initWithModel:(id)arg0 resultCallback:(id /* block */)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (id)searchText;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setSearchText:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)page;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setPage:(long long)arg0;
- (void)setTaskQueue:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)taskQueue;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupConstraints;
- (id)dataArray;
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (void)setupTableView;
- (void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1;
- (void)mapViewWillStartRenderingMap:(id)arg0;
- (id)mapView:(id)arg0 viewForAnnotation:(id)arg1;
- (void)setDataArray:(id)arg0;
- (id /* block */)resultCallback;
- (void)setResultCallback:(id /* block */)arg0;
- (id)appController;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setAppController:(id)arg0;
- (void)updateNavigationTitle;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end
