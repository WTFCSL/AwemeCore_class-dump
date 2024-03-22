//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEHomePageRemoteModuleModel : MTLModel <MTLJSONSerializing> {
    NSString *_moduleType;
    long long _column;
    NSArray *_items;
}

@property (copy, nonatomic) NSString *moduleType;
@property (nonatomic) long long column;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)description;
- (id)moduleType;
- (long long)column;
- (void)setModuleType:(id)arg0;
- (void)setColumn:(long long)arg0;

@end