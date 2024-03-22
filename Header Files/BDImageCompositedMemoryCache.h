//
//     Generated by private class-dump
//

@class BDAnimatedImageMemoryCacheControl, BDLargeImageMemoryCacheControl, NSString;
@protocol BDMemoryCache;

@interface BDImageCompositedMemoryCache : NSObject <BDMemoryCache> {
    BOOL _enableLRUFlag;
    BDAnimatedImageMemoryCacheControl *_animatedImageMemoryCacheControl;
    BDLargeImageMemoryCacheControl *_largeImageMemoryCacheControl;
    id<BDMemoryCache> _defaultCache;
    id<BDMemoryCache> _animatedImageCache;
    id<BDMemoryCache> _largeImageCache;
}

@property (nonatomic) BOOL enableLRUFlag;
@property (retain, nonatomic) id<BDMemoryCache> defaultCache;
@property (retain, nonatomic) id<BDMemoryCache> animatedImageCache;
@property (retain, nonatomic) id<BDMemoryCache> largeImageCache;
@property (retain, nonatomic) BDAnimatedImageMemoryCacheControl *animatedImageMemoryCacheControl;
@property (retain, nonatomic) BDLargeImageMemoryCacheControl *largeImageMemoryCacheControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnableLRUFlag:(BOOL)arg0;
- (void)setAnimatedImageCache:(id)arg0;
- (id)initWithEnableLRU:(BOOL)arg0;
- (id)animatedImageCache;
- (BOOL)enableLRUFlag;
- (id)largeImageCache;
- (void)setLargeImageCache:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1 cost:(unsigned long long)arg2 isAnimatedImage:(BOOL)arg3;
- (id)largeImageMemoryCacheControl;
- (void)setAnimatedImageMemoryCacheControl:(id)arg0;
- (void)setLargeImageMemoryCacheControl:(id)arg0;
- (id)animatedImageMemoryCacheControl;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (BOOL)containsObjectForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)removeObjectForKey:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)objectForKey:(id)arg0;
- (void)removeAllObjects;
- (void)setObject:(id)arg0 forKey:(id)arg1 cost:(unsigned long long)arg2;
- (id)defaultCache;
- (void)setDefaultCache:(id)arg0;

@end