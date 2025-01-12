//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEExtensionSecUIDStorage : AWEExtensionStorage {
    NSArray *_trackedEvents;
}

@property (readonly, nonatomic) NSArray *trackedEvents;

+ (id)sharedSecUIDStorage;

- (BOOL)isEmptyString:(id)arg0;
- (id)trackedEvents;
- (id)secUIDStorageKey;
- (id)loginStatusStorageKey;
- (id)getSecUIDsTrackingParamsForTargetSecUID:(id)arg0 groupName:(id)arg1;
- (id)extractSecIDsWithStatus:(unsigned long long)arg0;
- (void)updateSecUID:(id)arg0 status:(unsigned long long)arg1;
- (void)updateLoginStatus:(BOOL)arg0;
- (id)getSecUIDsTrackingParamsForTargetSecUID:(id)arg0;
- (void).cxx_destruct;

@end
