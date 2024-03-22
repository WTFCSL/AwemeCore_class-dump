//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary;

@interface VCStrategyMedia : NSObject {
    NSDictionary *_extraInfo;
    NSDictionary *_mediInfo;
    NSMutableDictionary *_externalUrlItemDic;
    id /* block */ _preloadEnd;
    id /* block */ _preloadCanceled;
    id /* block */ _preloadDidStart;
    id /* block */ _preloadProgress;
    id /* block */ _preloadSelectBitrate;
}

@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *mediInfo;
@property (copy, nonatomic) NSMutableDictionary *externalUrlItemDic;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;
@property (copy, nonatomic) id /* block */ preloadSelectBitrate;

- (void)setExtraInfo:(id)arg0;
- (void)setPreloadEnd:(id /* block */)arg0;
- (void)setPreloadCanceled:(id /* block */)arg0;
- (id /* block */)preloadProgress;
- (id /* block */)preloadEnd;
- (id /* block */)preloadDidStart;
- (id /* block */)preloadCanceled;
- (void)setPreloadDidStart:(id /* block */)arg0;
- (void)setPreloadProgress:(id /* block */)arg0;
- (id)initWithMediInfo:(id)arg0;
- (id)externalUrlItemDic;
- (void)appendExternalResource:(id)arg0 withType:(long long)arg1;
- (id /* block */)preloadSelectBitrate;
- (void)setPreloadSelectBitrate:(id /* block */)arg0;
- (void)setExternalUrlItemDic:(id)arg0;
- (id)mediInfo;
- (void)setMediInfo:(id)arg0;
- (void).cxx_destruct;
- (id)extraInfo;

@end