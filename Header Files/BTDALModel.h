//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BTDALModel : NSObject <NSCoding> {
    BOOL _isAd;
    NSString *_cid;
    NSString *_logExtra;
    NSString *_openUrl;
    NSArray *_enterpriseSchemes;
}

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSArray *enterpriseSchemes;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setIsAd:(BOOL)arg0;
- (void)setOpenUrl:(id)arg0;
- (id)openUrl;
- (void)setEnterpriseSchemes:(id)arg0;
- (id)enterpriseSchemes;
- (id)init;
- (void).cxx_destruct;
- (id)cid;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (BOOL)isAd;
- (void)setCid:(id)arg0;

@end
