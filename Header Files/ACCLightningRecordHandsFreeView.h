//
//     Generated by private class-dump
//

@class UIImageView;

@interface ACCLightningRecordHandsFreeView : UIView {
    BOOL _isHighlight;
    UIImageView *_iconImageView;
}

@property (nonatomic) BOOL isHighlight;
@property (retain, nonatomic) UIImageView *iconImageView;

- (void)setIsHighlight:(BOOL)arg0;
- (void)updateHightlightState:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (BOOL)isHighlight;

@end
