//
//     Generated by private class-dump
//

@class UIView;

@interface HTSLiveToobarItemLandscapeCell : HTSLiveToobarItemCell {
    UIView *_customViewForLandscape;
    UIView *_grayBackGroundView;
}

@property (retain, nonatomic) UIView *customViewForLandscape;
@property (retain, nonatomic) UIView *grayBackGroundView;

- (void)didSetAttachingDIContext;
- (void)highlightGuide;
- (id)grayBackGroundView;
- (void)setGrayBackGroundView:(id)arg0;
- (void)setCustomViewForLandscape:(id)arg0;
- (id)customViewForLandscape;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg0;

@end
