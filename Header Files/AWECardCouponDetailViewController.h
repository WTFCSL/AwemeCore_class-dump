//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UICollectionView, AWECouponDetailModel, AWECardCouponDetailStatusCollectionViewCell, NSArray;
@protocol AWELiveFloatOnTopManagerProtocol;

@interface AWECardCouponDetailViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _liveWindow;
    NSString *_couponID;
    NSString *_codeID;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_poiID;
    NSDictionary *_trackParams;
    UICollectionView *_collectionView;
    AWECouponDetailModel *_couponDetailModel;
    AWECardCouponDetailStatusCollectionViewCell *_detailCell;
    NSArray *_actions;
    id<AWELiveFloatOnTopManagerProtocol> _liveManager;
}

@property (copy, nonatomic) NSString *couponID;
@property (copy, nonatomic) NSString *codeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL liveWindow;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECouponDetailModel *couponDetailModel;
@property (weak, nonatomic) AWECardCouponDetailStatusCollectionViewCell *detailCell;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) id<AWELiveFloatOnTopManagerProtocol> liveManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCenterModuleServiceCommonAdaperClass;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)trackParams;
- (id)poiID;
- (void)setTrackParams:(id)arg0;
- (void)setPoiID:(id)arg0;
- (id)couponID;
- (void)setCouponID:(id)arg0;
- (void)backBtnClicked:(id)arg0;
- (void)_refreshData;
- (id)aAWEUserCenterModuleServiceCommonAdaper;
- (id)liveManager;
- (void)setLiveManager:(id)arg0;
- (void)setLiveWindow:(BOOL)arg0;
- (void)_loadActions;
- (void)handleCouponValidate:(id)arg0;
- (BOOL)liveWindow;
- (id)couponDetailModel;
- (BOOL)isMultipleCoupon;
- (void)setCouponDetailModel:(id)arg0;
- (id)detailCell;
- (void)setDetailCell:(id)arg0;
- (BOOL)p_couponRatingAvailable;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)actions;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setActions:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_reloadView;
- (void)_setupUI;
- (id)codeID;
- (void)setCodeID:(id)arg0;

@end
