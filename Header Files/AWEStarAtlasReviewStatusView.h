//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface AWEStarAtlasReviewStatusView : UIView <AWEStarAtlasReviewStatusView> {
    id /* block */ _tapBlock;
    NSString *_title;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIImageView *_arrowView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (id)title;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupSubviews;
- (void)tapped:(id)arg0;

@end
