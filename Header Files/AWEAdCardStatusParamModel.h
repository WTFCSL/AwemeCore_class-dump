//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdCardStatusParamModel : BDXBridgeModel {
    BOOL _disableCloseBtn;
    BOOL _enableCardClick;
    long long _status;
    long long _from;
    NSString *_formType;
}

@property (nonatomic) long long status;
@property (nonatomic) long long from;
@property (copy, nonatomic) NSString *formType;
@property (nonatomic) BOOL disableCloseBtn;
@property (nonatomic) BOOL enableCardClick;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)disableCloseBtn;
- (BOOL)enableCardClick;
- (void)setDisableCloseBtn:(BOOL)arg0;
- (void)setEnableCardClick:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (id)formType;
- (void)setFormType:(id)arg0;
- (long long)from;
- (void)setFrom:(long long)arg0;

@end
