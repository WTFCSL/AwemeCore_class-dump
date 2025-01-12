//
//     Generated by private class-dump
//

@class UIView, NSString, IESLiveLyricViewConfig, HTSEventForwardingView, NSDictionary, NSMapTable, UILabel;

@interface IESLiveKRCLyricView : HTSEventForwardingView <NSLayoutManagerDelegate> {
    BOOL _isFocused;
    NSString *_text;
    IESLiveKRCLyricView *_nextLyricView;
    IESLiveLyricViewConfig *_config;
    HTSEventForwardingView *_contentView;
    UILabel *_textLabel;
    UIView *_maskLabelView;
    UILabel *_maskLabel;
    NSDictionary *_focusNonMaskAttr;
    NSDictionary *_focusMaskAttr;
    NSDictionary *_nonFocusMaskAttr;
    NSDictionary *_nonFocusNonMaskAttr;
    NSMapTable *_boundingRectCache;
}

@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (retain, nonatomic) HTSEventForwardingView *contentView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *maskLabelView;
@property (retain, nonatomic) UILabel *maskLabel;
@property (nonatomic) BOOL isFocused;
@property (copy, nonatomic) NSDictionary *focusNonMaskAttr;
@property (copy, nonatomic) NSDictionary *focusMaskAttr;
@property (copy, nonatomic) NSDictionary *nonFocusMaskAttr;
@property (copy, nonatomic) NSDictionary *nonFocusNonMaskAttr;
@property (retain, nonatomic) NSMapTable *boundingRectCache;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveKRCLyricView *nextLyricView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)arg0;
- (void)initSubviews;
- (void)reloadWithText:(id)arg0;
- (void)pr_makeFontAttribute;
- (id)maskLabelView;
- (id)maskLabel;
- (void)p_scaleLabelWithAnimation:(BOOL)arg0;
- (void)setCurrentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 progress:(double)arg1;
- (void)_resetMaskLayerWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 progress:(double)arg1;
- (id)textAttributesWithFocused:(BOOL)arg0 isMaskLabel:(BOOL)arg1;
- (id)boundingRectCache;
- (id)focusMaskAttr;
- (id)focusNonMaskAttr;
- (id)nonFocusMaskAttr;
- (id)nonFocusNonMaskAttr;
- (void)setNonFocusNonMaskAttr:(id)arg0;
- (void)setNonFocusMaskAttr:(id)arg0;
- (void)setFocusNonMaskAttr:(id)arg0;
- (void)setFocusMaskAttr:(id)arg0;
- (id)initWithLyricViewConfig:(id)arg0;
- (void)resetLyricView;
- (id)nextLyricView;
- (void)setNextLyricView:(id)arg0;
- (void)setMaskLabelView:(id)arg0;
- (void)setMaskLabel:(id)arg0;
- (void)setBoundingRectCache:(id)arg0;
- (BOOL)isFocused;
- (id)textLabel;
- (void)setFocused:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)config;
- (id)contentView;
- (id)text;
- (void)layoutSubviews;
- (void)setContentView:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setIsFocused:(BOOL)arg0;

@end
