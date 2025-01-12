//
//     Generated by private class-dump
//

@class NSMutableDictionary, TabResponse, HTSLiveApi, TabItem, NSString;
@protocol HTSKVStore;

@interface IESLiveFeedConfigFetcher : NSObject <IESLiveFeedConfig> {
    id<HTSKVStore> _configStore;
    HTSLiveApi *_api;
    NSMutableDictionary *_feedTabModels;
}

@property (retain, nonatomic) id<HTSKVStore> configStore;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) NSMutableDictionary *feedTabModels;
@property (readonly, nonatomic) TabItem *liveFeedConfig;
@property (readonly, nonatomic) TabResponse *liveFeedTabModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLiveTabModel;
+ (id)defaultFetcher;

- (id)liveFeedTabModelForLiveEntrance:(long long)arg0;
- (id)liveFeedConfigForLiveEntrance:(long long)arg0;
- (void)fetchFeedTabModelForLivePosition:(long long)arg0 tintTags:(id)arg1 completion:(id /* block */)arg2;
- (id)feedDrawerTabModel;
- (id)feedDrawerTabConfig;
- (id)liveFeedConfig;
- (id)liveFeedTabModel;
- (id)feedTabModels;
- (id)getLocalTabModelForEntrance:(long long)arg0;
- (void)fetchRequiredTabModel:(id)arg0;
- (void)saveLocalTabModel:(id)arg0 forEntrance:(long long)arg1;
- (void)updateTabModel:(id)arg0 forEntrance:(long long)arg1;
- (void)setConfigStore:(id)arg0;
- (void)setFeedTabModels:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)configStore;
- (id)api;
- (void)setApi:(id)arg0;

@end
