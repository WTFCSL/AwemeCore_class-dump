//
//     Generated by private class-dump
//

@class NSDictionary, IESECTabKitBFFModel;

@interface IESECShopBffTabResponse : IESECBaseApiModel {
    NSDictionary *_logExtra;
    NSDictionary *_perfLogExtra;
    IESECTabKitBFFModel *_tabKitModel;
}

@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSDictionary *perfLogExtra;
@property (retain, nonatomic) IESECTabKitBFFModel *tabKitModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)tabKitModel;
- (id)perfLogExtra;
- (void)setPerfLogExtra:(id)arg0;
- (void)setTabKitModel:(id)arg0;
- (void).cxx_destruct;

@end
