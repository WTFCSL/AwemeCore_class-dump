//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface BDPClientAIDetecionConfig : NSObject {
    BOOL _phoneSecondDectionEnable;
    BOOL _businessEnable;
    BOOL _snapshotEnable;
    BOOL _calculatePageHashEnable;
    long long _cacheDuration;
    long long _pathCacheDuration;
    NSString *_businessName;
    NSString *_sceneName;
    long long _maxCount;
    long long _pathMaxCount;
    NSArray *_detectionList;
    long long _configType;
    NSString *_serverSceneName;
    NSDictionary *_extra;
}

@property (nonatomic) long long cacheDuration;
@property (nonatomic) long long pathCacheDuration;
@property (nonatomic) BOOL phoneSecondDectionEnable;
@property (copy, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSString *sceneName;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long pathMaxCount;
@property (nonatomic) BOOL businessEnable;
@property (copy, nonatomic) NSArray *detectionList;
@property (nonatomic) BOOL snapshotEnable;
@property (readonly, nonatomic) long long configType;
@property (nonatomic) BOOL calculatePageHashEnable;
@property (copy, nonatomic) NSString *serverSceneName;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)defaultConfigWithType:(long long)arg0;

- (void)setExtra:(id)arg0;
- (void)setCacheDuration:(long long)arg0;
- (long long)cacheDuration;
- (id)detectionList;
- (void)setDetectionList:(id)arg0;
- (void)updateConfigWithSettingDict:(id)arg0;
- (BOOL)businessEnable;
- (id)serverSceneName;
- (long long)pathCacheDuration;
- (BOOL)snapshotEnable;
- (BOOL)phoneSecondDectionEnable;
- (void)setPathCacheDuration:(long long)arg0;
- (void)setPhoneSecondDectionEnable:(BOOL)arg0;
- (void)setPathMaxCount:(long long)arg0;
- (void)setBusinessEnable:(BOOL)arg0;
- (void)setSnapshotEnable:(BOOL)arg0;
- (void)setServerSceneName:(id)arg0;
- (void)setCalculatePageHashEnable:(BOOL)arg0;
- (long long)pathMaxCount;
- (BOOL)calculatePageHashEnable;
- (void).cxx_destruct;
- (id)extra;
- (void)setMaxCount:(long long)arg0;
- (id)sceneName;
- (long long)maxCount;
- (id)businessName;
- (void)setBusinessName:(id)arg0;
- (void)setSceneName:(id)arg0;
- (long long)configType;

@end
