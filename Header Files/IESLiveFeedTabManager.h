//
//     Generated by private class-dump
//

@class HTSLiveApi, NSMutableDictionary, NSString;
@protocol HTSKVStore;

@interface IESLiveFeedTabManager : NSObject <IESLiveFeedTabService> {
    BOOL _hasRequest;
    HTSLiveApi *_api;
    id<HTSKVStore> _configStore;
    NSMutableDictionary *_feedTabModels;
}

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) id<HTSKVStore> configStore;
@property (retain, nonatomic) NSMutableDictionary *feedTabModels;
@property (nonatomic) BOOL hasRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFeedTabManager;

- (void)fetchTabModelForCompletion:(id /* block */)arg0 tintTags:(id)arg1;
- (id)genarateTabModelForLiveEntrence:(id)arg0 enterSource:(id)arg1;
- (id)generateFeedURLForEnterFrom:(id)arg0 enterMethod:(id)arg1 feedURLType:(long long)arg2 tabId:(id)arg3 actionType:(id)arg4;
- (id)generateFeedURLForEnterFrom:(id)arg0 enterMethod:(id)arg1 withType:(long long)arg2 tabId:(id)arg3 actionType:(id)arg4;
- (id)generateFeedURLForSourceKey:(id)arg0 path:(id)arg1 withType:(long long)arg2 tabId:(id)arg3 actionType:(id)arg4;
- (id)feedTabModels;
- (id)getLocalTabModelForEntrance:(id)arg0;
- (id)defaultLiveTabModel;
- (void)setConfigStore:(id)arg0;
- (void)setFeedTabModels:(id)arg0;
- (BOOL)hasRequest;
- (id)init;
- (void).cxx_destruct;
- (id)configStore;
- (id)api;
- (void)setHasRequest:(BOOL)arg0;
- (void)setApi:(id)arg0;

@end
