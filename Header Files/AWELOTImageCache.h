//
//     Generated by private class-dump
//

@class NSString, AWEStorage;

@interface AWELOTImageCache : NSObject <LOTImageCache> {
    AWEStorage *_cache;
}

@property (retain, nonatomic) AWEStorage *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setCache:(id)arg0;
- (id)cache;
- (void).cxx_destruct;
- (id)imageForKey:(id)arg0;
- (void)setImage:(id)arg0 forKey:(id)arg1;

@end
