//
//     Generated by private class-dump
//

@class UILabel, UIColor, UIView;

@interface CJPayMultiBankVoucherView : UIView {
    UIColor *_iconBgColor;
    unsigned long long _iconRadius;
    UIView *_multiBankView;
    UILabel *_voucherLabel;
}

@property (retain, nonatomic) UIView *multiBankView;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) UIColor *iconBgColor;
@property (nonatomic) unsigned long long iconRadius;

- (void)p_setupUI;
- (unsigned long long)iconRadius;
- (void)setIconRadius:(unsigned long long)arg0;
- (void)updateWithUrls:(id)arg0 voucherDesc:(id)arg1 voucherDetail:(id)arg2 voucherColor:(id)arg3;
- (id)voucherLabel;
- (void)setVoucherLabel:(id)arg0;
- (void)updateWithUrls:(id)arg0 voucherDesc:(id)arg1 voucherDescColor:(id)arg2 voucherDetail:(id)arg3 voucherDetailColor:(id)arg4 voucherFont:(id)arg5;
- (id)multiBankView;
- (void)p_addCornerBackgroundViewToView:(id)arg0;
- (id)p_snapShotImageWithView:(id)arg0;
- (id)p_getAttributedStringWithImage:(id)arg0 voucherDesc:(id)arg1 voucherDescColor:(id)arg2 voucherDetail:(id)arg3 voucherDetailColor:(id)arg4 voucherFont:(id)arg5;
- (id)iconBgColor;
- (void)setIconBgColor:(id)arg0;
- (void)setMultiBankView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
