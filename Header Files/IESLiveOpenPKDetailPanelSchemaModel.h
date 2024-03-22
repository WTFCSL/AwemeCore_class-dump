//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveOpenPKDetailPanelSchemaModel : IESLiveWebcastBaseModel {
    NSString *_url;
    long long _detailBattleModType;
    long long _detailConnectType;
    long long _detailPanelHeight;
    NSString *_detailPlayType;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long detailBattleModType;
@property (nonatomic) long long detailConnectType;
@property (nonatomic) long long detailPanelHeight;
@property (copy, nonatomic) NSString *detailPlayType;

- (id)parsedKeys;
- (void)setDetailBattleModType:(long long)arg0;
- (void)setDetailConnectType:(long long)arg0;
- (void)setDetailPanelHeight:(long long)arg0;
- (void)setDetailPlayType:(id)arg0;
- (long long)detailBattleModType;
- (long long)detailConnectType;
- (long long)detailPanelHeight;
- (id)detailPlayType;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)initWithParams:(id)arg0;
- (id)url;

@end