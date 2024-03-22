//
//     Generated by private class-dump
//

@class NSDate, NSMutableArray, NSMutableDictionary;

@interface IESGurdMultiAccessKeysRequest : NSObject {
    BOOL _retryDownload;
    int _syncTaskId;
    NSDate *_createTime;
    long long _downloadPriority;
    long long _modelActivePolicy;
    long long _requestType;
    long long _lazyDownloadPriority;
    id /* block */ _completion;
    NSMutableArray *_accessKeysArray;
    NSMutableDictionary *_targetChannelsDictionary;
    NSMutableDictionary *_groupNamesDictionary;
    NSMutableDictionary *_customParamsDictionary;
    NSMutableDictionary *_targetVersionsDictionary;
}

@property (retain, nonatomic) NSMutableArray *accessKeysArray;
@property (retain, nonatomic) NSMutableDictionary *targetChannelsDictionary;
@property (retain, nonatomic) NSMutableDictionary *groupNamesDictionary;
@property (retain, nonatomic) NSMutableDictionary *customParamsDictionary;
@property (retain, nonatomic) NSMutableDictionary *targetVersionsDictionary;
@property (retain, nonatomic) NSDate *createTime;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long modelActivePolicy;
@property (nonatomic) BOOL retryDownload;
@property (nonatomic) long long requestType;
@property (nonatomic) int syncTaskId;
@property (nonatomic) long long lazyDownloadPriority;
@property (copy, nonatomic) id /* block */ completion;

- (void)setModelActivePolicy:(long long)arg0;
- (void)setRetryDownload:(BOOL)arg0;
- (long long)modelActivePolicy;
- (void)setTargetVersionsDictionary:(id)arg0;
- (void)updateConfigWithParams:(id)arg0;
- (id)accessKeysArray;
- (void)setSyncTaskId:(int)arg0;
- (id)targetVersionsDictionary;
- (void)setAccessKeysArray:(id)arg0;
- (void)addAccessKey:(id)arg0 channels:(id)arg1;
- (void)addAccessKey:(id)arg0 groupName:(id)arg1;
- (void)addAccessKey:(id)arg0 targetVersions:(id)arg1;
- (void)addAccessKey:(id)arg0 customParams:(id)arg1;
- (id)targetChannelInfosArrayWithAccessKey:(id)arg0;
- (id)groupNameInfosArrayWithAccessKey:(id)arg0;
- (id)customParamsDictionary;
- (id)targetChannelsDictionary;
- (id)groupNamesDictionary;
- (void)setTargetChannelsDictionary:(id)arg0;
- (void)setGroupNamesDictionary:(id)arg0;
- (void)setCustomParamsDictionary:(id)arg0;
- (id)paramsForRequest;
- (id)targetChannelsMap;
- (id)targetGroupsMap;
- (BOOL)isParamsValid;
- (int)syncTaskId;
- (long long)lazyDownloadPriority;
- (void)setLazyDownloadPriority:(long long)arg0;
- (id)init;
- (void)setRequestType:(long long)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (long long)requestType;
- (void)setCompletion:(id /* block */)arg0;
- (long long)downloadPriority;
- (void)setCreateTime:(id)arg0;
- (void)setDownloadPriority:(long long)arg0;
- (id)createTime;
- (id)description;
- (BOOL)retryDownload;

@end