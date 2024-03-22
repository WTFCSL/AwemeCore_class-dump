//
//     Generated by private class-dump
//

@class IESLiveAnchorTaskApi, NSString;

@interface IESLiveAnchorTaskFragment : IESLiveRoomComponent <IESLiveAnchorTaskRouter> {
    IESLiveAnchorTaskApi *_taskApi;
    long long _task;
}

@property (retain, nonatomic) IESLiveAnchorTaskApi *taskApi;
@property (nonatomic) long long task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishTask:(long long)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)openPanelFromTask:(long long)arg0;
- (void)closePanelFromTask:(long long)arg0;
- (id)taskApi;
- (void)setTaskApi:(id)arg0;
- (void).cxx_destruct;
- (void)setTask:(long long)arg0;
- (long long)task;

@end