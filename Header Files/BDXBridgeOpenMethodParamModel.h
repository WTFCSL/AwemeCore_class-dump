//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenMethodParamModel : BDXBridgeModel {
    BOOL _replace;
    BOOL _firstClose;
    BOOL _useSysBrowser;
    NSString *_schema;
    NSNumber *_asyncCheckOpen;
    NSDictionary *_extra;
    long long _replaceType;
}

@property (readonly, nonatomic) BOOL bReplace;
@property (readonly, nonatomic) BOOL bFirstClose;
@property (readonly, nonatomic) BOOL bUseSysBrowser;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL replace;
@property (nonatomic) BOOL firstClose;
@property (nonatomic) BOOL useSysBrowser;
@property (retain, nonatomic) NSNumber *asyncCheckOpen;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long replaceType;

+ (id)requiredKeyPaths;
+ (id)replaceTypeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (long long)replaceType;
- (void)setReplaceType:(long long)arg0;
- (BOOL)replace;
- (void)setReplace:(BOOL)arg0;
- (BOOL)useSysBrowser;
- (void)setUseSysBrowser:(BOOL)arg0;
- (BOOL)firstClose;
- (void)setFirstClose:(BOOL)arg0;
- (BOOL)bUseSysBrowser;
- (id)asyncCheckOpen;
- (BOOL)bReplace;
- (BOOL)bFirstClose;
- (void)setAsyncCheckOpen:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)schema;

@end