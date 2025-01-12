//
//     Generated by private class-dump
//

@class NSDictionary, IESLiveRevenueInteractApi, HTSLiveInteractiveAPIV2;

@interface IESLiveRevenueInteractSettingViewModel : NSObject {
    NSDictionary *_settings;
    unsigned long long _fromType;
    unsigned long long _scene;
    unsigned long long _type;
    IESLiveRevenueInteractApi *_revenueInteractApi;
    HTSLiveInteractiveAPIV2 *_interactAPI;
}

@property (retain, nonatomic) NSDictionary *settings;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IESLiveRevenueInteractApi *revenueInteractApi;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (readonly, nonatomic) unsigned long long fromType;
@property (readonly, nonatomic) unsigned long long scene;

- (void)bindAction;
- (id)baseTrackParams;
- (id)interactAPI;
- (void)setInteractAPI:(id)arg0;
- (id)revenueInteractApi;
- (void)setRevenueInteractApi:(id)arg0;
- (id)initWithDIContext:(id)arg0 scene:(unsigned long long)arg1 fromType:(unsigned long long)arg2;
- (void)trackDefualtLargeLayoutSettingClicked:(BOOL)arg0;
- (void)trackDefualtLargeLayoutSettingShow;
- (void)addDefaultSettings;
- (void)trackInteractSettingPanelShow;
- (void)updateInteractScoreSwitchWithValue:(BOOL)arg0;
- (void)updateInteractSettingWithAction:(long long)arg0 cellType:(long long)arg1 cellItem:(id)arg2;
- (void)trackLinkerSettingClicked:(id)arg0 isToOpen:(BOOL)arg1;
- (void)trackInteractSettingPanelClicked:(id)arg0;
- (void)setInteractScoreShowStatus:(BOOL)arg0 callback:(id /* block */)arg1;
- (void)addResetScoreSettingItemIfNeeded;
- (void)clearInteractScore:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)getChannelID;
- (unsigned long long)type;
- (id)settings;
- (void)setType:(unsigned long long)arg0;
- (unsigned long long)scene;
- (unsigned long long)fromType;

@end
