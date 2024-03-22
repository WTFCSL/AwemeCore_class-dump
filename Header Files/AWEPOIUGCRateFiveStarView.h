//
//     Generated by private class-dump
//

@class UIFont, NSArray, UIColor, UILabel;

@interface AWEPOIUGCRateFiveStarView : UIView {
    BOOL _isAnimating;
    id /* block */ _didCompleteTap;
    NSArray *_grades;
    NSArray *_expGroups;
    double _spacing;
    double _textMarign;
    UIFont *_font;
    UIColor *_color;
    UILabel *_textLabel;
    long long _currentIndex;
    struct CGSize { double width; double height; } _iconSize;
    struct CGSize { double width; double height; } _contentSize;
}

@property (copy, nonatomic) NSArray *grades;
@property (copy, nonatomic) NSArray *expGroups;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double spacing;
@property (nonatomic) double textMarign;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) id /* block */ didCompleteTap;

- (id)expGroups;
- (void)setExpGroups:(id)arg0;
- (BOOL)needAnimation;
- (id)initWithGrades:(id)arg0 expGroups:(id)arg1 attributes:(id)arg2;
- (void)setDidCompleteTap:(id /* block */)arg0;
- (double)textMarign;
- (long long)tapIndexAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)selectWithAnimationAtIndex:(long long)arg0;
- (void)dispatchCompleteTap:(id)arg0;
- (id /* block */)didCompleteTap;
- (void)resetToUnselectedStatus;
- (id)scaleAnimation;
- (void)selectAtIndex:(long long)arg0;
- (void)setTextMarign:(double)arg0;
- (BOOL)isAnimating;
- (double)spacing;
- (id)textLabel;
- (void)setIconSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })iconSize;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)color;
- (void)setSpacing:(double)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCurrentIndex:(long long)arg0;
- (id)font;
- (void)setFont:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setColor:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (id)grades;
- (void)setGrades:(id)arg0;
- (void)tapAction:(id)arg0;
- (void)createUI;
- (void)updateWithText:(id)arg0;

@end