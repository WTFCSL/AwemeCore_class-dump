//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWEContentPreferenceFCManager : NSObject <AWEUserMessage, AWEContentPreferenceFCProtocol> {
    BOOL _forceShowTag;
    NSMutableSet *_labelShownSet;
    NSMutableSet *_labelHiddenSet;
    NSMutableDictionary *_recordMap;
}

@property (retain, nonatomic) NSMutableSet *labelShownSet;
@property (retain, nonatomic) NSMutableSet *labelHiddenSet;
@property (retain, nonatomic) NSMutableDictionary *recordMap;
@property (nonatomic) BOOL forceShowTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)currentRecord;
- (id)storageKeyWithCurrentUid;
- (void)setupWithCurrentUser;
- (void)loadRecordMap;
- (void)cleanDataBefore14Days;
- (BOOL)checkWithModel:(id)arg0 validGroup:(long long)arg1;
- (id)labelShownSet;
- (id)labelHiddenSet;
- (void)storeRecordMap;
- (BOOL)forceShowTag;
- (id)videoFromPreferenceTagDict;
- (id)videoFromPreferenceOptions;
- (id)dateStringWithDate:(id)arg0;
- (void)setLabelShownSet:(id)arg0;
- (void)setLabelHiddenSet:(id)arg0;
- (id)realRecordMapKey;
- (long long)videoFromPreferenceGroup;
- (void)setForceShowTag:(BOOL)arg0;
- (BOOL)canShowLabelElement:(id)arg0;
- (void)addLabelShownCountIfNeeded:(id)arg0;
- (void)addLabelHiddenCountIfNeeded:(id)arg0;
- (void)setForceShowTag:(BOOL)arg0 callTrace:(id)arg1;
- (void)homepageHotDidRefresh;
- (id)init;
- (void).cxx_destruct;
- (id)recordMap;
- (void)resetCache;
- (void)setRecordMap:(id)arg0;
- (id)currentDateString;

@end