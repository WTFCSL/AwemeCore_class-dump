//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWENewScanImpl.ScanSecureLinkResponseModel : AWEBaseApiModel {
    void /* unknown type, empty encoding */ risk;
    void /* unknown type, empty encoding */ showMidPage;
    void /* unknown type, empty encoding */ cachedDuration;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ pageCode;
    void /* unknown type, empty encoding */ expiredDate;
}

@property (nonatomic) void /* unknown type, empty encoding */ risk;
@property (nonatomic) void /* unknown type, empty encoding */ showMidPage;
@property (nonatomic) void /* unknown type, empty encoding */ cachedDuration;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSString *pageCode;
@property (nonatomic, copy) NSDate *expiredDate;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)risk;
- (void)setRisk:(long long)arg0;
- (BOOL)showMidPage;
- (void)setShowMidPage:(BOOL)arg0;
- (id)pageCode;
- (void)setPageCode:(id)arg0;
- (id)expiredDate;
- (void)setExpiredDate:(id)arg0;
- (id)init;
- (void)setLink:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)link;
- (double)cachedDuration;
- (void)setCachedDuration:(double)arg0;

@end
