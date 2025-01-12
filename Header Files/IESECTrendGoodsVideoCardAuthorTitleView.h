//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESECTrendGoodsVideoCardAuthorTitleView : UIView {
    UIImageView *_authorAvatarImage;
    UILabel *_authorNameLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UIImageView *authorAvatarImage;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)authorAvatarImage;
- (void)updateWithAuthorImageURL:(id)arg0 authorName:(id)arg1 isShowArrow:(BOOL)arg2;
- (void)setAuthorAvatarImage:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
