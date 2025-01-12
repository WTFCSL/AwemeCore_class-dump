//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableArray;

@interface LynxGroup : NSObject {
    int _numberId;
    NSMutableArray *_viewList;
    BOOL _enableCanvas;
    BOOL _enableJSGroupThread;
    BOOL _useProviderJsEnv;
    NSString *_groupName;
    NSString *_identification;
    NSArray *_preloadJSPaths;
}

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *identification;
@property (readonly, nonatomic) NSArray *preloadJSPaths;
@property (readonly, nonatomic) BOOL useProviderJsEnv;
@property (readonly, nonatomic) BOOL enableCanvas;

+ (id)singleGroupTag;

- (id)initWithName:(id)arg0 withPreloadScript:(id)arg1 useProviderJsEnv:(BOOL)arg2 enableCanvas:(BOOL)arg3 enableCanvasOptimization:(BOOL)arg4;
- (id)initWithName:(id)arg0 withPreloadScript:(id)arg1 useProviderJsEnv:(BOOL)arg2 enableCanvas:(BOOL)arg3;
- (id)identification;
- (BOOL)enableCanvas;
- (id)initWithName:(id)arg0 withPreloadScript:(id)arg1;
- (id)preloadJSPaths;
- (BOOL)useProviderJsEnv;
- (BOOL)enableJSGroupThread;
- (id)initWithName:(id)arg0 withLynxGroupOption:(id)arg1;
- (void)addLynxView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithName:(id)arg0;
- (id)groupName;

@end
