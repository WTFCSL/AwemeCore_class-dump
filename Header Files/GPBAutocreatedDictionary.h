//
//     Generated by private class-dump
//

@class GPBMessage, NSMutableDictionary;

@interface GPBAutocreatedDictionary : NSMutableDictionary {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (id)keyEnumerator;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)objectForKeyedSubscript:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg0 usingBlock:(id /* block */)arg1;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg0;
- (void)dealloc;
- (id)initWithObjects:(const id *)arg0 forKeys:(const id *)arg1 count:(unsigned long long)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end