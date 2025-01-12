//
//     Generated by private class-dump
//

@class NSMutableArray, MMKV;

@interface AWEUGSnackbarStrategyManager : NSObject {
    NSMutableArray *_strategyList;
    MMKV *_mmkv;
}

@property (retain, nonatomic) NSMutableArray *strategyList;
@property (retain, nonatomic) MMKV *mmkv;

+ (id)sharedManager;

- (void)setStrategyList:(id)arg0;
- (id)strategyList;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)markSnackbarForbiddenForSceneType:(id)arg0 params:(id)arg1;
- (void)clearRecord;
- (void)trackLogWithMessage:(id)arg0;
- (void)injectSnackbarStrategy:(id)arg0 config:(id)arg1 evadeStrategy:(id)arg2;
- (void)removeSnackbarStrategy:(id)arg0;
- (void)reportShortcutInstall:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
