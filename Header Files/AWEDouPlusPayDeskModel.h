//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDouPlusPayDeskModel : NSObject {
    NSString *_valueString;
    NSString *_moneyString;
    NSString *_orderBriefString;
    NSString *_orderNumberString;
    long long _sceneType;
}

@property (copy, nonatomic) NSString *valueString;
@property (copy, nonatomic) NSString *moneyString;
@property (copy, nonatomic) NSString *orderBriefString;
@property (copy, nonatomic) NSString *orderNumberString;
@property (nonatomic) long long sceneType;

- (id)moneyString;
- (id)orderNumberString;
- (void)setMoneyString:(id)arg0;
- (id)orderBriefString;
- (void)setOrderBriefString:(id)arg0;
- (void)setOrderNumberString:(id)arg0;
- (void).cxx_destruct;
- (id)valueString;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (void)setValueString:(id)arg0;

@end