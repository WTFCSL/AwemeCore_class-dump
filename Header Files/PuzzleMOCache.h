//
//     Generated by private class-dump
//

@class BDXThreadSafeDictionary;

@interface PuzzleMOCache : NSObject {
    BDXThreadSafeDictionary *_cacheMap;
}

@property (retain, nonatomic) BDXThreadSafeDictionary *cacheMap;

- (void)_cleanNilObjects;
- (void)setObject:(id)arg0 forIdentifier:(id)arg1;
- (id)getObjectForIdentifier:(id)arg0;
- (id)cachedObjects;
- (id)init;
- (void).cxx_destruct;
- (void)setCacheMap:(id)arg0;
- (id)cacheMap;

@end
