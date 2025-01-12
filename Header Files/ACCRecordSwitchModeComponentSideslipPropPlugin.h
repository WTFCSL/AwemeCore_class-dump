//
//     Generated by private class-dump
//

@class ACCRecordSwitchModeComponent, NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, IESServiceProvider, ACCFeatureComponent, ACCRecordUIHiddenStrategyService;

@interface ACCRecordSwitchModeComponentSideslipPropPlugin : NSObject <ACCSideslipPropServiceSubscriber, ACCSideslipPropPanelServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable> {
    BOOL _shouldShowSwitchModeView;
    id<ACCFeatureComponent> _component;
    id<IESServiceProvider> _serviceProvider;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCRecordSwitchModeComponent *hostComponent;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) BOOL shouldShowSwitchModeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (id)sideslipPropPanelService;
- (void)setSideslipPropPanelService:(id)arg0;
- (void)sideslipPropPanelService:(id)arg0 willShowTrayView:(id)arg1;
- (void)sideslipPropPanelService:(id)arg0 willDismissTrayView:(id)arg1;
- (void)sideslipPropService:(id)arg0 willChangeShowState:(unsigned long long)arg1;
- (BOOL)shouldShowSwitchModeView;
- (void)setShouldShowSwitchModeView:(BOOL)arg0;
- (BOOL)p_isNewStruct;
- (void)updateSwitchModeViewVisible;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)component;
- (id)serviceProvider;
- (void)setComponent:(id)arg0;

@end
