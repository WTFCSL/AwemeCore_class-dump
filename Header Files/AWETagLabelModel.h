//
//     Generated by private class-dump
//

@class NSMutableAttributedString, NSString, NSNumber, AWEURLModel;

@interface AWETagLabelModel : MTLModel <MTLJSONSerializing> {
    BOOL _isLimitAdTagOptimization;
    BOOL _disableBackgroundColor;
    NSString *_text;
    NSString *_textColorString;
    NSString *_textColorStringForWhite;
    NSString *_iconColorString;
    NSString *_iconColorStringForWhite;
    NSString *_colorString;
    NSString *_colorStringForWhite;
    NSString *_webURL;
    unsigned long long _type;
    long long _style;
    long long _showSeconds;
    AWEURLModel *_icon;
    NSMutableAttributedString *_adMoreTagAttributedString;
}

@property (retain, nonatomic) NSNumber *isDouPlusAD;
@property (retain, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorString;
@property (copy, nonatomic) NSString *textColorStringForWhite;
@property (copy, nonatomic) NSString *iconColorString;
@property (copy, nonatomic) NSString *iconColorStringForWhite;
@property (copy, nonatomic) NSString *colorString;
@property (copy, nonatomic) NSString *colorStringForWhite;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long style;
@property (nonatomic) long long showSeconds;
@property (retain, nonatomic) AWEURLModel *icon;
@property (nonatomic) BOOL isLimitAdTagOptimization;
@property (nonatomic) BOOL disableBackgroundColor;
@property (retain, nonatomic) NSMutableAttributedString *adMoreTagAttributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)styleJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (id)adMoreTagAttributedString;
- (void)setAdMoreTagAttributedString:(id)arg0;
- (id)textColorString;
- (void)setTextColorString:(id)arg0;
- (BOOL)isDynamicStyle;
- (id)textColorStringForWhite;
- (void)setTextColorStringForWhite:(id)arg0;
- (id)iconColorString;
- (void)setIconColorString:(id)arg0;
- (id)iconColorStringForWhite;
- (void)setIconColorStringForWhite:(id)arg0;
- (id)colorStringForWhite;
- (void)setColorStringForWhite:(id)arg0;
- (BOOL)isLimitAdTagOptimization;
- (void)setIsLimitAdTagOptimization:(BOOL)arg0;
- (BOOL)disableBackgroundColor;
- (void)setDisableBackgroundColor:(BOOL)arg0;
- (id)isDouPlusAD;
- (BOOL)shouldShowAdTagOnGoodsInfo;
- (void)setIsDouPlusAD:(id)arg0;
- (long long)style;
- (id)icon;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)position;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (unsigned long long)type;
- (void)setPosition:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (void)setStyle:(long long)arg0;
- (id)colorString;
- (void)setColorString:(id)arg0;
- (void)setShowSeconds:(long long)arg0;
- (long long)showSeconds;

@end
