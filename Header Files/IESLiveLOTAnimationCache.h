//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLOTAnimationCache : NSObject <LOTImageCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearLottieAnimationCache;
+ (id)animationCacheForKey:(id)arg0;
+ (void)removeAnimationCacheForKey:(id)arg0;
+ (id)lottieImageForKey:(id)arg0;
+ (void)cacheLottieImage:(id)arg0 forKey:(id)arg1;
+ (void)removeLottieImageCacheForKey:(id)arg0;
+ (void)clearLottieImageCache;
+ (id)sharedInstance;

- (id)imageForKey:(id)arg0;
- (void)setImage:(id)arg0 forKey:(id)arg1;

@end
