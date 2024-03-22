//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface EAIModelInputPreprocessConfig : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    NSDictionary *_standardscaler;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *standardscaler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)standardscaler;
- (void)setStandardscaler:(id)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end
