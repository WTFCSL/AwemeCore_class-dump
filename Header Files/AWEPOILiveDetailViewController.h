//
//     Generated by private class-dump
//

@class NSString, AWEPOIDetailDataManager, UIScrollView, AWEPOIDetailInfoContainerController;
@protocol AWEPOILiveDetailViewControllerDelegate;

@interface AWEPOILiveDetailViewController : UIViewController <UIScrollViewDelegate> {
    BOOL _isFirstPageLoadingShowed;
    unsigned long long _scene;
    id<AWEPOILiveDetailViewControllerDelegate> _delegate;
    AWEPOIDetailInfoContainerController *_contentViewController;
    UIScrollView *_contentView;
    AWEPOIDetailDataManager *_dataManager;
}

@property (retain, nonatomic) AWEPOIDetailInfoContainerController *contentViewController;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) AWEPOIDetailDataManager *dataManager;
@property (nonatomic) BOOL isFirstPageLoadingShowed;
@property (readonly, nonatomic) NSString *poiID;
@property (readonly, nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<AWEPOILiveDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (id)poiID;
- (void)p_setupUI;
- (id)poiDetail;
- (void)p_fetchData;
- (id)constData;
- (void)p_bindStateAndAction;
- (void)p_registerStoreWithModel:(id)arg0 poiId:(id)arg1;
- (BOOL)isFirstPageLoadingShowed;
- (void)setIsFirstPageLoadingShowed:(BOOL)arg0;
- (void)p_updateUIWithData;
- (void)p_updateVisibleZone;
- (id)initWithPOI:(id)arg0 scene:(unsigned long long)arg1 extraParams:(id)arg2;
- (id)dataManager;
- (id)contentViewController;
- (void).cxx_destruct;
- (void)setContentViewController:(id)arg0;
- (id)store;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (void)setDataManager:(id)arg0;
- (id)delegate;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (unsigned long long)scene;
- (void)setContentView:(id)arg0;

@end
