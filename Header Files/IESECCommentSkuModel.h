//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECCommentSkuModel : MTLModel <MTLJSONSerializing> {
    NSString *_key;
    NSArray *_names;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *names;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (void)setNames:(id)arg0;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (id)names;

@end
