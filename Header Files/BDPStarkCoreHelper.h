//
//     Generated by private class-dump
//

@class NSString, BDPStarkCoreInfo;

@interface BDPStarkCoreHelper : NSObject {
    BDPStarkCoreInfo *_scCoreInfo;
    NSString *_nativeEntry;
}

@property (retain, nonatomic) BDPStarkCoreInfo *scCoreInfo;
@property (retain, nonatomic) NSString *nativeEntry;

+ (id)shareManager;

- (id)nativeEntry;
- (id)getSCCoreInfoFromSettings:(id)arg0;
- (void)setScCoreInfo:(id)arg0;
- (void)setNativeEntry:(id)arg0;
- (BOOL)unzipSCCoreFile:(id)arg0;
- (id)scCoreInfo;
- (id)getSCCoreDir;
- (id)getSCCoreMetaPath;
- (BOOL)unzipFile:(id)arg0 targetDir:(id)arg1;
- (void)updateStarkCoreIfNeed:(id)arg0 appID:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isBrowserEnable;
- (id)getSCCoreEntryPath;
- (id)getNativeEntryPath;
- (id)getSCCoreInfoFromLocalFile:(BOOL)arg0;
- (BOOL)writeSCCoreInfoToLocalFile:(id)arg0 isV2:(BOOL)arg1;
- (BOOL)isUseTmg:(id)arg0;
- (void)updateStarkCoreV2IfNeed:(id)arg0 appID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void).cxx_destruct;
- (BOOL)isEnabled:(id)arg0;
- (void)reset;

@end
