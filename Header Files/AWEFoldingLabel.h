//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, UIButton, NSDataDetector, NSAttributedString, AWETextRenderer;
@protocol AWEFoldingLabelDelegate;

@interface AWEFoldingLabel : UIView <UIGestureRecognizerDelegate, AWEFoldingLabel> {
    NSDataDetector *_dataDetector;
    BOOL _automaticallyChoosesAlignmentToFitLanguageDirection;
    BOOL _shouldAlwaysShowFoldButton;
    BOOL _disableButtonInteraction;
    NSAttributedString *_attributedText;
    id<AWEFoldingLabelDelegate> _delegate;
    UIButton *_foldButton;
    NSAttributedString *_foldingAttributedText;
    long long _maximumNumberOfLines;
    long long _numberOfLinesToFold;
    double _preferredMaxLayoutWidth;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSAttributedString *_unfoldingAttributedText;
    AWETextRenderer *_renderer;
    unsigned long long _foldingStatus;
}

@property (retain, nonatomic) AWETextRenderer *renderer;
@property (nonatomic) unsigned long long foldingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (weak, nonatomic) id<AWEFoldingLabelDelegate> delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) unsigned long long textCheckingTypes;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL disableButtonInteraction;
@property (nonatomic) long long numberOfLinesToFold;
@property (nonatomic) long long maximumNumberOfLines;
@property (readonly, nonatomic) UIButton *foldButton;
@property (copy, nonatomic) NSAttributedString *unfoldingAttributedText;
@property (copy, nonatomic) NSAttributedString *foldingAttributedText;
@property (nonatomic) BOOL automaticallyChoosesAlignmentToFitLanguageDirection;
@property (nonatomic) BOOL shouldAlwaysShowFoldButton;

+ (struct CGSize { double x0; double x1; })boundingSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })arg0 label:(id)arg1 renderer:(id)arg2;
+ (id)rendererContextFromLabel:(id)arg0;

- (unsigned long long)foldingStatus;
- (void)unfold;
- (unsigned long long)textCheckingTypes;
- (void)setTextCheckingTypes:(unsigned long long)arg0;
- (BOOL)disableButtonInteraction;
- (void)setDisableButtonInteraction:(BOOL)arg0;
- (long long)numberOfLinesToFold;
- (void)setNumberOfLinesToFold:(long long)arg0;
- (id)foldButton;
- (id)unfoldingAttributedText;
- (void)setUnfoldingAttributedText:(id)arg0;
- (id)foldingAttributedText;
- (void)setFoldingAttributedText:(id)arg0;
- (BOOL)automaticallyChoosesAlignmentToFitLanguageDirection;
- (void)setAutomaticallyChoosesAlignmentToFitLanguageDirection:(BOOL)arg0;
- (BOOL)shouldAlwaysShowFoldButton;
- (void)setShouldAlwaysShowFoldButton:(BOOL)arg0;
- (void)foldButtonAction:(id)arg0;
- (void)setFoldingStatus:(unsigned long long)arg0;
- (void)updateFoldingStatusIfNeeded;
- (void)layoutFoldButton;
- (id)checkAttributedText:(id)arg0;
- (void)fixBoundsForFoldButton;
- (id)rendererContextFromCurrentState;
- (void)invalidateFoldingStatus;
- (id)attributedText;
- (void)setPreferredMaxLayoutWidth:(double)arg0;
- (long long)maximumNumberOfLines;
- (void).cxx_destruct;
- (void)setRenderer:(id)arg0;
- (void)setAttributedText:(id)arg0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)delegate;
- (id)tapGestureRecognizer;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)layout;
- (void)setMaximumNumberOfLines:(long long)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (double)preferredMaxLayoutWidth;
- (id)renderer;
- (void)handleTap:(id)arg0;
- (void)fold;

@end