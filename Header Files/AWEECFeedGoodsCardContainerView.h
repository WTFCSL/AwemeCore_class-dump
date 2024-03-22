//
//     Generated by private class-dump
//

@class YYLabel, UIStackView, NSMutableArray, UITapGestureRecognizer, AWEECFeedGoodsCardCommentView, AWEECFeedGoodsCardTitleView, AWEECFeedGoodsCardModel;
@protocol AWEECFeedGoodsCardContainerViewDelegate;

@interface AWEECFeedGoodsCardContainerView : UIView {
    id<AWEECFeedGoodsCardContainerViewDelegate> _delegate;
    AWEECFeedGoodsCardModel *_model;
    AWEECFeedGoodsCardTitleView *_titleView;
    YYLabel *_title;
    AWEECFeedGoodsCardCommentView *_commentView;
    YYLabel *_commentLabel;
    UIStackView *_productStackView;
    NSMutableArray *_cells;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) AWEECFeedGoodsCardModel *model;
@property (retain, nonatomic) AWEECFeedGoodsCardTitleView *titleView;
@property (retain, nonatomic) YYLabel *title;
@property (retain, nonatomic) AWEECFeedGoodsCardCommentView *commentView;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (retain, nonatomic) UIStackView *productStackView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEECFeedGoodsCardContainerViewDelegate> delegate;

- (void)setupUIWithModel:(id)arg0;
- (void)__handleTapGesture:(id)arg0;
- (void)setCommentView:(id)arg0;
- (id)commentView;
- (id)productStackView;
- (void)setProductStackView:(id)arg0;
- (void)clickProductCellWithString:(id)arg0 productId:(id)arg1;
- (void)updateViewWithCurrentIndex:(long long)arg0 progressValue:(double)arg1 totalValue:(double)arg2;
- (void)updateCommentViewWithCurrentIndex:(long long)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)tapGesture;
- (void)setTitleView:(id)arg0;
- (id)title;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)titleView;
- (void)setTitle:(id)arg0;
- (id)cells;
- (void)setCells:(id)arg0;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg0;

@end
