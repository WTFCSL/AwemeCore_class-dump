//
//     Generated by private class-dump
//

@class IESLiveMultiKTVStore, IESLiveMultiAudioKTVContainerView;
@protocol IESLiveMultiKTVStagePluginProtocol;

@interface IESLiveKTVPreStreamContext : NSObject {
    IESLiveMultiKTVStore *_store;
    id<IESLiveMultiKTVStagePluginProtocol> _reusedDynamicPlugin;
    IESLiveMultiAudioKTVContainerView *_previewContainer;
}

@property (retain, nonatomic) IESLiveMultiKTVStore *store;
@property (retain, nonatomic) id<IESLiveMultiKTVStagePluginProtocol> reusedDynamicPlugin;
@property (weak, nonatomic) IESLiveMultiAudioKTVContainerView *previewContainer;

- (void)setPreviewContainer:(id)arg0;
- (id)reusedDynamicPlugin;
- (void)setReusedDynamicPlugin:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)previewContainer;

@end