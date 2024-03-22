//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUGSceneLifeCycleListener : AWEUGSceneBaseListener <AWEUGUndertakeMessage> {
    NSString *_sceneType;
    long long _status;
}

@property (copy, nonatomic) NSString *sceneType;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)sceneDisappear:(id)arg0;
- (id)initWithSceneType:(id)arg0;
- (void)trackLogWithMessage:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)sceneType;
- (void)setSceneType:(id)arg0;

@end
