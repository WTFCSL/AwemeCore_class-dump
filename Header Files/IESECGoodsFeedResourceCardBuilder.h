//
//     Generated by private class-dump
//

@class UIStackView, UIView, IESECGoodsFeedResourceCard, IESECFeedResourceCardModel, IESECGoodsFeedResourceCardHeaderView, IESECGoodsFeedResourceCardPanelsView, IESECGoodsFeedResourceCardButtonView, IESECGoodsFeedResourceCardWindowView, NSMutableArray, IESECGoodsFeedResourceCardStoreView, IESECGoodsFeedResourceCardCouponView;
@protocol IESECGoodsFeedResourceCardDelegate;

@interface IESECGoodsFeedResourceCardBuilder : NSObject {
    IESECGoodsFeedResourceCard *_card;
    UIView *_cardView;
    id<IESECGoodsFeedResourceCardDelegate> _delegate;
    IESECFeedResourceCardModel *_model;
    UIStackView *_nodeContainer;
    double _containerWidth;
    NSMutableArray *_productCardList;
    IESECGoodsFeedResourceCardHeaderView *_headerView;
    IESECGoodsFeedResourceCardWindowView *_windowView;
    IESECGoodsFeedResourceCardPanelsView *_panelsView;
    IESECGoodsFeedResourceCardButtonView *_buttonView;
    IESECGoodsFeedResourceCardStoreView *_storeView;
    IESECGoodsFeedResourceCardCouponView *_couponView;
}

@property (retain, nonatomic) IESECFeedResourceCardModel *model;
@property (retain, nonatomic) UIStackView *nodeContainer;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSMutableArray *productCardList;
@property (retain, nonatomic) IESECGoodsFeedResourceCardHeaderView *headerView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardWindowView *windowView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardPanelsView *panelsView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardButtonView *buttonView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardStoreView *storeView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardCouponView *couponView;
@property (weak, nonatomic) IESECGoodsFeedResourceCard *card;
@property (retain, nonatomic) UIView *cardView;
@property (weak, nonatomic) id<IESECGoodsFeedResourceCardDelegate> delegate;

+ (double)heightOfResourceCard:(id)arg0 withContentWidth:(double)arg1;
+ (struct pair<std::vector<CGRect>, double> { struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *x0; } x2; } x0; double x1; })productCardFrameListWithContainerWidth:(double)arg0 panelLayout:(unsigned long long)arg1;

- (id)couponView;
- (void)setCouponView:(id)arg0;
- (id)storeView;
- (void)setStoreView:(id)arg0;
- (void)updateCardViewWithCardModel:(id)arg0 containerWidth:(double)arg1;
- (id)nodeContainer;
- (void)updateCardViewWithCardModel:(id)arg0;
- (void)addArrangedNodeViewWith:(id)arg0;
- (void)moreProductDidClick:(id)arg0;
- (BOOL)shouldshowCrossedMarketPrice;
- (id)panelsView;
- (void)setProductCardList:(id)arg0;
- (void)productCardDidClick:(id)arg0;
- (void)setupWindowViewWithModel:(id)arg0;
- (void)storeEntranceDidClick:(id)arg0;
- (void)buttonNodeDidClick:(id)arg0;
- (id)windowView;
- (void)windowCardDidClick:(id)arg0;
- (id)productCardList;
- (void)setNodeContainer:(id)arg0;
- (void)setWindowView:(id)arg0;
- (void)setPanelsView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)buttonView;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)setHeaderView:(id)arg0;
- (void)setCard:(id)arg0;
- (id)delegate;
- (id)card;
- (void)layoutSubviews;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)setButtonView:(id)arg0;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end
