//
//     Generated by private class-dump
//

@class NSString, IESGurdUpdateStatisticModel, NSDictionary, IESGurdResourceURLInfo, NSArray, IESGurdResourceStrategies;

@interface IESGurdResourceModel : NSObject {
    BOOL _fromPatch;
    BOOL _isZstd;
    BOOL _onDemand;
    BOOL _alwaysOnDemand;
    BOOL _useOdr;
    BOOL _retryDownload;
    BOOL _ignoreStorage;
    BOOL _ignoreBlockList;
    unsigned long long _version;
    unsigned long long _localVersion;
    NSString *_accessKey;
    NSString *_channel;
    long long _packageType;
    IESGurdResourceURLInfo *_package;
    IESGurdResourceURLInfo *_patch;
    IESGurdResourceStrategies *_strategies;
    IESGurdUpdateStatisticModel *_updateStatisticModel;
    NSDictionary *_logInfo;
    NSArray *_groups;
    NSString *_groupName;
    long long _downloadPriority;
    NSString *_logId;
    NSArray *_offlinePrefixURLsArray;
    long long _blockUpdateType;
}

@property (copy, nonatomic) NSString *logId;
@property (nonatomic) BOOL fromPatch;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long localVersion;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) long long packageType;
@property (retain, nonatomic) IESGurdResourceURLInfo *package;
@property (retain, nonatomic) IESGurdResourceURLInfo *patch;
@property (retain, nonatomic) IESGurdResourceStrategies *strategies;
@property (retain, nonatomic) IESGurdUpdateStatisticModel *updateStatisticModel;
@property (retain, nonatomic) NSDictionary *logInfo;
@property (nonatomic) BOOL isZstd;
@property (nonatomic) BOOL onDemand;
@property (nonatomic) BOOL alwaysOnDemand;
@property (nonatomic) BOOL useOdr;
@property (nonatomic) BOOL retryDownload;
@property (copy, nonatomic) NSArray *groups;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) long long downloadPriority;
@property (copy, nonatomic) NSArray *offlinePrefixURLsArray;
@property (nonatomic) BOOL ignoreStorage;
@property (nonatomic) BOOL ignoreBlockList;
@property (nonatomic) long long blockUpdateType;

+ (id)instanceWithDict:(id)arg0 local:(id)arg1 logId:(id)arg2;

- (id)logInfo;
- (id)logId;
- (void)setLogId:(id)arg0;
- (void)setLogInfo:(id)arg0;
- (void)setRetryDownload:(BOOL)arg0;
- (void)setPackageType:(long long)arg0;
- (void)setStrategies:(id)arg0;
- (BOOL)isZstd;
- (BOOL)fromPatch;
- (id)updateStatisticModel;
- (void)putDataToDict:(id)arg0;
- (void)setFromPatch:(BOOL)arg0;
- (BOOL)ignoreBlockList;
- (void)setBlockUpdateType:(long long)arg0;
- (BOOL)ignoreStorage;
- (BOOL)useOdr;
- (void)setIgnoreStorage:(BOOL)arg0;
- (void)setIgnoreBlockList:(BOOL)arg0;
- (void)setUpdateStatisticModel:(id)arg0;
- (void)setIsZstd:(BOOL)arg0;
- (void)setOnDemand:(BOOL)arg0;
- (void)setAlwaysOnDemand:(BOOL)arg0;
- (void)setUseOdr:(BOOL)arg0;
- (long long)blockUpdateType;
- (BOOL)canDownloadPatchPackage;
- (BOOL)onDemand;
- (BOOL)alwaysOnDemand;
- (id)offlinePrefixURLsArray;
- (void)setOfflinePrefixURLsArray:(id)arg0;
- (id)groups;
- (id)channel;
- (void)setVersion:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setLocalVersion:(unsigned long long)arg0;
- (void)setChannel:(id)arg0;
- (long long)downloadPriority;
- (void)setGroups:(id)arg0;
- (void)setDownloadPriority:(long long)arg0;
- (id)package;
- (unsigned long long)version;
- (id)groupName;
- (id)description;
- (void)setGroupName:(id)arg0;
- (void)setPackage:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)strategies;
- (void)setPatch:(id)arg0;
- (id)patch;
- (BOOL)retryDownload;
- (unsigned long long)localVersion;
- (long long)packageType;

@end