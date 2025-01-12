//
//     Generated by private class-dump
//

@class NSString, AWEUIListCellActionButtonColorModel;

@interface AWEUIListCellActionButton : UIButton {
    BOOL _isAttentionState;
    NSString *_attentionTitle;
    NSString *_normalTitle;
    AWEUIListCellActionButtonColorModel *_colorModel;
}

@property (nonatomic) BOOL isAttentionState;
@property (copy, nonatomic) NSString *attentionTitle;
@property (copy, nonatomic) NSString *normalTitle;
@property (retain, nonatomic) AWEUIListCellActionButtonColorModel *colorModel;

+ (double)suggestedWidthForTitle:(id)arg0 font:(id)arg1 padding:(double)arg2;
+ (double)suggestedWidthForTitles:(id)arg0 font:(id)arg1 padding:(double)arg2;
+ (double)maxWidthFittingTitles:(id)arg0 font:(id)arg1;
+ (double)suggestedWidthForTitle:(id)arg0 font:(id)arg1;
+ (double)suggestedWidthForTitles:(id)arg0 font:(id)arg1;
+ (double)expectedWidthForTitleArray:(id)arg0;
+ (void)setTextPreProcessor:(id /* block */)arg0;

- (void)awe_themeReload;
- (void)setIsAttentionState:(BOOL)arg0;
- (void)setAttentionTitle:(id)arg0;
- (void)setNormalTitle:(id)arg0;
- (id)attentionTitle;
- (id)colorModel;
- (id)attributedStringForString:(id)arg0 color:(id)arg1;
- (id)normalTitle;
- (BOOL)isAttentionState;
- (void)setTitle:(id)arg0 icon:(id)arg1 padding:(double)arg2 requiresAttention:(BOOL)arg3;
- (void)setColorModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHighlighted:(BOOL)arg0;

@end
