//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface AWESearchFilmTVTagView : UIView <AWESearchFilmTVTagViewProtocol> {
    CAGradientLayer *tagBackgroundLayer;
    UILabel *tagLabel;
    UIImageView *_backgroundImageView;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) CAGradientLayer *tagBackgroundLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)configWithSourceModel:(id)arg0;
- (id)tagBackgroundLayer;
- (void)setTagBackgroundLayer:(id)arg0;
- (void)setupControl;
- (void)configWithTag:(id)arg0 lightTag:(id)arg1;
- (void)configTagViewWithSourceModel:(id)arg0;
- (void)configStatusLabel:(id)arg0;
- (void)configWithTagName:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setBackgroundImageView:(id)arg0;

@end
