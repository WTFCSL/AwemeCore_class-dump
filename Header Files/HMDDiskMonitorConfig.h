//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface HMDDiskMonitorConfig : HMDMonitorConfig {
    BOOL _checkSparseFile;
    BOOL _enableCustomSearchDepth;
    unsigned long long _dumpThreshold;
    unsigned long long _dumpTopCount;
    unsigned long long _dumpIncreaseStep;
    unsigned long long _collectHourInterval;
    double _expiredDays;
    long long _abnormalFolderSize;
    long long _abnormalFolderFileNumber;
    NSArray *_ignoredRelativePaths;
    double _sparseFileLeastDifferPercentage;
    unsigned long long _sparseFileLeastDifferSize;
    NSDictionary *_diskCustomedPaths;
    long long _fileMaxRecursionDepth;
    NSDictionary *_customSearchDepth;
    unsigned long long _reportSizeThreshold;
    NSArray *_complianceRelativePaths;
    unsigned long long _freeDiskSpaceCacheTimeInterval;
}

@property (nonatomic) unsigned long long dumpThreshold;
@property (nonatomic) unsigned long long dumpTopCount;
@property (nonatomic) unsigned long long dumpIncreaseStep;
@property (nonatomic) unsigned long long collectHourInterval;
@property (nonatomic) double expiredDays;
@property (nonatomic) long long abnormalFolderSize;
@property (nonatomic) long long abnormalFolderFileNumber;
@property (copy, nonatomic) NSArray *ignoredRelativePaths;
@property (nonatomic) double sparseFileLeastDifferPercentage;
@property (nonatomic) unsigned long long sparseFileLeastDifferSize;
@property (nonatomic) BOOL checkSparseFile;
@property (copy, nonatomic) NSDictionary *diskCustomedPaths;
@property (nonatomic) BOOL enableCustomSearchDepth;
@property (nonatomic) long long fileMaxRecursionDepth;
@property (copy, nonatomic) NSDictionary *customSearchDepth;
@property (nonatomic) unsigned long long reportSizeThreshold;
@property (copy, nonatomic) NSArray *complianceRelativePaths;
@property (nonatomic) unsigned long long freeDiskSpaceCacheTimeInterval;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (id)complianceRelativePaths;
- (BOOL)checkSparseFile;
- (unsigned long long)sparseFileLeastDifferSize;
- (double)sparseFileLeastDifferPercentage;
- (long long)abnormalFolderSize;
- (long long)abnormalFolderFileNumber;
- (void)setFreeDiskSpaceCacheTimeInterval:(unsigned long long)arg0;
- (void)setAbnormalFolderSize:(long long)arg0;
- (void)setAbnormalFolderFileNumber:(long long)arg0;
- (void)setSparseFileLeastDifferPercentage:(double)arg0;
- (void)setSparseFileLeastDifferSize:(unsigned long long)arg0;
- (void)setCheckSparseFile:(BOOL)arg0;
- (unsigned long long)collectHourInterval;
- (unsigned long long)dumpThreshold;
- (void)setDumpThreshold:(unsigned long long)arg0;
- (unsigned long long)dumpTopCount;
- (void)setDumpTopCount:(unsigned long long)arg0;
- (unsigned long long)dumpIncreaseStep;
- (void)setDumpIncreaseStep:(unsigned long long)arg0;
- (void)setCollectHourInterval:(unsigned long long)arg0;
- (double)expiredDays;
- (void)setExpiredDays:(double)arg0;
- (id)ignoredRelativePaths;
- (void)setIgnoredRelativePaths:(id)arg0;
- (id)diskCustomedPaths;
- (void)setDiskCustomedPaths:(id)arg0;
- (BOOL)enableCustomSearchDepth;
- (void)setEnableCustomSearchDepth:(BOOL)arg0;
- (long long)fileMaxRecursionDepth;
- (void)setFileMaxRecursionDepth:(long long)arg0;
- (id)customSearchDepth;
- (void)setCustomSearchDepth:(id)arg0;
- (unsigned long long)reportSizeThreshold;
- (void)setReportSizeThreshold:(unsigned long long)arg0;
- (void)setComplianceRelativePaths:(id)arg0;
- (unsigned long long)freeDiskSpaceCacheTimeInterval;
- (void).cxx_destruct;

@end
