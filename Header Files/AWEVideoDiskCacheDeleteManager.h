//
//     Generated by private class-dump
//

@class NSTimer, NSMutableSet;

@interface AWEVideoDiskCacheDeleteManager : NSObject {
    NSMutableSet *_shouldDeleteCacheSet;
    NSMutableSet *_usingCacheSet;
    NSTimer *_deleteTimer;
}

@property (retain, nonatomic) NSMutableSet *shouldDeleteCacheSet;
@property (retain, nonatomic) NSMutableSet *usingCacheSet;
@property (retain, nonatomic) NSTimer *deleteTimer;

+ (void)shouldDeleteCacheForKey:(id)arg0;
+ (void)_deleteCachesSafely;
+ (id)usingCacheItems;
+ (void)startUseCacheForKey:(id)arg0;
+ (void)endUseCacheForKey:(id)arg0;
+ (id)sharedInstance;

- (void)setShouldDeleteCacheSet:(id)arg0;
- (void)setUsingCacheSet:(id)arg0;
- (void)setDeleteTimer:(id)arg0;
- (id)deleteTimer;
- (id)usingCacheSet;
- (id)shouldDeleteCacheSet;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
