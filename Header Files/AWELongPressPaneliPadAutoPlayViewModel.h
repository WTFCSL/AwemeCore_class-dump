//
//     Generated by private class-dump
//

@protocol AWEFeedAutoPlayManagerProtocol;

@interface AWELongPressPaneliPadAutoPlayViewModel : AWELongPressPanelBaseViewModel {
    id<AWEFeedAutoPlayManagerProtocol> _autoPlayManager;
}

@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)longPressPanelViewModel;

- (id)aAWEPadModuleAdapter;
- (BOOL)needShow;
- (void)switchDidChange:(id)arg0;
- (id)autoPlayManager;
- (void)setAutoPlayManager:(id)arg0;
- (void)configVM;
- (void).cxx_destruct;

@end
