//
//     Generated by private class-dump
//

@class IESECSKUCouponView, IESECSKUCouponViewModel;

@interface IESECSKUCouponCell : UICollectionViewCell {
    IESECSKUCouponViewModel *_viewModel;
    IESECSKUCouponView *_couponView;
}

@property (retain, nonatomic) IESECSKUCouponView *couponView;
@property (retain, nonatomic) IESECSKUCouponViewModel *viewModel;

- (id)couponView;
- (void)setCouponView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end