//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeGetLunaStatusMethodResultModel : BDXBridgeModel {
    NSString *_active_pop_status;
    long long _luna_is_install;
}

@property (copy, nonatomic) NSString *active_pop_status;
@property (nonatomic) long long luna_is_install;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setActive_pop_status:(id)arg0;
- (void)setLuna_is_install:(long long)arg0;
- (id)active_pop_status;
- (long long)luna_is_install;
- (void).cxx_destruct;

@end