//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface CJPayPayAgainOldCardCommonView : UIView {
    UILabel *_bankPreLabel;
    UIImageView *_bankIconImageView;
    UILabel *_bankLabel;
}

@property (retain, nonatomic) UILabel *bankPreLabel;
@property (retain, nonatomic) UIImageView *bankIconImageView;
@property (retain, nonatomic) UILabel *bankLabel;

- (void)p_setupUI;
- (id)bankIconImageView;
- (id)bankLabel;
- (void)setBankIconImageView:(id)arg0;
- (void)setBankLabel:(id)arg0;
- (id)bankPreLabel;
- (void)setBankPreLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end