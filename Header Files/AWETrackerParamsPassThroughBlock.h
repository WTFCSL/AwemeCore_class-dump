//
//     Generated by private class-dump
//

@class NSDictionary, NSNumber;

@interface AWETrackerParamsPassThroughBlock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _block_mutex_lock;
    BOOL _shouldEnableParamsOverride;
    id /* block */ _block;
    NSDictionary *_applyComparedResultCache;
    NSNumber *_applyDurationCache;
}

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL shouldEnableParamsOverride;
@property (retain, nonatomic) NSDictionary *applyComparedResultCache;
@property (retain, nonatomic) NSNumber *applyDurationCache;

+ (id)initWithBlock:(id /* block */)arg0;

- (void)applyBlockWithEvent:(id)arg0 params:(id)arg1 trackerContext:(id)arg2;
- (void)setShouldEnableParamsOverride:(BOOL)arg0;
- (void)setApplyDurationCache:(id)arg0;
- (void)setApplyComparedResultCache:(id)arg0;
- (id)applyComparedResultCache;
- (BOOL)shouldEnableParamsOverride;
- (id)applyDurationCache;
- (id)init;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id)initWithBlock:(id /* block */)arg0;
- (id)description;
- (id)descriptionDictionary;
- (id /* block */)block;

@end
