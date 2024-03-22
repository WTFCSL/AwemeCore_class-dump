//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEPadSearchEntranceView : UIView {
    UILabel *_searchTextLabel;
    UIView *_contentView;
    UIImageView *_backgroundImageView;
    UIImageView *_borderImageView;
    UIImageView *_searchIconImageView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *borderImageView;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *searchTextLabel;

+ (Class)aAWEPadModuleAdapterClass;

- (void)awe_themeDidChange:(long long)arg0;
- (id)aAWEPadModuleAdapter;
- (id)searchTextLabel;
- (id)borderImageView;
- (void)setSearchTextLabel:(id)arg0;
- (void)setBorderImageView:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)layoutSubviews;
- (void)setContentView:(id)arg0;
- (void)setupView;
- (id)searchIconImageView;
- (void)setSearchIconImageView:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;

@end