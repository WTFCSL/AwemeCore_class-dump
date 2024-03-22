//
//     Generated by private class-dump
//

@class TMContentDetectionSubscriber;

@interface TMContentDetectionModule : TMModule {
    TMContentDetectionSubscriber *_detectionSubscriber;
}

@property (retain, nonatomic) TMContentDetectionSubscriber *detectionSubscriber;

- (void)startDetect;
- (id)detectionSubscriber;
- (void)startHookAppLog;
- (void)startHookMonitor;
- (void)setDetectionSubscriber:(id)arg0;
- (void).cxx_destruct;
- (void)start;
- (void)startRunning;

@end
