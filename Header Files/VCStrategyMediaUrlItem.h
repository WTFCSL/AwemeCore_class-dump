//
//     Generated by private class-dump
//

@class NSDictionary;

@interface VCStrategyMediaUrlItem : NSObject {
    NSDictionary *_info;
    id /* block */ _preloadEnd;
    id /* block */ _preloadCanceled;
    id /* block */ _preloadDidStart;
    id /* block */ _preloadProgress;
}

@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;

- (void)setPreloadEnd:(id /* block */)arg0;
- (void)setPreloadCanceled:(id /* block */)arg0;
- (id /* block */)preloadProgress;
- (id /* block */)preloadEnd;
- (id /* block */)preloadDidStart;
- (id /* block */)preloadCanceled;
- (void)setPreloadDidStart:(id /* block */)arg0;
- (void)setPreloadProgress:(id /* block */)arg0;
- (id)initWithInfo:(id)arg0;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;

@end
