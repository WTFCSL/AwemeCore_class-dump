//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWERootModelJSONAdapter : NSObject {
    NSDictionary *_propertyInfosMap;
    NSDictionary *_keyPathToPropertyInfoMap;
    NSDictionary *_propertyValueTransformersMap;
}

@property (copy, nonatomic) NSDictionary *propertyInfosMap;
@property (copy, nonatomic) NSDictionary *keyPathToPropertyInfoMap;
@property (copy, nonatomic) NSDictionary *propertyValueTransformersMap;

+ (id)adapterWithPropertyInfosMap:(id)arg0;

- (id)propertyInfosMap;
- (void)setPropertyInfosMap:(id)arg0;
- (id)modelWithClass:(Class)arg0 JSONDictionary:(id)arg1 sharedModelInfos:(id)arg2;
- (void)generateMaps;
- (id)propertyValueTransformersMap;
- (id)keyPathToPropertyInfoMap;
- (void)setKeyPathToPropertyInfoMap:(id)arg0;
- (void)setPropertyValueTransformersMap:(id)arg0;
- (void).cxx_destruct;
- (id)JSONDictionaryFromModel:(id)arg0;

@end
