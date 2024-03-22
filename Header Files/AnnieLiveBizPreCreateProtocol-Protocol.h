//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;
@protocol AnnieXCardModelProtocol;

@protocol AnnieLiveBizPreCreateProtocol <NSObject>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSArray *globalPropsBlockList;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) unsigned long long kernalType;
@property (weak, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) BOOL enableAnnieXPreCreate;

- (id)initialData;
- (void)setInitialData:(id)arg0;
- (id)originUrl;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (void)setCustomGlobalProps:(id)arg0;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (void)setOriginUrl:(id)arg0;
- (id)customGlobalProps;
- (unsigned long long)kernalType;
- (BOOL)enableAnnieXPreCreate;
- (void)updateGlobalPropsWithProps:(id)arg0;
- (id)globalPropsBlockList;
- (void)setGlobalPropsBlockList:(id)arg0;
- (void)setKernalType:(unsigned long long)arg0;
- (void)setEnableAnnieXPreCreate:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (id)schema;

@end