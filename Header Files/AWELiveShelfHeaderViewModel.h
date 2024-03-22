//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWELiveShelfHeaderViewModel : NSObject {
    BOOL _showOrderBtn;
    BOOL _showConsultBtn;
    BOOL _showMemberBtn;
    BOOL _isShowPoiRankTag;
    BOOL _isSupportJumpPoiDetail;
    unsigned long long _headerType;
    NSString *_memberSchemaUrl;
    NSString *_aggCardId;
    NSString *_poiTitle;
    NSString *_poiDistance;
    NSString *_poiAddress;
    NSString *_poiRankName;
    NSString *_mainTabStr;
    NSString *_customTabStr;
    NSString *_customTipStr;
    NSString *_headerTitle;
    unsigned long long _singleStoreTopbarVersion;
    NSString *_poiRankTag;
    unsigned long long _positionShowInfoType;
    NSDictionary *_lynxTopBarNativeData;
    NSDictionary *_lynxTopBarServerData;
    NSDictionary *_lynxCommonData;
    NSDictionary *_lynxTrackInfo;
    NSDictionary *_poiSessionData;
    NSDictionary *_roomData4Lynx;
}

@property (nonatomic) unsigned long long headerType;
@property (nonatomic) BOOL showOrderBtn;
@property (nonatomic) BOOL showConsultBtn;
@property (nonatomic) BOOL showMemberBtn;
@property (copy, nonatomic) NSString *memberSchemaUrl;
@property (copy, nonatomic) NSString *aggCardId;
@property (nonatomic) BOOL isShowPoiRankTag;
@property (nonatomic) BOOL isSupportJumpPoiDetail;
@property (copy, nonatomic) NSString *poiTitle;
@property (copy, nonatomic) NSString *poiDistance;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *poiRankName;
@property (copy, nonatomic) NSString *mainTabStr;
@property (copy, nonatomic) NSString *customTabStr;
@property (copy, nonatomic) NSString *customTipStr;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSDictionary *lynxTopBarNativeData;
@property (copy, nonatomic) NSDictionary *lynxTopBarServerData;
@property (copy, nonatomic) NSDictionary *lynxCommonData;
@property (copy, nonatomic) NSDictionary *lynxTrackInfo;
@property (copy, nonatomic) NSDictionary *poiSessionData;
@property (copy, nonatomic) NSDictionary *roomData4Lynx;
@property (nonatomic) unsigned long long singleStoreTopbarVersion;
@property (copy, nonatomic) NSString *poiRankTag;
@property (nonatomic) unsigned long long positionShowInfoType;

- (id)poiAddress;
- (void)setPoiAddress:(id)arg0;
- (id)aggCardId;
- (void)setAggCardId:(id)arg0;
- (id)poiDistance;
- (void)setPoiDistance:(id)arg0;
- (id)lynxCommonData;
- (void)setLynxCommonData:(id)arg0;
- (id)roomData4Lynx;
- (id)lynxTrackInfo;
- (void)setLynxTrackInfo:(id)arg0;
- (void)setRoomData4Lynx:(id)arg0;
- (void)setIsSupportJumpPoiDetail:(BOOL)arg0;
- (id)poiTitle;
- (void)setPoiTitle:(id)arg0;
- (BOOL)isSupportJumpPoiDetail;
- (id)generateLynxTopBarData;
- (id)poiRankName;
- (id)poiRankTag;
- (BOOL)isShowPoiRankTag;
- (BOOL)showConsultBtn;
- (BOOL)showOrderBtn;
- (BOOL)showMemberBtn;
- (id)memberSchemaUrl;
- (void)setShowOrderBtn:(BOOL)arg0;
- (void)setShowConsultBtn:(BOOL)arg0;
- (void)setIsShowPoiRankTag:(BOOL)arg0;
- (id)lynxTopBarNativeDataWithShelfModel:(id)arg0 pageType:(long long)arg1 actionType:(unsigned long long)arg2;
- (void)setLynxTopBarNativeData:(id)arg0;
- (void)setLynxTopBarServerData:(id)arg0;
- (id)poiSessionData;
- (void)setPoiSessionData:(id)arg0;
- (void)setShowMemberBtn:(BOOL)arg0;
- (void)setMemberSchemaUrl:(id)arg0;
- (void)setSingleStoreTopbarVersion:(unsigned long long)arg0;
- (void)setPoiRankTag:(id)arg0;
- (void)setPositionShowInfoType:(unsigned long long)arg0;
- (void)setPoiRankName:(id)arg0;
- (id)lynxTopBarNativeData;
- (id)mainTabStr;
- (id)customTabStr;
- (id)customTipStr;
- (id)lynxTopBarServerData;
- (void)configWithShelfModel:(id)arg0 pageType:(long long)arg1 actionType:(unsigned long long)arg2;
- (void)setMainTabStr:(id)arg0;
- (void)setCustomTabStr:(id)arg0;
- (void)setCustomTipStr:(id)arg0;
- (unsigned long long)singleStoreTopbarVersion;
- (unsigned long long)positionShowInfoType;
- (id)init;
- (void)setHeaderType:(unsigned long long)arg0;
- (void)setHeaderTitle:(id)arg0;
- (id)headerTitle;
- (void).cxx_destruct;
- (unsigned long long)headerType;

@end