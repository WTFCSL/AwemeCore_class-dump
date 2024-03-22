//
//     Generated by private class-dump
//

@interface HMDCDConfig : HMDModuleConfig {
    BOOL _dumpNSException;
    BOOL _dumpCPPException;
    unsigned long long _minFreeDiskUsageMB;
    unsigned long long _maxCDFileSizeMB;
    unsigned long long _maxCDZipFileSizeMB;
}

@property (nonatomic) unsigned long long minFreeDiskUsageMB;
@property (nonatomic) unsigned long long maxCDFileSizeMB;
@property (nonatomic) unsigned long long maxCDZipFileSizeMB;
@property (nonatomic) BOOL dumpNSException;
@property (nonatomic) BOOL dumpCPPException;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (unsigned long long)minFreeDiskUsageMB;
- (void)setMinFreeDiskUsageMB:(unsigned long long)arg0;
- (unsigned long long)maxCDFileSizeMB;
- (void)setMaxCDFileSizeMB:(unsigned long long)arg0;
- (unsigned long long)maxCDZipFileSizeMB;
- (void)setMaxCDZipFileSizeMB:(unsigned long long)arg0;
- (BOOL)dumpNSException;
- (void)setDumpNSException:(BOOL)arg0;
- (BOOL)dumpCPPException;
- (void)setDumpCPPException:(BOOL)arg0;

@end
