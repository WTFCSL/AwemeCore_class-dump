//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDouPlusTorchOrderResultModel : AWEBaseApiModel {
    BOOL _hidePayToast;
    NSString *_horseLight;
    NSString *_payToast;
}

@property (copy, nonatomic) NSString *horseLight;
@property (copy, nonatomic) NSString *payToast;
@property (nonatomic) BOOL hidePayToast;

+ (id)JSONKeyPathsByPropertyKey;

- (id)horseLight;
- (void)setHorseLight:(id)arg0;
- (id)payToast;
- (void)setPayToast:(id)arg0;
- (BOOL)hidePayToast;
- (void)setHidePayToast:(BOOL)arg0;
- (void).cxx_destruct;

@end
