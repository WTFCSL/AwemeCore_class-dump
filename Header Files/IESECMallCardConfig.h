//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECMallCardConfig : MTLModel <MTLJSONSerializing> {
    NSString *_lynxSchema;
    NSString *_lynxSchemaPPE;
    NSString *_cardName;
    long long _itemType;
    double _predictHeight;
    NSDictionary *_queryMap;
}

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *lynxSchemaPPE;
@property (copy, nonatomic) NSString *cardName;
@property (nonatomic) long long itemType;
@property (nonatomic) double predictHeight;
@property (copy, nonatomic) NSDictionary *queryMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lynxSchema;
- (void)setLynxSchema:(id)arg0;
- (id)queryMap;
- (void)setQueryMap:(id)arg0;
- (double)predictHeight;
- (void)setPredictHeight:(double)arg0;
- (id)lynxSchemaPPE;
- (void)setLynxSchemaPPE:(id)arg0;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (id)cardName;
- (void)setCardName:(id)arg0;

@end