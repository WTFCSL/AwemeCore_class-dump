//
//     Generated by private class-dump
//

@class IESECGoodsDetailParameters, UILabel, NSDictionary, NSObject, IESECGoodsBottomActionHelper, UIViewController, CAGradientLayer, UIColor, IESECGoodsFeedActionButton, NSString, UIStackView, AWEAwemeModel, IESECGoodsDetailModel, UIImageView;
@protocol AWEECommerceGoodsCardDataControllerProtocol, AWEECShoppingGoodsCardElementViewDelegate;

@interface AWEECommerceGoodsCardElementView : UIView <AWEFeedGoodsElementProtocol> {
    NSDictionary *logExtraDict;
    NSString *referString;
    id<AWEECShoppingGoodsCardElementViewDelegate> delegate;
    UIViewController *_containerVC;
    AWEAwemeModel *_model;
    UIImageView *_goodsImageView;
    UILabel *_titleLabel;
    UIStackView *_eventTagContainer;
    UIStackView *_priceLabelContainer;
    IESECGoodsFeedActionButton *_actionButton;
    UIImageView *_breakLine;
    UIColor *_breakLineColor;
    UIImageView *_checkSignView;
    UIStackView *_serviceTagContainer;
    NSObject<AWEECommerceGoodsCardDataControllerProtocol> *_goodsCardDataController;
    IESECGoodsDetailModel *_goodsDetail;
    CAGradientLayer *_backGroundGradientLayer;
    IESECGoodsBottomActionHelper *_actionHelper;
    IESECGoodsDetailParameters *_goodsParameters;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *eventTagContainer;
@property (retain, nonatomic) UIStackView *priceLabelContainer;
@property (retain, nonatomic) IESECGoodsFeedActionButton *actionButton;
@property (retain, nonatomic) UIImageView *breakLine;
@property (retain, nonatomic) UIColor *breakLineColor;
@property (retain, nonatomic) UIImageView *checkSignView;
@property (retain, nonatomic) UIStackView *serviceTagContainer;
@property (retain, nonatomic) NSObject<AWEECommerceGoodsCardDataControllerProtocol> *goodsCardDataController;
@property (retain, nonatomic) IESECGoodsDetailModel *goodsDetail;
@property (retain, nonatomic) CAGradientLayer *backGroundGradientLayer;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsParameters;
@property (retain, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) id<AWEECShoppingGoodsCardElementViewDelegate> delegate;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (id)goodsCardDataController;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (void)updateViewWithModel:(id)arg0;
- (void)setGoodsDetail:(id)arg0;
- (void)trackProductEntranceClick;
- (id)goodsParameters;
- (void)setGoodsParameters:(id)arg0;
- (void)setBreakLineColor:(id)arg0;
- (id)backGroundGradientLayer;
- (id)eventTagContainer;
- (id)priceLabelContainer;
- (id)breakLine;
- (id)checkSignView;
- (id)serviceTagContainer;
- (id)drawLineOfDashByImageView:(id)arg0;
- (void)updateViewWithGoodsCardDataModel:(id)arg0;
- (id)getGoodsDetailModelFromDictionary:(id)arg0;
- (void)updateTitleLabelAndEventTags;
- (void)updatePriceLabelAndSalesLabel;
- (void)updateServiceTagsWithServiceModelList:(id)arg0;
- (id)goodsDetail;
- (void)actionButtonAction;
- (id)breakLineColor;
- (void)setEventTagContainer:(id)arg0;
- (void)setPriceLabelContainer:(id)arg0;
- (void)setBreakLine:(id)arg0;
- (void)setCheckSignView:(id)arg0;
- (void)setServiceTagContainer:(id)arg0;
- (void)setGoodsCardDataController:(id)arg0;
- (void)setBackGroundGradientLayer:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)delegate;
- (id)actionHelper;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setActionHelper:(id)arg0;
- (void)setupUI;
- (void)updateActionButton;
- (id)actionButton;
- (void)setActionButton:(id)arg0;

@end