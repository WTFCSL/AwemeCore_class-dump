//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveGoodsRelatedCardRequest : IESECLiveAPIBaseRequest {
    NSString *_authorOpenID;
    NSString *_entranceInfo;
    NSString *_containerRoomID;
    NSString *_containerAuthorID;
    NSString *_storeID;
    NSString *_addressInfo;
    NSString *_relatedInfo;
}

@property (retain, nonatomic) NSString *authorOpenID;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *containerAuthorID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (copy, nonatomic) NSString *relatedInfo;

- (void)setEntranceInfo:(id)arg0;
- (id)buildParams;
- (id)entranceInfo;
- (void)setAddressInfo:(id)arg0;
- (id)relatedInfo;
- (id)containerRoomID;
- (void)setContainerRoomID:(id)arg0;
- (id)containerAuthorID;
- (void)setContainerAuthorID:(id)arg0;
- (id)authorOpenID;
- (void)setAuthorOpenID:(id)arg0;
- (void)setRelatedInfo:(id)arg0;
- (id)storeID;
- (void).cxx_destruct;
- (void)setStoreID:(id)arg0;
- (id)addressInfo;

@end
