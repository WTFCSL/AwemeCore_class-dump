//
//     Generated by private class-dump
//

@interface BDPEngineFactory : NSObject

+ (id)sharedInstance;

- (id)createEngineWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 runtime:(id)arg1 uniqueID:(id)arg2;
- (BOOL)useKryptonEngineWithAppID:(id)arg0;
- (BOOL)isLocalLibVersionCanUseKrypton;
- (BOOL)preloadEngineWithRuntime:(id)arg0;
- (void)removePreloadedEngine:(id)arg0;

@end
