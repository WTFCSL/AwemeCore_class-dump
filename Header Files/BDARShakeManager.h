//
//     Generated by private class-dump
//

@class CMMotionManager;
@protocol BDARShakeDelegate;

@interface BDARShakeManager : NSObject {
    BOOL _isMonitor;
    id<BDARShakeDelegate> _delegate;
    double _accelerometer;
    CMMotionManager *_manager;
}

@property (retain, nonatomic) CMMotionManager *manager;
@property (weak, nonatomic) id<BDARShakeDelegate> delegate;
@property (nonatomic) double accelerometer;
@property (nonatomic) BOOL isMonitor;

+ (id)sharedInstance;

- (void)setIsMonitor:(BOOL)arg0;
- (void)stopShakeMonitor;
- (BOOL)isMonitor;
- (void)startShakeMonitor;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setManager:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)manager;
- (double)accelerometer;
- (void)setAccelerometer:(double)arg0;

@end
