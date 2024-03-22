//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface AWECFObject : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutableModulesLock;
    NSMutableDictionary *_mutableModulesToRemove;
    NSMutableDictionary *_mutableModules;
    NSMutableArray *_failedModules;
    NSMutableArray *_allLoadedModules;
    NSMutableDictionary *_mutableModulesDidLoad;
}

@property (retain, nonatomic) NSMutableDictionary *mutableModulesToRemove;
@property (retain, nonatomic) NSMutableDictionary *mutableModules;
@property (retain, nonatomic) NSMutableArray *failedModules;
@property (retain, nonatomic) NSMutableArray *allLoadedModules;
@property (retain, nonatomic) NSMutableDictionary *mutableModulesDidLoad;
@property (readonly, nonatomic) NSArray *allModulesToRemove;
@property (readonly, nonatomic) NSArray *allModules;

+ (void)clearAllLocalQuaterback;
+ (BOOL)clearLocalQuaterbackWithModule:(id)arg0;
+ (id)alphaMainDirectory;
+ (id)allModules;
+ (id)moduleDirectoryWithModuleName:(id)arg0;
+ (id)historyRecordsFilePath;
+ (BOOL)saveToFileWithModules:(id)arg0;
+ (void)_clearAllLocalQuaterback;
+ (BOOL)appendToFileWithModules:(id)arg0;
+ (id)sharedManager;

- (void)bd_viewControllerForUnwindSegueAction:(id)arg0;
- (void)bd_viewDidAppear:(id)arg0;
- (id)allToReportModules;
- (id)moduleForName:(id)arg0;
- (void)bd_viewWillDisappear:(id)arg0;
- (void)bd_viewWillLayoutSubviews;
- (id)allToLogModules;
- (id)allModules;
- (void)bd_unwindForSegue:(id)arg0;
- (id)didLoadModuleWithName:(id)arg0;
- (id)allLoadedQuaterbacks;
- (void)bd_viewDidDisappear:(id)arg0;
- (id)allLoadedModules;
- (void)lockMutableModules;
- (id)mutableModules;
- (id)mutableModulesDidLoad;
- (void)unlockMutableModules;
- (id)failedModules;
- (id)mutableModulesToRemove;
- (void)bd_viewWillAppear:(id)arg0;
- (id)allModulesToRemove;
- (void)setMutableModulesToRemove:(id)arg0;
- (void)setMutableModules:(id)arg0;
- (void)setFailedModules:(id)arg0;
- (void)setAllLoadedModules:(id)arg0;
- (void)setMutableModulesDidLoad:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
