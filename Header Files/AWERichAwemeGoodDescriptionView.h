//
//     Generated by private class-dump
//

@class YYLabel;

@interface AWERichAwemeGoodDescriptionView : UIView {
    YYLabel *_titleLabel;
    YYLabel *_descriptionLabel;
    YYLabel *_extraDescriptionLabel;
}

@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) YYLabel *extraDescriptionLabel;

- (void)configSubviews;
- (id)extraDescriptionLabel;
- (void)setExtraDescriptionLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)arg0;

@end
