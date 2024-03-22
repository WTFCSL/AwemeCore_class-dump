//
//     Generated by private class-dump
//

@class IESLiveEnterRoomAisle, IESLiveEnterRoomActionInjection;

@interface IESLiveEnterRoomActionInjectionManager : NSObject {
    IESLiveEnterRoomAisle *_roomAisle;
    id /* block */ _cancelBlock;
    IESLiveEnterRoomActionInjection *_roomAisleInjection;
}

@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) IESLiveEnterRoomActionInjection *roomAisleInjection;

+ (void)regeisterBlock:(id /* block */)arg0 forStage:(unsigned long long)arg1;
+ (void)addEnterRoomActionToPublicSlices:(id)arg0 forStage:(unsigned long long)arg1;
+ (id)publicActionDic;
+ (void)loadRegistryActionInClass:(Class)arg0;
+ (id)sharedManager;

- (id)roomAisle;
- (void)setRoomAisle:(id)arg0;
- (void)regeisterBlock:(id /* block */)arg0 forStage:(unsigned long long)arg1;
- (void)executedSliceBlocksforEnterRoomStage:(unsigned long long)arg0;
- (void)bindRoomAisle:(id)arg0;
- (void)unbindRoomAisle:(BOOL)arg0;
- (void)loadActionRegistry;
- (void)setRoomAisleInjection:(id)arg0;
- (id)roomAisleInjection;
- (id)actionsForEnterStage:(unsigned long long)arg0;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (void)setCancelBlock:(id /* block */)arg0;

@end