//
//     Generated by private class-dump
//

@protocol RTVStorageArea <NSObject>

- (id)asyncSetObject:(id)arg0 forKey:(id)arg1;
- (id)asyncObjectForKey:(id)arg0;
- (id)asyncSetObject:(id)arg0;
- (id)asyncContainsObject:(id)arg0;
- (id)asyncSetObjects:(id)arg0;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (BOOL)containsObject:(id)arg0;
- (id)setObjects:(id)arg0;
- (id)objectForKey:(id)arg0;
- (BOOL)setObject:(id)arg0;
- (BOOL)removeAllObjects;

@optional

- (id)URLForKey:(id)arg0;
- (BOOL)copyObjectFromURL:(id)arg0 to:(id)arg1;
- (BOOL)moveObjectFromURL:(id)arg0 to:(id)arg1;

@end
