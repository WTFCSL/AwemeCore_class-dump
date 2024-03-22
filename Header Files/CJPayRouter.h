//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface CJPayRouter : NSObject {
    NSMutableDictionary *_routes;
}

@property (retain, nonatomic) NSMutableDictionary *routes;

+ (void)openURL:(id)arg0 withUserInfo:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)canOpenURL:(id)arg0 matchExactly:(BOOL)arg1;
+ (BOOL)checkIfContainsSpecialCharacter:(id)arg0;
+ (id)objectForURL:(id)arg0 withUserInfo:(id)arg1;
+ (void)registerURLPattern:(id)arg0 toHandler:(id /* block */)arg1;
+ (void)deregisterURLPattern:(id)arg0;
+ (id)generateURLWithPattern:(id)arg0 parameters:(id)arg1;
+ (void)registerURLPattern:(id)arg0 toObjectHandler:(id /* block */)arg1;
+ (BOOL)canOpenURL:(id)arg0;
+ (id)sharedInstance;
+ (void)openURL:(id)arg0;
+ (void)openURL:(id)arg0 completion:(id /* block */)arg1;
+ (id)objectForURL:(id)arg0;

- (void)addURLPattern:(id)arg0 andHandler:(id /* block */)arg1;
- (void)removeURLPattern:(id)arg0;
- (id)extractParametersFromURL:(id)arg0 matchExactly:(BOOL)arg1;
- (void)addURLPattern:(id)arg0 andObjectHandler:(id /* block */)arg1;
- (id)addURLPattern:(id)arg0;
- (id)pathComponentsFromURL:(id)arg0;
- (void).cxx_destruct;
- (id)routes;
- (void)setRoutes:(id)arg0;

@end
