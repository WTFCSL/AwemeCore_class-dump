//
//     Generated by private class-dump
//

@class ACCRecordMemoryControl, NSString, NSHashTable;

@interface ACCCameraPureModeServiceImpl : NSObject <ACCCameraPureModeService> {
    NSHashTable *_recovers;
    ACCRecordMemoryControl *_memoryControl;
}

@property (retain, nonatomic) NSHashTable *recovers;
@property (weak, nonatomic) ACCRecordMemoryControl *memoryControl;
@property (readonly, nonatomic) BOOL disable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPureModeRecover:(id)arg0;
- (void)recoverEffectWhenClosed;
- (void)bindMemoryControl:(id)arg0;
- (id)currentMemoryControl;
- (void)setMemoryControl:(id)arg0;
- (id)memoryControl;
- (void)setRecovers:(id)arg0;
- (id)recovers;
- (id)init;
- (void).cxx_destruct;
- (BOOL)disable;

@end
