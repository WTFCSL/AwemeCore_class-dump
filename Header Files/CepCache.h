//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface CepCache : NSObject {
    NSMutableDictionary *_cacheMap;
}

@property (retain, nonatomic) NSMutableDictionary *cacheMap;

+ (id)sharedInstance;

- (void)uncacheObject:(id)arg0;
- (id)init;
- (void)cacheObject:(id)arg0;
- (void).cxx_destruct;
- (void)setCacheMap:(id)arg0;
- (id)cacheMap;

@end