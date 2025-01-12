//
//     Generated by private class-dump
//

@class IESLiveAnchorStartLiveStrategyViewModel, NSString;
@protocol IESLiveAnchorStartLiveStrategyAction;

@interface IESLiveAnchorStartLiveStrategyFragment : IESLiveRoomComponent <HTSLiveAnchorActions, IESLiveAnchorStartLiveStrategyViewModelDelegate, IESLiveAnchorRoomStatusChangeEvents> {
    IESLiveAnchorStartLiveStrategyViewModel *_viewModel;
    id<IESLiveAnchorStartLiveStrategyAction> _dispatcher;
}

@property (retain, nonatomic) IESLiveAnchorStartLiveStrategyViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveAnchorStartLiveStrategyAction> dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)startLive;
- (void)startAnchorLiveWithRoom:(id)arg0;
- (void)prepareForLive;
- (void)prepareAnchorLive;
- (void)updateFinishedMaxBitrate:(long long)arg0 minBitrate:(long long)arg1 defaultBitrate:(long long)arg2;
- (void)updateFinishedFrameRate:(long long)arg0;
- (void)updateFinishedDegradeBitrate;
- (id)dispatcher;
- (void)setDispatcher:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
