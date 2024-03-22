//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWETrackerDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;

+ (id)init;
+ (id)initWithCapacity:(unsigned long long)arg0;
+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)arg0;

- (id)init;
- (void).cxx_destruct;
- (id)keyEnumerator;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)setDictionary:(id)arg0;
- (id)objectForKeyedSubscript:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg0;
- (void)removeObjectsForKeys:(id)arg0;
- (id)objectForKey:(id)arg0;
- (void)addEntriesFromDictionary:(id)arg0;
- (void)removeAllObjects;

@end
