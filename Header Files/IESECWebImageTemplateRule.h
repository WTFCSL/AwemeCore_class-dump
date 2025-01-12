//
//     Generated by private class-dump
//

@class NSString, IESECWebImageTemplateFormat, NSDictionary;

@interface IESECWebImageTemplateRule : MTLModel <MTLJSONSerializing> {
    NSString *_pattern;
    long long _sizeOption;
    long long _remakeType;
    IESECWebImageTemplateFormat *_templateFormat;
    NSDictionary *_templateGroupFormats;
}

@property (copy, nonatomic) NSString *pattern;
@property (nonatomic) long long sizeOption;
@property (nonatomic) long long remakeType;
@property (retain, nonatomic) IESECWebImageTemplateFormat *templateFormat;
@property (copy, nonatomic) NSDictionary *templateGroupFormats;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateGroupFormatsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)sizeOption;
- (void)setSizeOption:(long long)arg0;
- (long long)remakeType;
- (void)setRemakeType:(long long)arg0;
- (id)templateFormat;
- (void)setTemplateFormat:(id)arg0;
- (id)templateGroupFormats;
- (void)setTemplateGroupFormats:(id)arg0;
- (void).cxx_destruct;
- (id)pattern;
- (void)setPattern:(id)arg0;

@end
