//
//     Generated by private class-dump
//

@class NSMutableDictionary, _TtC8TempoiOS11TempoEngine;

@interface AWEDiamondTempoViewManager : NSObject {
    _TtC8TempoiOS11TempoEngine *_engine;
    NSMutableDictionary *_tempoViewCache;
}

@property (retain, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (retain, nonatomic) NSMutableDictionary *tempoViewCache;

+ (id)tempoViewCacheKeyWithCardType:(long long)arg0 scene:(long long)arg1;
+ (void)preloadTempoTemplateIfNeeded;
+ (id)sharedInstance;

- (id)tempoCacheViewWithCardType:(long long)arg0 scene:(long long)arg1;
- (void)fetchTempoViewWithTemplateURL:(id)arg0 cardType:(long long)arg1 scene:(long long)arg2 data:(id)arg3 constraintWidth:(double)arg4 completion:(id /* block */)arg5;
- (void)inner_preloadTempoTemplateURLs:(id)arg0;
- (id)tempoViewCache;
- (void)setTempoViewCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)engine;
- (void)setEngine:(id)arg0;
- (void)removeCache:(id)arg0;
- (void)setupEngine;

@end
