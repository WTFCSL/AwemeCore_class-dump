//
//     Generated by private class-dump
//

@class NSCache;

@interface BDREExprCacheManager : NSObject {
    NSCache *_exprCache;
}

@property (retain, nonatomic) NSCache *exprCache;

+ (id)sharedManager;

- (id)exprCache;
- (void)setExprCache:(id)arg0;
- (id)findCacheForExpr:(id)arg0;
- (void)addCache:(id)arg0 forExpr:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
