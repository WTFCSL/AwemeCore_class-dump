//
//     Generated by private class-dump
//

@class IESGurdFetchResourcesParams;

@interface IESGurdPackagesNormalRequest : IESGurdMultiAccessKeysRequest {
    IESGurdFetchResourcesParams *_params;
}

@property (retain, nonatomic) IESGurdFetchResourcesParams *params;

+ (id)requestWithParams:(id)arg0 completion:(id /* block */)arg1;

- (id)logInfo;
- (id)requestMetaDictionary;
- (id)statisticData;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:(id)arg0;

@end
