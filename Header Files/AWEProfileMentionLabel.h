//
//     Generated by private class-dump
//

@class NSMutableArray, NSAttributedString;

@interface AWEProfileMentionLabel : YYLabel {
    NSMutableArray *_accessibilityElementsArray;
    NSAttributedString *_lastAttributedString;
    NSMutableArray *_accessibilityViewArray;
    struct CGSize { double width; double height; } _lastLabelSize;
}

@property (retain, nonatomic) NSMutableArray *accessibilityElementsArray;
@property (nonatomic) struct CGSize { double width; double height; } lastLabelSize;
@property (retain, nonatomic) NSAttributedString *lastAttributedString;
@property (retain, nonatomic) NSMutableArray *accessibilityViewArray;

- (id)accessibilityViewArray;
- (struct CGSize { double x0; double x1; })lastLabelSize;
- (id)lastAttributedString;
- (void)setLastAttributedString:(id)arg0;
- (void)setLastLabelSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)calculateMentionAccessibilityIfNeeded;
- (void)updateLastCalculateMessage;
- (void)calculateMentionAccessibility;
- (id)accessibilityElementsArray;
- (void)setAccessibilityElementsArray:(id)arg0;
- (void)setAccessibilityViewArray:(id)arg0;
- (void).cxx_destruct;
- (void)calculate;

@end