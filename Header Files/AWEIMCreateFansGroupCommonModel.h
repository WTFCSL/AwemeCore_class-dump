//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEIMCreateFansGroupCommonModel : NSObject {
    BOOL _enterMessageListVC;
    BOOL _needFloatMode;
    BOOL _insertGroupGuidanceMsg;
    NSString *_groupName;
    NSString *_groupIcon;
    NSString *_groupDesc;
    long long _showAtProfile;
    long long _auditSwitch;
    long long _liveAutoSync;
    long long _itemAutoSync;
    NSDictionary *_groupEntryLimitDict;
    NSDictionary *_limitsTrackerDict;
    NSString *_createType;
    long long _sourceType;
    long long _groupNumLeft;
    NSString *_imageSource;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSDictionary *_bizExtra;
    NSDictionary *_createExtra;
    NSDictionary *_clientExtra;
}

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupDesc;
@property (nonatomic) long long showAtProfile;
@property (nonatomic) long long auditSwitch;
@property (nonatomic) long long liveAutoSync;
@property (nonatomic) long long itemAutoSync;
@property (copy, nonatomic) NSDictionary *groupEntryLimitDict;
@property (copy, nonatomic) NSDictionary *limitsTrackerDict;
@property (copy, nonatomic) NSString *createType;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL enterMessageListVC;
@property (nonatomic) BOOL needFloatMode;
@property (nonatomic) BOOL insertGroupGuidanceMsg;
@property (nonatomic) long long groupNumLeft;
@property (copy, nonatomic) NSString *imageSource;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (copy, nonatomic) NSDictionary *createExtra;
@property (copy, nonatomic) NSDictionary *clientExtra;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)clientExtra;
- (void)setClientExtra:(id)arg0;
- (id)groupIcon;
- (void)setGroupIcon:(id)arg0;
- (id)bizExtra;
- (void)setBizExtra:(id)arg0;
- (id)groupDesc;
- (void)setGroupDesc:(id)arg0;
- (BOOL)needFloatMode;
- (void)setNeedFloatMode:(BOOL)arg0;
- (void)setGroupNumLeft:(long long)arg0;
- (void)setCreateType:(id)arg0;
- (void)setEnterMessageListVC:(BOOL)arg0;
- (void)setInsertGroupGuidanceMsg:(BOOL)arg0;
- (long long)showAtProfile;
- (void)setShowAtProfile:(long long)arg0;
- (long long)auditSwitch;
- (void)setAuditSwitch:(long long)arg0;
- (long long)liveAutoSync;
- (void)setLiveAutoSync:(long long)arg0;
- (long long)itemAutoSync;
- (void)setItemAutoSync:(long long)arg0;
- (id)groupEntryLimitDict;
- (void)setGroupEntryLimitDict:(id)arg0;
- (id)limitsTrackerDict;
- (void)setLimitsTrackerDict:(id)arg0;
- (id)createType;
- (BOOL)enterMessageListVC;
- (BOOL)insertGroupGuidanceMsg;
- (long long)groupNumLeft;
- (id)createExtra;
- (void)setCreateExtra:(id)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (id)init;
- (id)imageSource;
- (void).cxx_destruct;
- (void)setImageSource:(id)arg0;
- (id)groupName;
- (void)setGroupName:(id)arg0;

@end
