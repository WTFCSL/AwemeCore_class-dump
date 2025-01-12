//
//     Generated by private class-dump
//

@protocol AWECommonFeedConfigProtocol;

@interface AWECommonFeedContainerViewModel : AWEBaseListViewModel {
    id<AWECommonFeedConfigProtocol> _configManager;
}

@property (weak, nonatomic) id<AWECommonFeedConfigProtocol> configManager;

- (void)updateConfigManager:(id)arg0;
- (id)generateSectionViewModelsByFeedCardModels:(id)arg0;
- (id)findSectionViewModelsByFeedCardModels:(id)arg0;
- (id)generateSectionViewModelByFeedCardModel:(id)arg0;
- (id)findSectionViewModelByFeedCardModel:(id)arg0;
- (void).cxx_destruct;
- (id)configManager;
- (void)setConfigManager:(id)arg0;

@end
