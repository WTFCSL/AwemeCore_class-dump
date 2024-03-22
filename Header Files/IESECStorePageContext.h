//
//     Generated by private class-dump
//

@class IESECShopEventRecorder;

@interface IESECStorePageContext : IESECRelationPageContext {
    BOOL _liveFusionNotEnterShop;
    unsigned long long _headerType;
    unsigned long long _themeType;
    unsigned long long _selectedTabType;
    unsigned long long _liveFusionState;
    unsigned long long _apiStatus;
    IESECShopEventRecorder *_eventRecorder;
}

@property (retain, nonatomic) IESECShopEventRecorder *eventRecorder;
@property (nonatomic) unsigned long long headerType;
@property (nonatomic) unsigned long long themeType;
@property (nonatomic) unsigned long long selectedTabType;
@property (nonatomic) BOOL liveFusionNotEnterShop;
@property (nonatomic) unsigned long long liveFusionState;
@property (readonly, nonatomic) BOOL isLiveFusionSplitState;
@property (nonatomic) unsigned long long apiStatus;

- (void)setSelectedTabType:(unsigned long long)arg0;
- (unsigned long long)selectedTabType;
- (void)setupTrackerWithBusinessParams:(id)arg0;
- (unsigned long long)apiStatus;
- (void)recordScrollOffset:(double)arg0;
- (void)setApiStatus:(unsigned long long)arg0;
- (void)recordEvent:(id)arg0 params:(id)arg1;
- (id)userBehaviorReportParams;
- (BOOL)isLiveFusionSplitState;
- (void)setLiveFusionNotEnterShop:(BOOL)arg0;
- (unsigned long long)liveFusionState;
- (BOOL)liveFusionNotEnterShop;
- (void)setLiveFusionState:(unsigned long long)arg0;
- (id)init;
- (void)setHeaderType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)eventRecorder;
- (unsigned long long)headerType;
- (unsigned long long)themeType;
- (void)setThemeType:(unsigned long long)arg0;
- (void)setEventRecorder:(id)arg0;

@end