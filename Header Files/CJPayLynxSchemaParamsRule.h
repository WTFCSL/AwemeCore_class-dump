//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CJPayLynxSchemaParamsRule : JSONModel {
    NSString *_url;
    NSArray *_keys;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *keys;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)keys;
- (void)setKeys:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end
