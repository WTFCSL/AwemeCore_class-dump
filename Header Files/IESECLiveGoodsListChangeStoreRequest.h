//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveGoodsListChangeStoreRequest : IESECLiveAPIBaseRequest {
    NSString *_storeID;
    NSString *_addressInfo;
}

@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;

- (id)buildParams;
- (void)setAddressInfo:(id)arg0;
- (id)storeID;
- (void).cxx_destruct;
- (void)setStoreID:(id)arg0;
- (id)addressInfo;

@end