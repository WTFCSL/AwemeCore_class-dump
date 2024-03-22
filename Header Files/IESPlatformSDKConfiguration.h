//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESPlatformSDKConfiguration : NSObject {
    long long _productType;
    NSString *_productName;
    NSString *_productDisplayName;
    NSArray *_URLSchemes;
    NSString *_iTunesUri;
}

@property (nonatomic) long long productType;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productDisplayName;
@property (retain, nonatomic) NSArray *URLSchemes;
@property (copy, nonatomic) NSString *iTunesUri;

- (void)setURLSchemes:(id)arg0;
- (id)productDisplayName;
- (void)setProductDisplayName:(id)arg0;
- (id)productName;
- (long long)productType;
- (id)init;
- (void)setProductName:(id)arg0;
- (void)setProductType:(long long)arg0;
- (void).cxx_destruct;
- (id)URLSchemes;
- (id)iTunesUri;
- (void)setITunesUri:(id)arg0;

@end