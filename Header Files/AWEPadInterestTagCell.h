//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEPadInterestTagCell : UICollectionViewCell {
    BOOL _hasInit;
    UILabel *_textLabel;
    UIImageView *_arrow;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (nonatomic) BOOL hasInit;

+ (double)widthCellForModel:(id)arg0;

- (void)setHasInit:(BOOL)arg0;
- (BOOL)hasInit;
- (void)setArrow:(id)arg0;
- (id)arrow;
- (void)drawWithTagModel:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextLabel:(id)arg0;
- (void)setupView;

@end
