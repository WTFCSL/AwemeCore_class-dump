//
//     Generated by private class-dump
//

@class NSCache;

@interface AWESearchPreLayoutProductCache : NSObject {
    BOOL _hasTriggeredPrelayout;
    NSCache *_sharedCache;
}

@property (retain, nonatomic) NSCache *sharedCache;
@property (nonatomic) BOOL hasTriggeredPrelayout;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)setProduct:(id)arg0 forKey:(id)arg1;
- (id)productForKey:(id)arg0;
- (id)getKeyFromSchema:(id)arg0;
- (BOOL)hasTriggeredPrelayout;
- (void)setHasTriggeredPrelayout:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setSharedCache:(id)arg0;
- (id)sharedCache;
- (void)removeForKey:(id)arg0;

@end