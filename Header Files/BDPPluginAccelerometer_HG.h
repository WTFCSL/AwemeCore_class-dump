//
//     Generated by private class-dump
//

@class NSOperationQueue, CMMotionManager, NSString;

@interface BDPPluginAccelerometer_HG : BDPBridgeInstancePlugin {
    CMMotionManager *_manager;
    NSOperationQueue *_queue;
    NSString *_interval;
}

@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSString *interval;

- (void)enableAccelerometerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void).cxx_destruct;
- (id)interval;
- (void)setInterval:(id)arg0;
- (void)setManager:(id)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id)manager;

@end
