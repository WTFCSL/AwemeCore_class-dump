//
//     Generated by private class-dump
//

@class AWEInTodaySchemaStrategyConfig, AWEInTodaySchemaUIConfig, NSString, AWEInTodayLoadingViewController, NSDictionary, NSTimer;

@interface AWEInTodayLoadingPageHelper : NSObject <AWEInTodayLoadingViewControllerDelegate> {
    AWEInTodayLoadingViewController *_vc;
    AWEInTodaySchemaUIConfig *_uiConfig;
    AWEInTodaySchemaStrategyConfig *_strategyConfig;
    NSString *_albumKey;
    NSDictionary *_dataConfig;
    id /* block */ _aggregateCompletion;
    NSTimer *_aggregateTimer;
    NSString *_shootEnterFrom;
}

@property (weak, nonatomic) AWEInTodayLoadingViewController *vc;
@property (retain, nonatomic) AWEInTodaySchemaUIConfig *uiConfig;
@property (retain, nonatomic) AWEInTodaySchemaStrategyConfig *strategyConfig;
@property (retain, nonatomic) NSString *albumKey;
@property (retain, nonatomic) NSDictionary *dataConfig;
@property (copy, nonatomic) id /* block */ aggregateCompletion;
@property (retain, nonatomic) NSTimer *aggregateTimer;
@property (retain, nonatomic) NSString *shootEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setShootEnterFrom:(id)arg0;
- (id)dataConfig;
- (id)uiConfig;
- (id)strategyConfig;
- (id)shootEnterFrom;
- (void)setVc:(id)arg0;
- (void)setAlbumKey:(id)arg0;
- (id)albumKey;
- (void)setStrategyConfig:(id)arg0;
- (void)setUiConfig:(id)arg0;
- (void)setDataConfig:(id)arg0;
- (void)startShoot;
- (void)leaveLoadingVC;
- (void)dismissLoadingVC;
- (void)startPreloadWithStatus:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)aggregateTimer;
- (void)setAggregateCompletion:(id /* block */)arg0;
- (id)fetchAssetsWithMaxCount:(long long)arg0 assetIds:(id)arg1 coverId:(id)arg2 ascending:(BOOL)arg3 localAlbum:(id)arg4;
- (void)setAggregateTimer:(id)arg0;
- (void)completeAggregateWithConfig:(id)arg0 assetIds:(id)arg1 coverId:(id)arg2 localAlbum:(id)arg3 taskId:(id)arg4;
- (id /* block */)aggregateCompletion;
- (id)fetchAssetsWithMaxCount:(long long)arg0 assetIds:(id)arg1 coverId:(id)arg2 ascending:(BOOL)arg3;
- (void)debugVidaScoreList:(id)arg0 result:(id)arg1;
- (void)startAggregateWithProgress:(id /* block */)arg0 taskId:(id)arg1 completion:(id /* block */)arg2;
- (void)updateUIConfig:(id)arg0 strategyConfig:(id)arg1;
- (void)updateShootEnterFrom:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)vc;
- (void)stopTimer:(id)arg0;

@end
