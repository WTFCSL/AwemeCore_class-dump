//
//     Generated by private class-dump
//

@class NSString, CJPayUnionPaySignInfo, CJPayErrorButtonInfo;

@interface CJPayUnionCreateOrderResponse : CJPayBaseResponse {
    NSString *_memberBizOrderNo;
    CJPayErrorButtonInfo *_buttonInfo;
    CJPayUnionPaySignInfo *_unionPaySignInfo;
    NSString *_unionIconUrl;
}

@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayUnionPaySignInfo *unionPaySignInfo;
@property (copy, nonatomic) NSString *unionIconUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)buttonInfo;
- (void)setButtonInfo:(id)arg0;
- (id)unionIconUrl;
- (id)unionPaySignInfo;
- (id)memberBizOrderNo;
- (void)setMemberBizOrderNo:(id)arg0;
- (void)setUnionPaySignInfo:(id)arg0;
- (void)setUnionIconUrl:(id)arg0;
- (void).cxx_destruct;

@end