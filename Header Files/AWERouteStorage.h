//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary;

@interface AWERouteStorage : NSObject {
    NSLock *_lock;
    NSMutableDictionary *_routeMap;
}

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *routeMap;

- (id)registerURLString:(id)arg0;
- (id)parseRouteForURL:(id)arg0 errorMessage:(id *)arg1;
- (id)_routeForScheme:(id)arg0;
- (id)routeMap;
- (void)setRouteMap:(id)arg0;
- (id)_routeInfoMapForScheme:(id)arg0;
- (id)_routeDictionaryForScheme:(id)arg0 createIfNeeded:(BOOL)arg1;
- (id)_routeInfoMapForRoutes:(id)arg0;
- (void)removeURLForScheme:(id)arg0;
- (void)removeAllURL;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)allRouteInfos;

@end