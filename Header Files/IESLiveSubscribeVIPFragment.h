//
//     Generated by private class-dump
//

@class IESLiveSubscribeVIPStore;

@interface IESLiveSubscribeVIPFragment : IESLiveRoomComponent {
    IESLiveSubscribeVIPStore *_store;
}

@property (retain, nonatomic) IESLiveSubscribeVIPStore *store;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)openMediaContainerSecureContent:(BOOL)arg0;
- (BOOL)shouldOpenMediaContainerSecureContent;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end