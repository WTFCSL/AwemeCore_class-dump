//
//     Generated by private class-dump
//

@class NSString, GPBInt32ObjectDictionary;

@interface BDUGBsyncHeader : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL hasUid;
@property (copy, nonatomic) NSString *did;
@property (nonatomic) BOOL hasDid;
@property (nonatomic) long long ts;
@property (nonatomic) BOOL hasTs;
@property (nonatomic) int ctrl;
@property (nonatomic) BOOL hasCtrl;
@property (retain, nonatomic) GPBInt32ObjectDictionary *infos;
@property (readonly, nonatomic) unsigned long long infos_Count;

+ (id)descriptor;

- (id)did;
- (id)uid;
- (int)ctrl;
- (void)setInfos:(id)arg0;
- (void)setTs:(long long)arg0;
- (void)setUid:(id)arg0;
- (void)setDid:(id)arg0;
- (void)setVersion:(int)arg0;

@end