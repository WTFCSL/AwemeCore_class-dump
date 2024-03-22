//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface AWEECMallMessageRedTag : MTLModel <MTLJSONSerializing> {
    long long _tagType;
    NSString *_tagText;
    NSString *_skipURL;
    NSDictionary *_extra;
    NSArray *_registerParams;
}

@property (nonatomic) BOOL hasRedTagUnderTaked;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *skipURL;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *registerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setTagText:(id)arg0;
- (id)tagText;
- (void)setRegisterParams:(id)arg0;
- (id)redDotComponentID;
- (BOOL)hasRedTagUnderTaked;
- (void)setHasRedTagUnderTaked:(BOOL)arg0;
- (id)skipURL;
- (void)setSkipURL:(id)arg0;
- (id)registerParams;
- (long long)tagType;
- (void).cxx_destruct;
- (id)extra;
- (void)setTagType:(long long)arg0;

@end