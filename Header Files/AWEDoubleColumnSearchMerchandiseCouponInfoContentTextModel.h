//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel : MTLModel <MTLJSONSerializing> {
    BOOL _isBold;
    NSString *_text;
    NSString *_textColor;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL isBold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (BOOL)isBold;
- (void)setIsBold:(BOOL)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;

@end
