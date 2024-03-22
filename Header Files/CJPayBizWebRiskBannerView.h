//
//     Generated by private class-dump
//

@class CJPayButton, UIImageView, UILabel, UIView;

@interface CJPayBizWebRiskBannerView : UIView {
    id /* block */ _closeBlock;
    CJPayButton *_closeBtn;
    UILabel *_reskInfoLabel;
    UIImageView *_warningImageView;
    UIView *_backColorView;
}

@property (retain, nonatomic) CJPayButton *closeBtn;
@property (retain, nonatomic) UILabel *reskInfoLabel;
@property (retain, nonatomic) UIImageView *warningImageView;
@property (retain, nonatomic) UIView *backColorView;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)p_setupUI;
- (id)backColorView;
- (void)setBackColorView:(id)arg0;
- (id)warningImageView;
- (void)setWarningImageView:(id)arg0;
- (id)reskInfoLabel;
- (void)updateWarnContent:(id)arg0;
- (void)setReskInfoLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
