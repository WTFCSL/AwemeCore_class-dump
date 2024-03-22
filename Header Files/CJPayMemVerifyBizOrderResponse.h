//
//     Generated by private class-dump
//

@class NSString, CJPayMemberFaceVerifyInfoModel, CJPayErrorButtonInfo;

@interface CJPayMemVerifyBizOrderResponse : CJPayBaseResponse {
    BOOL _needSignCard;
    NSString *_signOrderNo;
    NSString *_additionalVerifyType;
    CJPayMemberFaceVerifyInfoModel *_faceVerifyInfoModel;
    CJPayErrorButtonInfo *_buttonInfo;
}

@property (nonatomic) BOOL needSignCard;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *additionalVerifyType;
@property (retain, nonatomic) CJPayMemberFaceVerifyInfoModel *faceVerifyInfoModel;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)buttonInfo;
- (void)setButtonInfo:(id)arg0;
- (id)signOrderNo;
- (void)setSignOrderNo:(id)arg0;
- (id)additionalVerifyType;
- (id)faceVerifyInfoModel;
- (void)setAdditionalVerifyType:(id)arg0;
- (void)setFaceVerifyInfoModel:(id)arg0;
- (BOOL)needSignCard;
- (void)setNeedSignCard:(BOOL)arg0;
- (void).cxx_destruct;

@end
