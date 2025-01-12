//
//     Generated by private class-dump
//

@class NSString;

@interface BDPUniqueID : NSObject <NSCopying> {
    NSString *_appID;
    NSString *_fullString;
    NSString *_versionType;
}

@property (copy) NSString *appID;
@property (copy) NSString *fullString;
@property (copy) NSString *versionType;

- (id)initWithAppID:(id)arg0;
- (id)versionType;
- (id)initWithAppID:(id)arg0 versionType:(id)arg1;
- (void)setVersionType:(id)arg0;
- (void)setFullString:(id)arg0;
- (BOOL)isBackgroundAudioWorking;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)appID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)fullString;

@end
