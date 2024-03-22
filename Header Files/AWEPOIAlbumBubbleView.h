//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEPOIAlbumBubbleView : UIView {
    UIImageView *_arrowView;
    UILabel *_contentView;
}

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *contentView;

+ (void)handleBubbleDisplayed;
+ (BOOL)hasBeenShown;

- (void)bubbleEaseOut;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupViews;

@end