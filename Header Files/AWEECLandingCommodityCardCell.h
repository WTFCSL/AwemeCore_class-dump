//
//     Generated by private class-dump
//

@class AWEDoubleColumnSearchMerchandiseModel, IESECLLView;
@protocol AWEECLandingCommodityCardCellDelegate;

@interface AWEECLandingCommodityCardCell : UICollectionViewCell {
    IESECLLView *_containerView;
    AWEDoubleColumnSearchMerchandiseModel *_merchandise;
    id<AWEECLandingCommodityCardCellDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEECLandingCommodityCardCellDelegate> delegate;

- (void)buyButtonDidClick:(id)arg0;
- (void)updateWithMerchandiseModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupSubviews;

@end
