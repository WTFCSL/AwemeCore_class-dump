//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface IESECRelationBubbleView : UIView {
    UILabel *_bubbleLabelView;
    UIImageView *_bubbleBackgroundView;
}

@property (retain, nonatomic) UILabel *bubbleLabelView;
@property (retain, nonatomic) UIImageView *bubbleBackgroundView;

- (id)bubbleBackgroundView;
- (void)setBubbleBackgroundView:(id)arg0;
- (id)bubbleLabelView;
- (void)updateBubbleViewWithModel:(id)arg0;
- (void)setBubbleLabelView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupViews;

@end
