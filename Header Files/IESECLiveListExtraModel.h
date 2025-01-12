//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@interface IESECLiveListExtraModel : MTLModel <MTLJSONSerializing> {
    BOOL _userChooseStore;
    long long _roomType;
    long long _hourBuyShopMatchStatus;
    NSString *_hourBuyShopID;
    NSDictionary *_eventParams;
    NSNumber *_storeID;
    NSNumber *_virtualRoomID;
    NSString *_addressID;
    NSNumber *_addressType;
    NSString *_addressStrategyType;
}

@property (nonatomic) long long roomType;
@property (nonatomic) long long hourBuyShopMatchStatus;
@property (copy, nonatomic) NSString *hourBuyShopID;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (nonatomic) BOOL userChooseStore;
@property (retain, nonatomic) NSNumber *storeID;
@property (retain, nonatomic) NSNumber *virtualRoomID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSNumber *addressType;
@property (retain, nonatomic) NSString *addressStrategyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEventParams:(id)arg0;
- (long long)roomType;
- (void)setRoomType:(long long)arg0;
- (id)hourBuyShopID;
- (id)virtualRoomID;
- (void)setVirtualRoomID:(id)arg0;
- (id)addressStrategyType;
- (void)setAddressStrategyType:(id)arg0;
- (long long)hourBuyShopMatchStatus;
- (void)setHourBuyShopMatchStatus:(long long)arg0;
- (void)setHourBuyShopID:(id)arg0;
- (BOOL)userChooseStore;
- (void)setUserChooseStore:(BOOL)arg0;
- (id)storeID;
- (void).cxx_destruct;
- (void)setStoreID:(id)arg0;
- (id)addressType;
- (void)setAddressType:(id)arg0;
- (id)addressID;
- (void)setAddressID:(id)arg0;
- (id)eventParams;

@end
