//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEPerfSceneMonitor : NSObject {
    NSString *_scene;
    NSMutableDictionary *_sceneMap;
    NSMutableArray *_observers;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableDictionary *sceneMap;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMutableArray *observers;

+ (id)sharedMonitor;

- (id)subScene;
- (void)updateScene:(id)arg0 subScene:(id)arg1;
- (void)onSceneDidChange;
- (id)sceneMap;
- (void)setSceneMap:(id)arg0;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })lock;
- (void)addObserver:(id)arg0;
- (void)dealloc;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (id)scene;

@end
