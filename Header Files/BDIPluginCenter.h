//
//     Generated by private class-dump
//

@interface BDIPluginCenter : NSObject {
    Class _bdiRouterPlugin;
    Class _bdiViewContainerPlugin;
    Class _gameRuntimePlugin;
    Class _gameContainerPlugin;
    Class _gameLifecyclePlugin;
}

@property (retain, nonatomic) Class bdiRouterPlugin;
@property (retain, nonatomic) Class bdiViewContainerPlugin;
@property (retain, nonatomic) Class gameRuntimePlugin;
@property (retain, nonatomic) Class gameContainerPlugin;
@property (retain, nonatomic) Class gameLifecyclePlugin;

+ (id)sharedCenter;

- (Class)bdiRouterPlugin;
- (void)setBdiRouterPlugin:(Class)arg0;
- (Class)bdiViewContainerPlugin;
- (void)setBdiViewContainerPlugin:(Class)arg0;
- (Class)gameRuntimePlugin;
- (void)setGameRuntimePlugin:(Class)arg0;
- (Class)gameContainerPlugin;
- (void)setGameContainerPlugin:(Class)arg0;
- (Class)gameLifecyclePlugin;
- (void)setGameLifecyclePlugin:(Class)arg0;
- (void).cxx_destruct;

@end
