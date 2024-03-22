//
//     Generated by private class-dump
//

@class BDXBridgeEventCenter, CMMotionManager, NSHashTable;

@interface BDXBridgeMotionManager : NSObject {
    CMMotionManager *_motionManager;
    BDXBridgeEventCenter *_eventCenter;
    NSHashTable *_refUsage;
}

@property (class, readonly, nonatomic) BDXBridgeMotionManager *sharedMotionManager;

@property (readonly, nonatomic) CMMotionManager *motionManager;
@property (readonly, nonatomic) BDXBridgeEventCenter *eventCenter;
@property (retain, nonatomic) NSHashTable *refUsage;

+ (id)sharedMotionManager;

- (id)eventCenter;
- (id)refUsage;
- (void)startGyroUpdates:(id)arg0 forTarget:(id)arg1;
- (void)stopGyroUpdatesForTarget:(id)arg0;
- (void)setRefUsage:(id)arg0;
- (id)init;
- (void)stopGyroUpdates;
- (void).cxx_destruct;
- (id)motionManager;

@end
