//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWEInteractionExtraModel;

@interface AWEInteractiveBubbleView : UIButton {
    unsigned long long _direction;
    double _caculateWidth;
    AWEInteractionExtraModel *_model;
    UILabel *_textLabel;
    UIImageView *_bodyImageView;
    UIImageView *_cornerImageView;
    UIImageView *_arrowImageView;
    UIImageView *_iconImageView;
    long long _interactionStickerType;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *bodyImageView;
@property (retain, nonatomic) UIImageView *cornerImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long interactionStickerType;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double caculateWidth;
@property (retain, nonatomic) AWEInteractionExtraModel *model;

- (id)cornerImageView;
- (void)setCornerImageView:(id)arg0;
- (void)setBodyImageView:(id)arg0;
- (double)caculateWidth;
- (void)setCaculateWidth:(double)arg0;
- (void)refreshModel:(id)arg0 interactionType:(long long)arg1;
- (double)typeHeight;
- (void)refreshDirection:(unsigned long long)arg0;
- (void)ajustCornerPositionPointX:(double)arg0;
- (void)buttonAction:(id)arg0 forEvent:(id)arg1;
- (void)setInteractionStickerType:(long long)arg0;
- (long long)interactionStickerType;
- (void)setModel:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)model;
- (unsigned long long)direction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setDirection:(unsigned long long)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)bodyImageView;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
