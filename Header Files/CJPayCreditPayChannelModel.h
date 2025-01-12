//
//     Generated by private class-dump
//

@class CJPaySubPayTypeData, NSString;

@interface CJPayCreditPayChannelModel : CJPayChannelModel {
    CJPaySubPayTypeData *_payTypeData;
    NSString *_extParamStr;
}

@property (retain, nonatomic) CJPaySubPayTypeData *payTypeData;
@property (copy, nonatomic) NSString *extParamStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)buildParams;
- (id)payTypeData;
- (id)buildShowConfig;
- (void)setPayTypeData:(id)arg0;
- (id)extParamStr;
- (void)setExtParamStr:(id)arg0;
- (void).cxx_destruct;

@end
