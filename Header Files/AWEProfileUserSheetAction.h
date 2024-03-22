//
//     Generated by private class-dump
//

@class NSString, UIImage, UIView, NSNumber, NSAttributedString;

@interface AWEProfileUserSheetAction : NSObject {
    BOOL _hideBottomLine;
    BOOL _contentViewUserInteractionEnabled;
    BOOL _ignoreContentLabelTextColorRewrite;
    BOOL _disableAnimation;
    NSString *_title;
    UIView *_contentView;
    double _contentHeight;
    NSString *_accessibilityDescription;
    id /* block */ _handler;
    UIImage *_icon;
    unsigned long long _style;
    NSNumber *_numberOfLine;
    NSAttributedString *_attributeStr;
}

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL disableAnimation;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSNumber *numberOfLine;
@property (retain, nonatomic) NSAttributedString *attributeStr;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL hideBottomLine;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL contentViewUserInteractionEnabled;
@property (nonatomic) BOOL ignoreContentLabelTextColorRewrite;
@property (copy, nonatomic) NSString *accessibilityDescription;

+ (id)actionWithTitle:(id)arg0 style:(unsigned long long)arg1 icon:(id)arg2 handler:(id /* block */)arg3;
+ (id)actionWithTitle:(id)arg0 icon:(id)arg1 handler:(id /* block */)arg2;
+ (id)actionWithContentView:(id)arg0 disableAnimation:(BOOL)arg1 handler:(id /* block */)arg2;
+ (id)actionWithTitle:(id)arg0 imgName:(id)arg1 handler:(id /* block */)arg2;
+ (id)actionWithTitle:(id)arg0 style:(unsigned long long)arg1 imgName:(id)arg2 handler:(id /* block */)arg3;
+ (id)actionWithContentView:(id)arg0 handler:(id /* block */)arg1;

- (void)setNumberOfLine:(id)arg0;
- (id)numberOfLine;
- (void)setAttributeStr:(id)arg0;
- (BOOL)hideBottomLine;
- (void)setHideBottomLine:(BOOL)arg0;
- (BOOL)contentViewUserInteractionEnabled;
- (void)setContentViewUserInteractionEnabled:(BOOL)arg0;
- (BOOL)ignoreContentLabelTextColorRewrite;
- (void)setIgnoreContentLabelTextColorRewrite:(BOOL)arg0;
- (id)attributeStr;
- (unsigned long long)style;
- (id)icon;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)trigger;
- (id)contentView;
- (void)setHandler:(id /* block */)arg0;
- (id)title;
- (void)setIcon:(id)arg0;
- (id /* block */)handler;
- (id)accessibilityDescription;
- (void)setStyle:(unsigned long long)arg0;
- (void)setContentHeight:(double)arg0;
- (BOOL)disableAnimation;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setAccessibilityDescription:(id)arg0;
- (void)setDisableAnimation:(BOOL)arg0;

@end
