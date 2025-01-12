//
//     Generated by private class-dump
//

@class NSString;

@interface IESECOrderListTabItemUIConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_backgroundColor;
    NSString *_textColor;
    double _fontSize;
}

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (double)fontSize;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;

@end
