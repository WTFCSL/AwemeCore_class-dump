//
//     Generated by private class-dump
//

@interface BDPPluginInteractGame : BDPBridgeInstancePlugin {
    BOOL _isPaying;
}

@property (nonatomic) BOOL isPaying;

- (BOOL)isPaying;
- (void)setIsPaying:(BOOL)arg0;
- (void)trackWithEventName:(id)arg0 uniqueID:(id)arg1 params:(id)arg2;
- (void)payGameDiamondsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;

@end
