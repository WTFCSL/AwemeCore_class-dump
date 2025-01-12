//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWENearbyCardLayout;

@interface AWENearbyLynxModel : MTLModel <MTLJSONSerializing, AWESharkLynxModelProtocol> {
    BOOL _enableRetry;
    NSString *_lynxUrl;
    NSString *_lynxRawUrl;
    NSString *_rawData;
    NSDictionary *_rawDataDict;
    NSDictionary *_globalProps;
    long long _cardType;
    double _height;
    AWENearbyCardLayout *_cardLayout;
    NSString *_cardLayoutString;
}

@property (copy, nonatomic) NSString *cardLayoutString;
@property (retain, nonatomic) AWENearbyCardLayout *cardLayout;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *lynxRawUrl;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSDictionary *rawDataDict;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) long long cardType;
@property (nonatomic) double height;
@property (nonatomic) BOOL enableRetry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lynxUrl;
- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (BOOL)enableRetry;
- (void)setRawDataDict:(id)arg0;
- (id)rawDataDict;
- (void)setLynxUrl:(id)arg0;
- (double)lynxHeight;
- (id)lynxRawUrl;
- (void)setEnableRetry:(BOOL)arg0;
- (void)setLynxRawUrl:(id)arg0;
- (id)cardLayout;
- (id)cardLayoutString;
- (void)setCardLayout:(id)arg0;
- (void)setCardLayoutString:(id)arg0;
- (void).cxx_destruct;
- (double)height;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (void)setHeight:(double)arg0;
- (long long)cardType;
- (void)setCardType:(long long)arg0;

@end
