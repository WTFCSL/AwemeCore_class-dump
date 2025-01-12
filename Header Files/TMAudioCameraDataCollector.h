//
//     Generated by private class-dump
//

@class NSString;

@interface TMAudioCameraDataCollector : NSObject {
    BOOL _floatViewState;
    BOOL _isBackground;
    int _index;
    NSString *_lastPageName;
    NSString *_lastID;
    double _lastTimestamp;
    NSString *_audioGraphEventID;
    NSString *_audioUnitEventID;
    NSString *_recordEventID;
    NSString *_cameraEventID;
    id /* block */ _workItem;
    id /* block */ _delayBlock;
}

@property (copy, nonatomic) NSString *lastPageName;
@property (copy, nonatomic) NSString *lastID;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL floatViewState;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) int index;
@property (copy, nonatomic) NSString *audioGraphEventID;
@property (copy, nonatomic) NSString *audioUnitEventID;
@property (copy, nonatomic) NSString *recordEventID;
@property (copy, nonatomic) NSString *cameraEventID;
@property (copy, nonatomic) id /* block */ workItem;
@property (copy, nonatomic) id /* block */ delayBlock;

+ (id)sharedInstance;
+ (void)start;

- (id /* block */)workItem;
- (void)setWorkItem:(id /* block */)arg0;
- (BOOL)enableCollect;
- (void)topviewDidChangeWithName:(id)arg0;
- (void)report:(double)arg0 className:(id)arg1 methodName:(id)arg2;
- (id /* block */)delayBlock;
- (void)setDelayBlock:(id /* block */)arg0;
- (void)setFloatViewState:(BOOL)arg0;
- (void)setLastPageName:(id)arg0;
- (BOOL)floatViewState;
- (id)audioUnitEventID;
- (id)cameraEventID;
- (id)audioGraphEventID;
- (id)recordEventID;
- (id)lastPageName;
- (void)cancelDelayTask;
- (void)setCameraEventID:(id)arg0;
- (void)setRecordEventID:(id)arg0;
- (void)setAudioUnitEventID:(id)arg0;
- (void)setAudioGraphEventID:(id)arg0;
- (void)updateFloatViewState:(BOOL)arg0 withName:(id)arg1;
- (void)setIndex:(int)arg0;
- (id)init;
- (void)setIsBackground:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setLastID:(id)arg0;
- (void)didEnterBackground:(id)arg0;
- (void)setLastTimestamp:(double)arg0;
- (void)handleEvent:(id)arg0;
- (void)didBecomeActive:(id)arg0;
- (int)index;
- (double)lastTimestamp;
- (id)lastID;
- (BOOL)isBackground;

@end
