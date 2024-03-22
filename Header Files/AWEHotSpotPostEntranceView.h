//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEHotSpotPostEntranceView : UIView {
    id /* block */ _postHandleBlock;
    UIImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_despLabel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *despLabel;
@property (copy, nonatomic) id /* block */ postHandleBlock;

+ (id)postEntranceView;

- (void)configureUI;
- (void)recoverNormalBGColor;
- (id)despLabel;
- (void)setDespLabel:(id)arg0;
- (void)setPostHandleBlock:(id /* block */)arg0;
- (void)postViewTapped;
- (id /* block */)postHandleBlock;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
