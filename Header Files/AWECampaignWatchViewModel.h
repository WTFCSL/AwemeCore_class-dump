//
//     Generated by private class-dump
//

@class NSDictionary, AWECampaignTaskModel;

@interface AWECampaignWatchViewModel : NSObject {
    AWECampaignTaskModel *_taskModel;
    NSDictionary *_originalParamsDic;
}

@property (retain, nonatomic) AWECampaignTaskModel *taskModel;
@property (copy, nonatomic) NSDictionary *originalParamsDic;

+ (id)configWithDic:(id)arg0;
+ (id)taskModelManual:(id)arg0;
+ (id)configModelWithParams:(id)arg0;

- (id)taskModel;
- (void)setTaskModel:(id)arg0;
- (BOOL)isCSRWatchGame;
- (BOOL)isUGPendantWatchGame;
- (void)requestAwemeWithID:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
- (void)setOriginalParamsDic:(id)arg0;
- (id)originalParamsDic;
- (id)paramsForRequest:(id)arg0;
- (void).cxx_destruct;

@end
