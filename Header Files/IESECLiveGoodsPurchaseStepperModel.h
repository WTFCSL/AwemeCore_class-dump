//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLiveGoodsPurchaseStepperModel : MTLModel <MTLJSONSerializing> {
    BOOL _buttonDisable;
    NSNumber *_cartNum;
}

@property (nonatomic) BOOL buttonDisable;
@property (retain, nonatomic) NSNumber *cartNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cartNum;
- (BOOL)buttonDisable;
- (void)setCartNum:(id)arg0;
- (void)setButtonDisable:(BOOL)arg0;
- (void).cxx_destruct;

@end
