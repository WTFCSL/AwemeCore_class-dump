//
//     Generated by private class-dump
//

@class NSCache;

@interface BDXTracertCache : NSObject {
    NSCache *_sharedCache;
}

@property (retain, nonatomic) NSCache *sharedCache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)setSharedCache:(id)arg0;
- (id)sharedCache;
- (id)objectForKey:(id)arg0;

@end
