//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWETeenDescriptionTextView : AWETeenBasicDescriptionTextView {
    BOOL _isExpanded;
    BOOL _isAccessibilityTraitButton;
    BOOL _isAds;
    NSString *_adTrailingAccessibilityLabel;
    NSArray *_p_accessibilityElements;
}

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *adTrailingAccessibilityLabel;
@property (retain, nonatomic) NSArray *p_accessibilityElements;

- (BOOL)isAds;
- (void)setIsAds:(BOOL)arg0;
- (void)setP_accessibilityElements:(id)arg0;
- (id)p_accessibilityElements;
- (id)entityWordAccessibilityLabel:(id)arg0;
- (id)fullTextAccessibilityLabel;
- (id)adTrailingAccessibilityLabel;
- (BOOL)isAccessibilityTraitButton;
- (void)setIsAccessibilityTraitButton:(BOOL)arg0;
- (void)setAdTrailingAccessibilityLabel:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg0;
- (void)setIsExpanded:(BOOL)arg0;
- (BOOL)isExpanded;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityElements:(id)arg0;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg0;
- (long long)indexOfAccessibilityElement:(id)arg0;

@end
