//
//     Generated by private class-dump
//

@class UIView, DitoGeneralContainerPageContext, NSString, UIImageView, NSDictionary, AWEPOIUGCRateSelectivePOIBarParamsModel, UILabel, AWEPOIUGCRateSelectShopListView;
@protocol AWEPOIUGCRateSelectShopBarDelegate;

@interface AWEPOIUGCRateSelectShopBar : UIView {
    NSString *_productId;
    NSDictionary *_selectivePoiBarParams;
    DitoGeneralContainerPageContext *_currentControllerCtx;
    UIView *_containerView;
    id<AWEPOIUGCRateSelectShopBarDelegate> _delegate;
    AWEPOIUGCRateSelectivePOIBarParamsModel *_barParamsModel;
    UILabel *_nameLabel;
    UIImageView *_arrowIcon;
    UIView *_lovelyLine;
    AWEPOIUGCRateSelectShopListView *_listView;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *lovelyLine;
@property (retain, nonatomic) AWEPOIUGCRateSelectShopListView *listView;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSDictionary *selectivePoiBarParams;
@property (weak, nonatomic) DitoGeneralContainerPageContext *currentControllerCtx;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWEPOIUGCRateSelectShopBarDelegate> delegate;
@property (readonly, nonatomic) AWEPOIUGCRateSelectivePOIBarParamsModel *barParamsModel;

+ (double)height;

- (id)arrowIcon;
- (void)setArrowIcon:(id)arg0;
- (void)updateWithName:(id)arg0;
- (void)didClickShop;
- (id)lovelyLine;
- (id)currentControllerCtx;
- (void)updateLovelyLineWithOffset:(double)arg0;
- (void)setCurrentControllerCtx:(id)arg0;
- (void)setSelectivePoiBarParams:(id)arg0;
- (id)selectivePoiBarParams;
- (id)barParamsModel;
- (void)setLovelyLine:(id)arg0;
- (void)setListView:(id)arg0;
- (id)listView;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (id)nameLabel;
- (id)productId;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (void)setProductId:(id)arg0;

@end
