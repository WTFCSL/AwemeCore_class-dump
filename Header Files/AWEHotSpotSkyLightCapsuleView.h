//
//     Generated by private class-dump
//

@class UILabel, UIImageView;
@protocol AWEHotSpotSkyLightCapsuleViewDelegate;

@interface AWEHotSpotSkyLightCapsuleView : UIView {
    id<AWEHotSpotSkyLightCapsuleViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<AWEHotSpotSkyLightCapsuleViewDelegate> delegate;

- (void)tapGestureAction:(id)arg0;
- (void)updateCapsuleViewTitle:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
