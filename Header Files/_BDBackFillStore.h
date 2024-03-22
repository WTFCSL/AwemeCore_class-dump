//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface _BDBackFillStore : NSObject {
    unsigned long long _countLimit;
    NSMutableDictionary *_dbCache;
}

@property (nonatomic) unsigned long long countLimit;
@property (retain, nonatomic) NSMutableDictionary *dbCache;

+ (id)sharedInstance;

- (void)insertObject:(id)arg0 forKey:(id)arg1;
- (id)dbCache;
- (void)setDbCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg0;
- (void)clear;
- (id)objectForKey:(id)arg0;
- (void)setCountLimit:(unsigned long long)arg0;
- (unsigned long long)countLimit;

@end
