//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDECPigeonSendUserEnterMessageRequestModel : NSObject {
    NSString *_pigeonShopId;
    NSString *_conGroupId;
    NSString *_cardUrlContextParams;
    NSString *_pigeonBizType;
    NSDictionary *_extParams;
    NSString *_bizServiceEntityID;
    NSString *_pigeonServiceEntityID;
    NSString *_storeID;
}

@property (copy, nonatomic) NSString *pigeonShopId;
@property (copy, nonatomic) NSString *conGroupId;
@property (copy, nonatomic) NSString *cardUrlContextParams;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) NSString *bizServiceEntityID;
@property (copy, nonatomic) NSString *pigeonServiceEntityID;
@property (copy, nonatomic) NSString *storeID;

- (id)extParams;
- (void)setExtParams:(id)arg0;
- (void)setPigeonBizType:(id)arg0;
- (void)setPigeonShopId:(id)arg0;
- (id)pigeonBizType;
- (id)pigeonShopId;
- (id)conGroupId;
- (void)setConGroupId:(id)arg0;
- (id)cardUrlContextParams;
- (void)setCardUrlContextParams:(id)arg0;
- (id)bizServiceEntityID;
- (void)setBizServiceEntityID:(id)arg0;
- (id)pigeonServiceEntityID;
- (void)setPigeonServiceEntityID:(id)arg0;
- (id)storeID;
- (void).cxx_destruct;
- (void)setStoreID:(id)arg0;

@end
