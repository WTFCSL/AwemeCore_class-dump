//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CJPayFaceVerifyInfo;

@interface CJPayTransferInfoModel : JSONModel {
    NSString *_appId;
    NSString *_merchantId;
    NSString *_outTradeNo;
    NSString *_tradeNo;
    NSString *_needFace;
    NSString *_lynxUrl;
    NSString *_processId;
    CJPayFaceVerifyInfo *_faceVerifyInfo;
    NSString *_needBindCard;
    NSString *_zgAppId;
    NSString *_zgMerchantId;
    NSString *_needQueryFaceData;
    NSString *_needOpenAccount;
    NSString *_openAccountUrl;
    NSDictionary *_trackInfoDic;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *needFace;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *processId;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;
@property (copy, nonatomic) NSString *needBindCard;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *zgMerchantId;
@property (copy, nonatomic) NSString *needQueryFaceData;
@property (copy, nonatomic) NSString *needOpenAccount;
@property (copy, nonatomic) NSString *openAccountUrl;
@property (copy, nonatomic) NSDictionary *trackInfoDic;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)lynxUrl;
- (void)setOutTradeNo:(id)arg0;
- (void)setTradeNo:(id)arg0;
- (id)outTradeNo;
- (id)tradeNo;
- (id)trackInfoDic;
- (void)setTrackInfoDic:(id)arg0;
- (void)setLynxUrl:(id)arg0;
- (id)faceVerifyInfo;
- (void)setFaceVerifyInfo:(id)arg0;
- (void)setZgAppId:(id)arg0;
- (void)setZgMerchantId:(id)arg0;
- (id)zgAppId;
- (id)zgMerchantId;
- (id)needFace;
- (void)setNeedFace:(id)arg0;
- (id)needBindCard;
- (void)setNeedBindCard:(id)arg0;
- (id)needQueryFaceData;
- (void)setNeedQueryFaceData:(id)arg0;
- (id)needOpenAccount;
- (void)setNeedOpenAccount:(id)arg0;
- (id)openAccountUrl;
- (void)setOpenAccountUrl:(id)arg0;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (void)setProcessId:(id)arg0;
- (id)processId;
- (id)appId;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;

@end