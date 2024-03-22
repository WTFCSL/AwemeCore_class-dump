//
//     Generated by private class-dump
//

@class IESLiveSelfDisciplineStore, IESLiveSelfDisciplineOpenPanelViewModel, NSString;
@protocol IESLiveSelfDisciplineEventTracker;

@interface IESLiveSelfDisciplineFragment : IESLiveRoomComponent <IESLiveSelfDisciplineRouter, IESLiveSelfDisciplineLifeCycle> {
    IESLiveSelfDisciplineStore *_store;
    IESLiveSelfDisciplineOpenPanelViewModel *_openPanelviewModel;
    id<IESLiveSelfDisciplineEventTracker> _tracker;
}

@property (retain, nonatomic) IESLiveSelfDisciplineStore *store;
@property (retain, nonatomic) IESLiveSelfDisciplineOpenPanelViewModel *openPanelviewModel;
@property (retain, nonatomic) id<IESLiveSelfDisciplineEventTracker> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isSelfDsiciplineEnable;
+ (BOOL)isAudienceEnable;
+ (BOOL)isAnchorEnableFromRoom:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (BOOL)isInSelfDiscipline;
- (void)showSelfDisciplineOpenPanel:(id)arg0;
- (void)startSelfDiscipline:(id)arg0 extra:(id)arg1;
- (void)startSelfDisciplineWithConfig:(id)arg0;
- (void)changeSelfDisciplineConfig:(id)arg0;
- (void)stopSelfDiscipline;
- (void)selfDisciplineDidFinish;
- (BOOL)p_checkoutIsInOtherPlayMode;
- (id)openPanelviewModel;
- (void)setOpenPanelviewModel:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
