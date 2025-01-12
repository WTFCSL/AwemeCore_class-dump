//
//     Generated by private class-dump
//

@class UIColor, NSString, UIFont;

@interface IESLivePickerViewConfig : NSObject {
    BOOL _titleSeprator;
    UIColor *_maskColor;
    UIColor *_overlayColor;
    double _cornerRadius;
    double _horizontalMargin;
    NSString *_title;
    double _titleHeight;
    UIColor *_titleColor;
    NSString *_cancelText;
    UIColor *_cancelColor;
    UIColor *_confirmColor;
    UIFont *_titleFont;
    UIFont *_actionFont;
    NSString *_confirmText;
    UIColor *_itemHighlightColor;
    UIColor *_itemCommonColor;
    UIFont *_itemFont;
    UIFont *_itemHighlightFont;
    long long _itemHeight;
    double _itemMultiple;
    UIColor *_sepratorColor;
    double _componentMargin;
}

@property (retain, nonatomic) UIColor *maskColor;
@property (retain, nonatomic) UIColor *overlayColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double horizontalMargin;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double titleHeight;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *cancelText;
@property (retain, nonatomic) UIColor *cancelColor;
@property (retain, nonatomic) UIColor *confirmColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *actionFont;
@property (copy, nonatomic) NSString *confirmText;
@property (nonatomic) BOOL titleSeprator;
@property (retain, nonatomic) UIColor *itemHighlightColor;
@property (retain, nonatomic) UIColor *itemCommonColor;
@property (retain, nonatomic) UIFont *itemFont;
@property (retain, nonatomic) UIFont *itemHighlightFont;
@property (nonatomic) long long itemHeight;
@property (nonatomic) double itemMultiple;
@property (retain, nonatomic) UIColor *sepratorColor;
@property (nonatomic) double componentMargin;

- (void)setCancelText:(id)arg0;
- (id)cancelText;
- (id)cancelColor;
- (void)setCancelColor:(id)arg0;
- (id)confirmColor;
- (void)setConfirmColor:(id)arg0;
- (void)setTitleHeight:(double)arg0;
- (id)itemFont;
- (id)itemHighlightFont;
- (double)itemMultiple;
- (double)componentMargin;
- (id)sepratorColor;
- (id)itemCommonColor;
- (id)actionFont;
- (BOOL)titleSeprator;
- (void)setActionFont:(id)arg0;
- (void)setTitleSeprator:(BOOL)arg0;
- (void)setItemCommonColor:(id)arg0;
- (void)setItemFont:(id)arg0;
- (void)setItemHighlightFont:(id)arg0;
- (void)setItemMultiple:(double)arg0;
- (void)setSepratorColor:(id)arg0;
- (void)setComponentMargin:(double)arg0;
- (id)init;
- (double)titleHeight;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)titleColor;
- (id)title;
- (void)setTitleColor:(id)arg0;
- (id)titleFont;
- (id)overlayColor;
- (void)setCornerRadius:(double)arg0;
- (void)setTitleFont:(id)arg0;
- (void)setOverlayColor:(id)arg0;
- (void)setTitle:(id)arg0;
- (double)horizontalMargin;
- (long long)itemHeight;
- (id)itemHighlightColor;
- (void)setItemHighlightColor:(id)arg0;
- (void)setMaskColor:(id)arg0;
- (void)setHorizontalMargin:(double)arg0;
- (id)maskColor;
- (id)confirmText;
- (void)setConfirmText:(id)arg0;
- (void)setItemHeight:(long long)arg0;

@end
