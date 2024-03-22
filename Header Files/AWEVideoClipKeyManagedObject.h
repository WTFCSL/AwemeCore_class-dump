//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;

@interface AWEVideoClipKeyManagedObject : NSObject {
    NSMutableDictionary *_objectMapDictionary;
    id _currentKey;
}

@property (retain, nonatomic) NSMutableDictionary *objectMapDictionary;
@property (copy, nonatomic) id currentKey;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;

- (void)setObjectAsCurrentForKey:(id)arg0;
- (id)objectMapDictionary;
- (void)setObjectMapDictionary:(id)arg0;
- (id)currentKey;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)allKeys;
- (id)objectForKeyedSubscript:(id)arg0;
- (id)allValues;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (id)currentObject;
- (void)setCurrentKey:(id)arg0;

@end