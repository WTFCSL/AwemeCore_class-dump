//
//     Generated by private class-dump
//

@class UILabel, IESLiveGuidePromptArrowView, UIView;

@interface IESLiveGuidePromptView : UIView {
    BOOL _isV2Style;
    unsigned long long _arrowPosition;
    unsigned long long _arrowDirection;
    double _arrowLeftOffset;
    UILabel *_contentLabel;
    UIView *_contentView;
    IESLiveGuidePromptArrowView *_arrowView;
    UIView *_backgroundView;
}

@property (nonatomic) unsigned long long arrowPosition;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowLeftOffset;
@property (retain, nonatomic) UILabel *contentLabel;
@property (weak, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveGuidePromptArrowView *arrowView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isV2Style;

- (void)v2showPrompt:(id)arg0;
- (void)showCustomView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 arrowDierction:(unsigned long long)arg1 arrowPosition:(unsigned long long)arg2 arrowLeftOffset:(double)arg3;
- (void)setArrowLeftOffset:(double)arg0;
- (BOOL)isV2Style;
- (void)v2UpdateConstraints;
- (double)arrowLeftOffset;
- (void)pr_showContentLabel;
- (void)setIsV2Style:(BOOL)arg0;
- (void)showPrompt:(id)arg0;
- (unsigned long long)arrowDirection;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg0;
- (void)setArrowDirection:(unsigned long long)arg0;
- (void)setContentView:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setArrowPosition:(unsigned long long)arg0;
- (unsigned long long)arrowPosition;
- (void)buildView;

@end
