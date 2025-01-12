//
//     Generated by private class-dump
//

@class NSPointerArray, NSMutableSet;

@interface AWECameraManager : NSObject {
    BOOL _shouldPreventNewRecordController;
    NSMutableSet *_taskIdSet;
    NSPointerArray *_recorderArray;
}

@property (retain, nonatomic) NSPointerArray *recorderArray;
@property (retain, nonatomic) NSMutableSet *taskIdSet;
@property (nonatomic) BOOL shouldPreventNewRecordController;

+ (id)sharedManager;

- (BOOL)shouldPreventNewRecordController;
- (id)allRecorders;
- (void)setShouldPreventNewRecordController:(BOOL)arg0;
- (void)addRecorder:(id)arg0;
- (id)recorderArray;
- (id)taskIdSet;
- (void)setTaskIdSet:(id)arg0;
- (void)setRecorderArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
