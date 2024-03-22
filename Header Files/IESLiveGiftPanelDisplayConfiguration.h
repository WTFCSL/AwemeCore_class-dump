//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSNumber;

@interface IESLiveGiftPanelDisplayConfiguration : NSObject {
    BOOL _allMic;
    NSArray *_toUsers;
    NSDictionary *_extraTrackDict;
    NSNumber *_preSelectGiftId;
    NSString *_showFrom;
    NSString *_buffSource;
    NSDictionary *_giftSendExtra;
    NSNumber *_preSelectBuffCardLevel;
    NSString *_propRefId;
    NSString *_preSelectCardName;
    NSString *_traySchemaUrl;
    long long _fromType;
    unsigned long long _pageType;
    NSString *_showFromForApi;
    NSString *_sendTimes;
    id /* block */ _handleSelectGiftError;
    id /* block */ _onHideCompletion;
}

@property (copy, nonatomic) NSArray *toUsers;
@property (nonatomic) BOOL allMic;
@property (retain, nonatomic) NSDictionary *extraTrackDict;
@property (retain, nonatomic) NSNumber *preSelectGiftId;
@property (retain, nonatomic) NSString *showFrom;
@property (retain, nonatomic) NSString *buffSource;
@property (copy, nonatomic) NSDictionary *giftSendExtra;
@property (retain, nonatomic) NSNumber *preSelectBuffCardLevel;
@property (copy, nonatomic) NSString *propRefId;
@property (copy, nonatomic) NSString *preSelectCardName;
@property (copy, nonatomic) NSString *traySchemaUrl;
@property (nonatomic) long long fromType;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) NSString *showFromForApi;
@property (retain, nonatomic) NSString *sendTimes;
@property (copy, nonatomic) id /* block */ handleSelectGiftError;
@property (copy, nonatomic) id /* block */ onHideCompletion;

+ (id)defaultConfiguration;

- (void)setSendTimes:(id)arg0;
- (id)sendTimes;
- (id)showFrom;
- (void)setShowFrom:(id)arg0;
- (void)setOnHideCompletion:(id /* block */)arg0;
- (void)setPreSelectGiftId:(id)arg0;
- (id)extraTrackDict;
- (void)setExtraTrackDict:(id)arg0;
- (id /* block */)onHideCompletion;
- (void)setToUsers:(id)arg0;
- (id)preSelectGiftId;
- (void)setGiftSendExtra:(id)arg0;
- (void)setShowFromForApi:(id)arg0;
- (void)setPreSelectCardName:(id)arg0;
- (void)setPropRefId:(id)arg0;
- (void)setAllMic:(BOOL)arg0;
- (BOOL)allMic;
- (void)setPreSelectBuffCardLevel:(id)arg0;
- (void)setBuffSource:(id)arg0;
- (id)propRefId;
- (id)toUsers;
- (id)buffSource;
- (id)giftSendExtra;
- (id)preSelectBuffCardLevel;
- (id)preSelectCardName;
- (id)traySchemaUrl;
- (void)setTraySchemaUrl:(id)arg0;
- (id)showFromForApi;
- (id /* block */)handleSelectGiftError;
- (void)setHandleSelectGiftError:(id /* block */)arg0;
- (unsigned long long)pageType;
- (void).cxx_destruct;
- (void)setPageType:(unsigned long long)arg0;
- (long long)fromType;
- (void)setFromType:(long long)arg0;

@end