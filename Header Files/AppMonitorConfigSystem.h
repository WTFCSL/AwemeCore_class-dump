//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSLock;

@interface AppMonitorConfigSystem : NSObject {
    BOOL _useUT;
    BOOL _discardAp;
    int _cacheFlushInterval;
    int _cacheTriggeCount;
    int _uploadInterval;
    int _orangeUploadInterval;
    NSDictionary *_systemDict;
    NSDictionary *_defaultSystemDict;
    NSString *_hotpatchVersion;
    NSLock *_lock;
}

@property (retain, nonatomic) NSDictionary *systemDict;
@property (retain, nonatomic) NSDictionary *defaultSystemDict;
@property (copy, nonatomic) NSString *hotpatchVersion;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) int orangeUploadInterval;
@property (nonatomic) BOOL useUT;
@property BOOL discardAp;
@property (nonatomic) int cacheFlushInterval;
@property (nonatomic) int cacheTriggeCount;
@property (nonatomic) int uploadInterval;

+ (id)sharedInstance;

- (int)uploadInterval;
- (void)setUploadInterval:(int)arg0;
- (int)cacheFlushInterval;
- (BOOL)useUT;
- (BOOL)discardAp;
- (int)cacheTriggeCount:(id)arg0;
- (id)reflectHotpatchVersion;
- (void)tbHotpatchDownloadRunPatch:(id)arg0;
- (void)setOrangeUploadInterval:(int)arg0;
- (id)restoreHotpatchVersion;
- (void)setUseUT:(BOOL)arg0;
- (void)setDiscardAp:(BOOL)arg0;
- (void)setCacheFlushInterval:(int)arg0;
- (int)cacheTriggeCount;
- (void)setCacheTriggeCount:(int)arg0;
- (id)systemDict;
- (void)setSystemDict:(id)arg0;
- (id)defaultSystemDict;
- (void)setDefaultSystemDict:(id)arg0;
- (id)hotpatchVersion;
- (void)setHotpatchVersion:(id)arg0;
- (int)orangeUploadInterval;
- (void)setDicContent:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;

@end