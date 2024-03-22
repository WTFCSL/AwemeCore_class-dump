//
//     Generated by private class-dump
//

@class NSString, IESECShopTabStyleInfo, IESECShopTabBadgeInfo, NSDictionary, NSNumber;

@interface IESECShopTabBizInfoModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _tabContainerType;
    IESECShopTabStyleInfo *_tabStyleInfo;
    IESECShopTabBadgeInfo *_tabBadgeInfo;
    NSString *_tabHintText;
    NSNumber *_tabHintDuration;
    NSString *_jumpURL;
    NSString *_toast;
    NSDictionary *_logExtra;
    NSString *_passThroughFE;
    unsigned long long _liveFusionDisplayScene;
}

@property (nonatomic) unsigned long long tabContainerType;
@property (retain, nonatomic) IESECShopTabStyleInfo *tabStyleInfo;
@property (retain, nonatomic) IESECShopTabBadgeInfo *tabBadgeInfo;
@property (copy, nonatomic) NSString *tabHintText;
@property (retain, nonatomic) NSNumber *tabHintDuration;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *passThroughFE;
@property (nonatomic) unsigned long long liveFusionDisplayScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (unsigned long long)tabContainerType;
- (void)setTabContainerType:(unsigned long long)arg0;
- (id)tabHintText;
- (void)setTabHintText:(id)arg0;
- (id)tabHintDuration;
- (void)setTabHintDuration:(id)arg0;
- (unsigned long long)liveFusionDisplayScene;
- (void)setLiveFusionDisplayScene:(unsigned long long)arg0;
- (id)passThroughFE;
- (void)setPassThroughFE:(id)arg0;
- (void)setTabStyleInfo:(id)arg0;
- (void)setTabBadgeInfo:(id)arg0;
- (id)tabStyleInfo;
- (id)tabBadgeInfo;
- (void).cxx_destruct;
- (void)setToast:(id)arg0;
- (id)toast;

@end
