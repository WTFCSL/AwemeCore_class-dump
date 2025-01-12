//
//     Generated by private class-dump
//

@class UIView, NSString, IESECStoreFilterSectionController, UIButton, IESECShopClassificationGoodsListSectionController, IESECShopClassificationGoodsActionHandler, IESECShopClassificationGoodsEventHandler, IESECQualityInfoV2, UILabel;

@interface IESECShopClassificationGoodsListViewController : IESECShopGoodsViewController {
    IESECStoreFilterSectionController *_filterSectionController;
    NSString *_materialTitle;
    UIButton *_backButton;
    UIButton *_searchButton;
    UILabel *_titleLabel;
    UIView *_navBgView;
    IESECShopClassificationGoodsEventHandler *_classificationEventHandler;
    IESECShopClassificationGoodsActionHandler *_classificationActionHandler;
    IESECShopClassificationGoodsListSectionController *_classificationGoodsSectionController;
    IESECShopClassificationGoodsListSectionController *_classificationRecommendGoodsSectionController;
    IESECQualityInfoV2 *_qualityInfo;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *navBgView;
@property (retain, nonatomic) IESECShopClassificationGoodsEventHandler *classificationEventHandler;
@property (retain, nonatomic) IESECShopClassificationGoodsActionHandler *classificationActionHandler;
@property (retain, nonatomic) IESECShopClassificationGoodsListSectionController *classificationGoodsSectionController;
@property (retain, nonatomic) IESECShopClassificationGoodsListSectionController *classificationRecommendGoodsSectionController;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (copy, nonatomic) NSString *materialTitle;

- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)navBgView;
- (void)setNavBgView:(id)arg0;
- (BOOL)ttHideNavigationBar;
- (void)setFilterSectionController:(id)arg0;
- (id)filterSectionController;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (id)qualityInfo;
- (void)setQualityInfo:(id)arg0;
- (void)setMaterialTitle:(id)arg0;
- (id)initWithContext:(id)arg0 contextV2:(id)arg1 container:(id)arg2;
- (void)loadMoreRecommendFeedData;
- (id)classificationEventHandler;
- (void)stateDidAttach:(id)arg0;
- (id)classificationRecommendGoodsSectionController;
- (id)classificationGoodsSectionController;
- (id)classificationActionHandler;
- (void)subviewsDidConfigure;
- (void)willDataFirstLoad;
- (void)didDataFirstLoad;
- (void)startFirstRender;
- (void)endFirstRender;
- (void)dataControllerDidReset;
- (id)materialTitle;
- (void)setClassificationEventHandler:(id)arg0;
- (void)setClassificationActionHandler:(id)arg0;
- (void)setClassificationGoodsSectionController:(id)arg0;
- (void)setClassificationRecommendGoodsSectionController:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setSearchButton:(id)arg0;
- (id)titleLabel;
- (id)searchButton;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)dataController;
- (void)configureSubviews;

@end
