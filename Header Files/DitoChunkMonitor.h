//
//     Generated by private class-dump
//

@class DitoMonitor;

@interface DitoChunkMonitor : NSObject {
    unsigned long long _stage;
    DitoMonitor *_monitor;
}

@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) DitoMonitor *monitor;

- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (unsigned long long)stage;
- (void)setStage:(unsigned long long)arg0;

@end
