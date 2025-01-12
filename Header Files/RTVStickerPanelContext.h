//
//     Generated by private class-dump
//

@class UIColor, NSString, NSDictionary, RTVVoipSession, NSObject;
@protocol RxInjector, RTVStickerPanelPluginInterface;

@interface RTVStickerPanelContext : NSObject {
    NSDictionary *_trackInfo;
    NSString *_trackKeyPrefix;
    RTVVoipSession *_voipSession;
    UIColor *_selectedBorderColor;
    NSObject<RTVStickerPanelPluginInterface> *_plugin;
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *trackKeyPrefix;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (readonly, nonatomic) NSObject<RTVStickerPanelPluginInterface> *plugin;

- (id)selectedBorderColor;
- (id)voipSession;
- (id)trackKeyPrefix;
- (void)setSelectedBorderColor:(id)arg0;
- (void)setTrackKeyPrefix:(id)arg0;
- (void)setVoipSession:(id)arg0;
- (id)initWithPlugin:(id)arg0 injector:(id)arg1;
- (void).cxx_destruct;
- (id)injector;
- (id)plugin;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
