//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, LOTAnimationView, YYAnimatedImageView, UIView, UIButton;
@protocol AWENearbyPendantViewDelegate;

@interface AWENearbyPendantView : UIView {
    id<AWENearbyPendantViewDelegate> _delegate;
    LOTAnimationView *_lotAnimationView;
    YYAnimatedImageView *_imageView;
    UIView *_contentView;
    UIButton *_closeButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) LOTAnimationView *lotAnimationView;
@property (retain, nonatomic) YYAnimatedImageView *imageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<AWENearbyPendantViewDelegate> delegate;

- (void)__buildUI;
- (void)__layoutUI;
- (void)__configUI;
- (void)__close:(id)arg0;
- (void)__tap:(id)arg0;
- (void)removeSubViewContent;
- (void)setLotAnimationView:(id)arg0;
- (id)lotAnimationView;
- (void)__reBuildLottieAnimationViewWithFilePath:(id)arg0;
- (void)__reBuildImageViewWithURLmodel:(id)arg0;
- (void)setUpLotAnimationViewWithFilePath:(id)arg0;
- (void)setUpImageViewWithURLModel:(id)arg0;
- (void).cxx_destruct;
- (void)setTapGestureRecognizer:(id)arg0;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)contentView;
- (id)delegate;
- (id)tapGestureRecognizer;
- (void)setDelegate:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end