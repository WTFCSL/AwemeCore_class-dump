//
//     Generated by private class-dump
//

@class NSString, UIColor, UIView;

@interface DUXToastViewConfig : NSObject {
    unsigned long long _style;
    NSString *_text;
    NSString *_highlightedText;
    id /* block */ _highlightedTextClickBlock;
    UIView *_iconView;
    UIColor *_toastBackgroundColor;
    UIColor *_contentColor;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *highlightedText;
@property (copy, nonatomic) id /* block */ highlightedTextClickBlock;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIColor *toastBackgroundColor;
@property (retain, nonatomic) UIColor *contentColor;

- (void)setToastBackgroundColor:(id)arg0;
- (void)setHighlightedText:(id)arg0;
- (void)setHighlightedTextClickBlock:(id /* block */)arg0;
- (id)highlightedText;
- (id /* block */)highlightedTextClickBlock;
- (id)toastBackgroundColor;
- (id)contentColor;
- (unsigned long long)style;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setContentColor:(id)arg0;
- (id)text;
- (void)setStyle:(unsigned long long)arg0;

@end
