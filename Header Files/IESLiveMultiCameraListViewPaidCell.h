//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface IESLiveMultiCameraListViewPaidCell : IESLiveMultiCameraListViewCell {
    id /* block */ _paidButtonDidClick;
    UILabel *_paidTagLabel;
    UILabel *_priceLabel;
    UIButton *_paidButton;
}

@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIButton *paidButton;
@property (copy, nonatomic) id /* block */ paidButtonDidClick;

+ (id)cellIdentifier;

- (id)paidTagLabel;
- (void)setPaidTagLabel:(id)arg0;
- (id)paidButton;
- (id /* block */)paidButtonDidClick;
- (void)setPaidButton:(id)arg0;
- (void)setPaidButtonDidClick:(id /* block */)arg0;
- (void)updateCameraInfo:(id)arg0 selected:(BOOL)arg1 cellType:(long long)arg2;
- (void)addPaidUI;
- (void)updatePaidSubviewsFrame;
- (void)paidButtonSelect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end