//
//     Generated by private class-dump
//

@class HMDFolderInfo, HMDDiskMonitorConfig, NSHashTable;

@interface HMDDiskMonitor : HMDMonitor {
    NSHashTable *_visitors;
    HMDFolderInfo *_folderVisitor;
    HMDDiskMonitorConfig *_diskConfig;
    double _nextAvailableTimeInterval;
}

@property (retain, nonatomic) NSHashTable *visitors;
@property (retain, nonatomic) HMDFolderInfo *folderVisitor;
@property (retain, nonatomic) HMDDiskMonitorConfig *diskConfig;
@property double nextAvailableTimeInterval;

+ (id)sharedMonitor;

- (void)updateConfig:(id)arg0;
- (id)visitors;
- (void)setVisitors:(id)arg0;
- (unsigned long long)reporterPriority;
- (void)addFolderInfoVisitor;
- (void)removeFolderInfoVisitor;
- (id)folderVisitor;
- (void)setFolderVisitor:(id)arg0;
- (id)diskConfig;
- (void)addFileVisitor:(id)arg0;
- (void)removeFileVisitor:(id)arg0;
- (id)complianceConvert:(id)arg0;
- (double)nextAvailableTimeInterval;
- (void)recordForSpecificScene:(id)arg0;
- (void)setNextAvailableTimeInterval:(double)arg0;
- (void)setDiskConfig:(id)arg0;
- (void)didEnterScene:(id)arg0;
- (void)willLeaveScene:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg0;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
