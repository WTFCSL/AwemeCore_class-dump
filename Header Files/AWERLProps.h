//
//     Generated by private class-dump
//

@class NSString, UIColor;

@interface AWERLProps : NSObject <NSCopying> {
    BOOL _clipsToBounds;
    BOOL _hidden;
    BOOL _masksToBounds;
    BOOL _isAccessibilityElement;
    float _shadowOpacity;
    NSString *_customKey;
    Class _viewClass;
    id /* block */ _viewCreateBlock;
    id /* block */ _fetchViewBlock;
    id /* block */ _viewUpdateBlock;
    id /* block */ _viewLayoutBlock;
    UIColor *_backgroundColor;
    double _cornerRadius;
    id /* block */ _singleTapBlock;
    double _borderWidth;
    UIColor *_borderColor;
    long long _contentMode;
    double _alpha;
    UIColor *_shadowColor;
    double _shadowRadius;
    NSString *_accessibilityLabel;
    unsigned long long _accessibilityTraits;
    struct CGSize { double width; double height; } _shadowOffset;
}

@property (copy, nonatomic) NSString *customKey;
@property (retain, nonatomic) Class viewClass;
@property (copy, nonatomic) id /* block */ viewCreateBlock;
@property (copy, nonatomic) id /* block */ fetchViewBlock;
@property (copy, nonatomic) id /* block */ viewUpdateBlock;
@property (copy, nonatomic) id /* block */ viewLayoutBlock;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL clipsToBounds;
@property (copy, nonatomic) id /* block */ singleTapBlock;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL masksToBounds;
@property (nonatomic) long long contentMode;
@property (nonatomic) double alpha;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL isAccessibilityElement;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;

+ (void)initialize;

- (id)initWithKey:(id)arg0 viewClass:(Class)arg1 viewCreateBlock:(id /* block */)arg2 viewUpdateBlock:(id /* block */)arg3 viewLayoutBlock:(id /* block */)arg4;
- (id)propertiesSnapshot;
- (void)setSingleTapBlock:(id /* block */)arg0;
- (id)initWithKey:(id)arg0 viewClass:(Class)arg1;
- (id /* block */)singleTapBlock;
- (id)customKey;
- (id)initWithSelfHostView:(id /* block */)arg0 viewUpdateBlock:(id /* block */)arg1 viewLayoutBlock:(id /* block */)arg2;
- (void)setCustomKey:(id)arg0;
- (id /* block */)viewCreateBlock;
- (void)setViewCreateBlock:(id /* block */)arg0;
- (id /* block */)fetchViewBlock;
- (void)setFetchViewBlock:(id /* block */)arg0;
- (id /* block */)viewUpdateBlock;
- (void)setViewUpdateBlock:(id /* block */)arg0;
- (id /* block */)viewLayoutBlock;
- (void)setViewLayoutBlock:(id /* block */)arg0;
- (double)shadowRadius;
- (float)shadowOpacity;
- (void)setShadowOpacity:(float)arg0;
- (void)setShadowRadius:(double)arg0;
- (id)accessibilityLabel;
- (void)setShadowOffset:(struct CGSize { double x0; double x1; })arg0;
- (double)borderWidth;
- (void)setContentMode:(long long)arg0;
- (void)setAccessibilityLabel:(id)arg0;
- (struct CGSize { double x0; double x1; })shadowOffset;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)borderColor;
- (void)setAlpha:(double)arg0;
- (void)setBorderColor:(id)arg0;
- (id)shadowColor;
- (double)cornerRadius;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (Class)viewClass;
- (void)setShadowColor:(id)arg0;
- (void)setBorderWidth:(double)arg0;
- (BOOL)clipsToBounds;
- (void)setClipsToBounds:(BOOL)arg0;
- (id)backgroundColor;
- (double)alpha;
- (void)setHidden:(BOOL)arg0;
- (void)setAccessibilityTraits:(unsigned long long)arg0;
- (BOOL)hidden;
- (BOOL)isAccessibilityElement;
- (void)setCornerRadius:(double)arg0;
- (BOOL)masksToBounds;
- (void)setBackgroundColor:(id)arg0;
- (void)setMasksToBounds:(BOOL)arg0;
- (long long)contentMode;
- (void)setIsAccessibilityElement:(BOOL)arg0;
- (void)setViewClass:(Class)arg0;

@end