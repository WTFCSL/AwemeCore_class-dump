//
//     Generated by private class-dump
//

@class IESFollowFeatureInfo, NSString, IESFollowLaunchFeatureInfo, IESFeatureKeyHistoryRecorder, IESFeatureInfoRecorder, NSLock, NSMutableSet;

@interface IESFollowFeatures : NSObject {
    BOOL _enabled;
    IESFeatureKeyHistoryRecorder *_keyRecorder;
    IESFeatureInfoRecorder *_infoRecorder;
    long long _maxHistoryCount;
    NSLock *_lock;
    NSMutableSet *_subtypes;
    NSString *_noticeType;
    long long _noticeCount;
    long long _countEnterFollow;
    unsigned long long _lastRunTimems;
    IESFollowFeatureInfo *_currentInfo;
    IESFollowLaunchFeatureInfo *_launchInfo;
    IESFeatureKeyHistoryRecorder *_launchKeyRecorder;
    IESFeatureInfoRecorder *_launchInfoRecorder;
}

@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *keyRecorder;
@property (retain, nonatomic) IESFeatureInfoRecorder *infoRecorder;
@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableSet *subtypes;
@property (retain, nonatomic) NSString *noticeType;
@property (nonatomic) long long noticeCount;
@property (nonatomic) long long countEnterFollow;
@property (nonatomic) unsigned long long lastRunTimems;
@property (retain, nonatomic) IESFollowFeatureInfo *currentInfo;
@property (retain, nonatomic) IESFollowLaunchFeatureInfo *launchInfo;
@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *launchKeyRecorder;
@property (retain, nonatomic) IESFeatureInfoRecorder *launchInfoRecorder;
@property (nonatomic) BOOL enabled;

- (void)trackEvent:(unsigned long long)arg0 withParams:(id)arg1;
- (void)setNoticeType:(id)arg0;
- (long long)noticeCount;
- (void)setNoticeCount:(long long)arg0;
- (BOOL)fillFeatures:(id)arg0 withConfig:(id)arg1 inputData:(id)arg2;
- (void)setCurrentInfo:(id)arg0;
- (void)appWillTerminateNotification:(id)arg0;
- (long long)maxHistoryCount;
- (void)setMaxHistoryCount:(long long)arg0;
- (BOOL)config:(id)arg0 containSubType:(id)arg1;
- (void)setKeyRecorder:(id)arg0;
- (void)setInfoRecorder:(id)arg0;
- (id)keyRecorder;
- (id)infoRecorder;
- (long long)getEnterFollowTabCount;
- (void)setLaunchKeyRecorder:(id)arg0;
- (void)setLaunchInfoRecorder:(id)arg0;
- (id)getOrCreateLaunchHistoryWithTimeKey:(id)arg0;
- (id)launchKeyRecorder;
- (id)launchInfoRecorder;
- (void)saveLaunchRecords;
- (id)getOrCreateHistoryWithTimeKey:(id)arg0;
- (long long)countEnterFollow;
- (void)setCountEnterFollow:(long long)arg0;
- (unsigned long long)lastRunTimems;
- (void)setLastRunTimems:(unsigned long long)arg0;
- (id)init;
- (BOOL)enabled;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (id)lock;
- (void)setEnabled:(BOOL)arg0;
- (void)setLock:(id)arg0;
- (id)noticeType;
- (id)subtypes;
- (void)setSubtypes:(id)arg0;
- (id)currentInfo;
- (void)saveRecords;
- (id)launchInfo;
- (void)setLaunchInfo:(id)arg0;

@end
