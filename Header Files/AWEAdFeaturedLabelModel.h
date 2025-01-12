//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdFeaturedLabelModel : MTLModel <MTLJSONSerializing> {
    NSString *_color;
    NSString *_colorForWhite;
    NSString *_text;
    NSString *_textColor;
    NSString *_textColorForWhite;
}

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *colorForWhite;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textColorForWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)colorForWhite;
- (void)setColorForWhite:(id)arg0;
- (id)textColorForWhite;
- (void)setTextColorForWhite:(id)arg0;
- (id)color;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setColor:(id)arg0;

@end
