//
//     Generated by private class-dump
//

@class UIImageView, UIButton, UIView;
@protocol IESLiveCommonCastScreenContainerViewDelegate;

@interface IESLiveCommonCastScreenContainerView : UIView {
    id<IESLiveCommonCastScreenContainerViewDelegate> _delegate;
    UIView *_elementContentContainer;
    UIButton *_showElementViewButton;
    UIButton *_showCastScreenButton;
    UIView *_elementView;
    UIView *_castScreenView;
    UIImageView *_imageIconView;
    UIButton *_castScreenEndButton;
}

@property (retain, nonatomic) UIView *elementView;
@property (retain, nonatomic) UIView *castScreenView;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) UIButton *castScreenEndButton;
@property (weak, nonatomic) id<IESLiveCommonCastScreenContainerViewDelegate> delegate;
@property (retain, nonatomic) UIView *elementContentContainer;
@property (retain, nonatomic) UIButton *showElementViewButton;
@property (retain, nonatomic) UIButton *showCastScreenButton;

- (id)elementView;
- (void)setElementView:(id)arg0;
- (id)imageIconView;
- (void)setImageIconView:(id)arg0;
- (void)setupPublicScreenView:(id)arg0;
- (id)castScreenView;
- (id)showCastScreenButton;
- (void)switchCastScreenIfNeedClicked;
- (id)castScreenEndButton;
- (void)endCastScreenButtonClicked;
- (id)showElementViewButton;
- (void)showElementViewButtonClicked;
- (id)elementContentContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 imageIcon:(id)arg1 elementView:(id)arg2;
- (void)setElementContentContainer:(id)arg0;
- (void)setShowElementViewButton:(id)arg0;
- (void)setShowCastScreenButton:(id)arg0;
- (void)setCastScreenView:(id)arg0;
- (void)setCastScreenEndButton:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end