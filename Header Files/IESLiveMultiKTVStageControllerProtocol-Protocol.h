//
//     Generated by private class-dump
//

@protocol IESLiveMultiKTVStageControllerProtocol <NSObject>

- (id)roomModel;
- (id)seiReceiver;
- (void)dealWithOpenCamera:(BOOL)arg0;
- (id)stageContainerView;
- (void)updateDraggedContainerHeightWithScale:(double)arg0;
- (void)updateDraggedContainerInteractionEnabled:(BOOL)arg0;
- (void)activatePlugins;
- (void)deactivatePlugins;
- (id)activePlugins;
- (void)draggedMidiContainerShouldShow:(BOOL)arg0;
- (id)allPlugins;
- (void)loadPlugins;
- (void)unloadPlugins;

@end
