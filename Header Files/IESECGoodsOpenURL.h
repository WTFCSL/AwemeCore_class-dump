//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsOpenURL : NSObject {
    long long _promotionSource;
    NSString *_ironManURL;
    NSString *_AppURL;
    NSString *_universalLinks;
    NSString *_webURL;
}

@property (nonatomic) long long promotionSource;
@property (copy, nonatomic) NSString *ironManURL;
@property (copy, nonatomic) NSString *AppURL;
@property (copy, nonatomic) NSString *universalLinks;
@property (copy, nonatomic) NSString *webURL;

- (long long)promotionSource;
- (id)ironManURL;
- (void)setIronManURL:(id)arg0;
- (void)setPromotionSource:(long long)arg0;
- (id)initWithLinks:(id)arg0 promotionSource:(long long)arg1;
- (id)AppURL;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (void)setAppURL:(id)arg0;
- (id)universalLinks;
- (void)setUniversalLinks:(id)arg0;

@end