//
//     Generated by private class-dump
//

@protocol BDPIMPluginDelegate;

@interface BDPPluginIM_HG : BDPBridgeInstancePlugin {
    id<BDPIMPluginDelegate> _imPlugin;
}

@property (retain, nonatomic) id<BDPIMPluginDelegate> imPlugin;

- (id)imPlugin;
- (void)shareMessageToFriendWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setImPlugin:(id)arg0;
- (void).cxx_destruct;

@end