//
//     Generated by private class-dump
//

@class NSOperationQueue, CMMotionManager;

@interface TTAirPlayMotionManager : NSObject {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionQueue;
}

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSOperationQueue *motionQueue;

- (void)startPush;
- (void)stopPush;
- (id)init;
- (void).cxx_destruct;
- (id)motionManager;
- (void)setMotionManager:(id)arg0;
- (id)motionQueue;
- (void)setMotionQueue:(id)arg0;

@end