//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWEPOIGoodsDetailElevatorItemView : UIControl {
    UILabel *_titleLabel;
    NSString *_key;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *key;

- (void)updateTitleLabelColor;
- (void)updateWithKey:(id)arg0 title:(id)arg1;
- (id)key;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setKey:(id)arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)updateTitleFont;

@end
