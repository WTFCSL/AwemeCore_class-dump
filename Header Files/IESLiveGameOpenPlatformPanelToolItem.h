//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImage, UIView;

@interface IESLiveGameOpenPlatformPanelToolItem : IESLiveDynamicModel {
    NSString *_accessibilityTitle;
    id /* block */ _onClicked;
    double _itemWidth;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
    unsigned long long _type;
    UIView *_relatedView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ onClicked;
@property (nonatomic) double itemWidth;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) UIView *relatedView;

- (id /* block */)onClicked;
- (void)setOnClicked:(id /* block */)arg0;
- (double)borderWidth;
- (void)setAccessibilityTitle:(id)arg0;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (double)cornerRadius;
- (unsigned long long)type;
- (id)accessibilityTitle;
- (void)setBorderWidth:(double)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setItemWidth:(double)arg0;
- (id)backgroundColor;
- (void)setCornerRadius:(double)arg0;
- (double)itemWidth;
- (void)setBackgroundColor:(id)arg0;
- (void)setRelatedView:(id)arg0;
- (id)relatedView;

@end