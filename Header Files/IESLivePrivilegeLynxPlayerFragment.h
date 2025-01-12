//
//     Generated by private class-dump
//

@class NSString, IESLivePrivilegeLynxPlayerStore;

@interface IESLivePrivilegeLynxPlayerFragment : IESLiveRoomComponent <IESLivePrivilegeLynxPlayerInterface> {
    IESLivePrivilegeLynxPlayerStore *_store;
}

@property (retain, nonatomic) IESLivePrivilegeLynxPlayerStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (id)createLynxPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 inView:(id)arg1 initData:(id)arg2;
- (void)destroyLynxPlayerView;
- (void)clearCurrentContainerView;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
