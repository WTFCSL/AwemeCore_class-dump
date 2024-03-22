//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableSet, NSHashTable;

@interface HGPrivacyAccessManager : NSObject {
    NSMutableSet *_privacyIDsInUsed;
    NSDictionary *_privacyAccessInfoDict;
    NSHashTable *_delegates;
}

@property (retain, nonatomic) NSHashTable *delegates;

+ (id)sharedManager;

- (id)privatyAccessInfoWithID:(long long)arg0;
- (void)registerPrivacyInfo:(id)arg0;
- (void)setPrivacy:(long long)arg0 isUsing:(BOOL)arg1;
- (id)allAccessingPrivacyIDs;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (id)init;
- (void)addDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg0;

@end
