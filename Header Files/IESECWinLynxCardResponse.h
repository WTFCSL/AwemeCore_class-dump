//
//     Generated by private class-dump
//

@class NSString, IESECWinLynxSSR, IESECWinLynxCardConfig;

@interface IESECWinLynxCardResponse : MTLModel <MTLJSONSerializing> {
    BOOL _invalid;
    NSString *_lynxData;
    IESECWinLynxCardConfig *_lynxConfig;
    IESECWinLynxSSR *_lynxSsr;
    unsigned long long _lynxCardType;
}

@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) IESECWinLynxCardConfig *lynxConfig;
@property (retain, nonatomic) IESECWinLynxSSR *lynxSsr;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long lynxCardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lynxData;
- (void)setLynxData:(id)arg0;
- (void)setLynxConfig:(id)arg0;
- (id)lynxConfig;
- (unsigned long long)lynxCardType;
- (id)lynxSsr;
- (void)setLynxSsr:(id)arg0;
- (void)setLynxCardType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setInvalid:(BOOL)arg0;
- (BOOL)invalid;

@end