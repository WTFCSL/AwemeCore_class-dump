//
//     Generated by private class-dump
//

@class RACSignal, AWEStickerPickerControllerPluginStore;
@protocol ACCStickerPickerService;

@protocol ACCPropPickerService <NSObject>

@property (readonly, nonatomic) RACSignal *didFinishLoadEffectListSignal;
@property (readonly, nonatomic) RACSignal *showPanelSignal;
@property (readonly, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (readonly, nonatomic) AWEStickerPickerControllerPluginStore *pluginStore;
@property (nonatomic) BOOL isLastEffectCancelByExitSlidPanel;

- (void)showPanelFromTab:(id)arg0 enterMethod:(id)arg1;
- (BOOL)shouldAutoShowPanelWithApplyProp:(id)arg0;
- (id)trackingInfoDictionary;
- (id)commonTrackParamsForDIYProp:(id)arg0;
- (id)didFinishLoadEffectListSignal;
- (id)showPanelSignal;
- (id)stickerPickerService;
- (id)pluginStore;
- (BOOL)isLastEffectCancelByExitSlidPanel;
- (void)setIsLastEffectCancelByExitSlidPanel:(BOOL)arg0;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end
