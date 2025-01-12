//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaOffer : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ currencyCode;
    void /* unknown type, empty encoding */ externalOfferID;
    void /* unknown type, empty encoding */ offerID;
    void /* unknown type, empty encoding */ offerType;
    void /* unknown type, empty encoding */ amount;
    void /* unknown type, empty encoding */ resource;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *externalOfferID;
@property (nonatomic, copy) NSString *offerID;
@property (nonatomic, copy) NSString *offerType;
@property (nonatomic) void /* unknown type, empty encoding */ amount;
@property (nonatomic, retain) void /* unknown type, empty encoding */ resource;

+ (id)JSONKeyPathsByPropertyKey;

- (id)externalOfferID;
- (void)setExternalOfferID:(id)arg0;
- (void)setOfferID:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)offerType;
- (void)setOfferType:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)currencyCode;
- (void)setResource:(id)arg0;
- (id)resource;
- (void)setCurrencyCode:(id)arg0;
- (long long)amount;
- (void)setAmount:(long long)arg0;
- (id)offerID;

@end
