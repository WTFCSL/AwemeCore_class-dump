//
//     Generated by private class-dump
//

@class NSHashTable;

@interface IESEffectDownloadFlowConflictMonitor : NSObject {
    NSHashTable *_monitorTable;
}

@property (retain, nonatomic) NSHashTable *monitorTable;

- (id)monitorTable;
- (void)setMonitorTable:(id)arg0;
- (void)notifyDownloadFlowTrackWithTask:(id)arg0;
- (void)trackCurrentDownloadingFlowWithBusinessParameters:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
