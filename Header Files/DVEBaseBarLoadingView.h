//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface DVEBaseBarLoadingView : UIView {
    UILabel *_label;
    UIImageView *_iconView;
    long long _angle;
}

@property (nonatomic) long long angle;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconView;

- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)angle;
- (id)label;
- (void)setAngle:(long long)arg0;

@end
