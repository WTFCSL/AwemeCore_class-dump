//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeRegisterPoiFooterCardMethodParamModel : BDXBridgeModel {
    NSString *_sessionID;
    NSNumber *_cardPriority;
    NSString *_cardKey;
}

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSNumber *cardPriority;
@property (copy, nonatomic) NSString *cardKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCardKey:(id)arg0;
- (id)cardKey;
- (id)cardPriority;
- (void)setCardPriority:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;

@end
