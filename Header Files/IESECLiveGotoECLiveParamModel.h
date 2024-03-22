//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECLiveGotoECLiveParamModel : IESLiveBridgeModel {
    BOOL _open;
    NSString *_baseSchema;
    NSDictionary *_query;
    NSDictionary *_ecomLiveParams;
}

@property (copy, nonatomic) NSString *baseSchema;
@property (copy, nonatomic) NSDictionary *query;
@property (copy, nonatomic) NSDictionary *ecomLiveParams;
@property (nonatomic) BOOL open;

+ (id)modelCustomPropertyMapper;

- (id)ecomLiveParams;
- (void)setEcomLiveParams:(id)arg0;
- (id)baseSchema;
- (void)setBaseSchema:(id)arg0;
- (void).cxx_destruct;
- (BOOL)open;
- (void)setOpen:(BOOL)arg0;
- (id)query;
- (void)setQuery:(id)arg0;

@end