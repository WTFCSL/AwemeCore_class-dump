//
//     Generated by private class-dump
//

@class UIView;
@protocol IESECGoodsDetailHeaderViewManagerServeice;

@interface IESECoodsDetailHeaderContentSliceCell : IESECoodsDetailHeaderContentBaseCell {
    UIView *_sliceView;
    id<IESECGoodsDetailHeaderViewManagerServeice> _viewManager;
}

@property (retain, nonatomic) UIView *sliceView;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;

- (void)configWithModel:(id)arg0 serviceProvider:(id)arg1;
- (void)setViewManager:(id)arg0;
- (id)sliceView;
- (void)setSliceView:(id)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)viewManager;

@end
