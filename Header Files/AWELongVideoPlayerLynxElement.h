//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWELongVideoPlayerLynxElement : LynxUI <AWELongVideoPlayerViewDelegate> {
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__872;
+ (id)__lynx_prop_config__661;
+ (id)__lynx_prop_config__923;
+ (id)__lynx_prop_config__1084;
+ (id)__lynx_prop_config__1185;
+ (id)__lynx_prop_config__1276;
+ (id)__lynx_ui_method_config__1347;
+ (id)__lynx_ui_method_config__1438;
+ (id)__lynx_ui_method_config__1529;
+ (id)__lynx_ui_method_config__16110;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)play:(id)arg0 withResult:(id /* block */)arg1;
- (void)pause:(id)arg0 withResult:(id /* block */)arg1;
- (void)stop:(id)arg0 withResult:(id /* block */)arg1;
- (void)logExtra:(id)arg0 requestReset:(BOOL)arg1;
- (void)startposition:(id)arg0 requestReset:(BOOL)arg1;
- (void)playerDidPause:(id)arg0;
- (void)seek:(id)arg0 withResult:(id /* block */)arg1;
- (void)updateWithAwemeModel:(id)arg0;
- (void)repeat:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)muted:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)objectfit:(id)arg0 requestReset:(BOOL)arg1;
- (void)didReceivePaidNotification:(id)arg0;
- (void)didReceiveVolumeChangedNotification:(id)arg0;
- (id)audioVolumeChangedNotificationName;
- (void)checkAwemeModelWithParams:(id)arg0 block:(id /* block */)arg1;
- (void)sendLynxEventWithName:(id)arg0;
- (void)sendLynxEventWithName:(id)arg0 extraDetail:(id)arg1;
- (id)audioCategoryNotificationParameterKey;
- (id)audioChangedReasonNotificationParameterKey;
- (id)audioVolumeNotificationParameterKey;
- (void)playerDidStop:(id)arg0;
- (void)playerDidEnd:(id)arg0;
- (void)player:(id)arg0 didPlayError:(id)arg1;
- (void)playerDidStartStall:(id)arg0;
- (void)player:(id)arg0 playTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)awememodel:(id)arg0 requestReset:(BOOL)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)createView;
- (void)playerDidStart:(id)arg0;

@end
