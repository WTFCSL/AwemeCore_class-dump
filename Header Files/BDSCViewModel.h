//
//     Generated by private class-dump
//

@class BDSCUISettingModel;

@interface BDSCViewModel : NSObject {
    BOOL _supportSeries;
    BOOL _supportCharity;
    BOOL _supportDanmaku;
    BOOL _supportClarityLimit;
    unsigned long long _searchViewType;
    unsigned long long _controlViewType;
    unsigned long long _clarityViewType;
    unsigned long long _floatBallType;
    BDSCUISettingModel *_uiSettingsModel;
}

@property (nonatomic) unsigned long long searchViewType;
@property (nonatomic) unsigned long long controlViewType;
@property (nonatomic) unsigned long long clarityViewType;
@property (nonatomic) unsigned long long floatBallType;
@property (nonatomic) BOOL supportSeries;
@property (nonatomic) BOOL supportCharity;
@property (nonatomic) BOOL supportDanmaku;
@property (nonatomic) BOOL supportClarityLimit;
@property (retain, nonatomic) BDSCUISettingModel *uiSettingsModel;

- (void)setSearchViewType:(unsigned long long)arg0;
- (void)setControlViewType:(unsigned long long)arg0;
- (void)setSupportClarityLimit:(BOOL)arg0;
- (void)setClarityViewType:(unsigned long long)arg0;
- (void)setUiSettingsModel:(id)arg0;
- (id)uiSettingsModel;
- (BOOL)supportDanmaku;
- (void)setSupportDanmaku:(BOOL)arg0;
- (BOOL)supportClarityLimit;
- (unsigned long long)controlViewType;
- (unsigned long long)searchViewType;
- (unsigned long long)clarityViewType;
- (unsigned long long)floatBallType;
- (BOOL)supportSeries;
- (void)setSupportSeries:(BOOL)arg0;
- (BOOL)supportCharity;
- (void)setSupportCharity:(BOOL)arg0;
- (void)setFloatBallType:(unsigned long long)arg0;
- (void).cxx_destruct;

@end
