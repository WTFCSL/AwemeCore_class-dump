//
//     Generated by private class-dump
//

@class NSString;
@protocol BDIGameRuntimeProtocol;

@interface BDIKryptonServiceImpl : NSObject <KryptonService> {
    id<BDIGameRuntimeProtocol> _gameRuntimePlugin;
}

@property (retain, nonatomic) id<BDIGameRuntimeProtocol> gameRuntimePlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPause;
- (id)gameRuntimePlugin;
- (void)setGameRuntimePlugin:(id)arg0;
- (void)onBootstrap:(id)arg0;
- (void)onDestroy;
- (void)onShow;
- (void)onHide;
- (id)init;
- (void).cxx_destruct;
- (void)onResume;

@end