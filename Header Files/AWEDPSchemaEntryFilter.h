//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface AWEDPSchemaEntryFilter : MTLModel <MTLJSONSerializing> {
    NSArray *_includes;
    NSArray *_excludes;
    NSDictionary *_paramValidator;
}

@property (retain, nonatomic) NSArray *includes;
@property (retain, nonatomic) NSArray *excludes;
@property (retain, nonatomic) NSDictionary *paramValidator;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramValidatorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)paramValidator;
- (void)setParamValidator:(id)arg0;
- (void).cxx_destruct;
- (id)validate:(id)arg0;
- (void)setIncludes:(id)arg0;
- (void)setExcludes:(id)arg0;
- (id)includes;
- (id)excludes;

@end
