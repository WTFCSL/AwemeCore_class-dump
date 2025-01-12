//
//     Generated by private class-dump
//

@protocol AWEAwemeBizPlayVideoProtocol;

@interface AWELynxSharedVideoView : LynxUI {
    id<AWEAwemeBizPlayVideoProtocol> _playerController;
}

@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> playerController;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__361;
+ (id)__lynx_ui_method_config__422;
+ (id)__lynx_ui_method_config__473;
+ (id)__lynx_ui_method_config__524;
+ (id)__lynx_ui_method_config__575;

- (void)play:(id)arg0 withResult:(id /* block */)arg1;
- (void)pause:(id)arg0 withResult:(id /* block */)arg1;
- (void)stop:(id)arg0 withResult:(id /* block */)arg1;
- (void)setScalingMode:(long long)arg0 requestReset:(BOOL)arg1;
- (void)seek:(id)arg0 withResult:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)playerController;
- (void)setPlayerController:(id)arg0;
- (id)createView;

@end
