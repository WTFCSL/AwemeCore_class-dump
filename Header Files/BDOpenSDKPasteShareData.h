//
//     Generated by private class-dump
//

@class NSString;

@interface BDOpenSDKPasteShareData : NSObject <NSCoding> {
    NSString *_bundle_id;
    NSString *_key;
    NSString *_secret;
    NSString *_unique_id;
}

@property (retain, nonatomic) NSString *bundle_id;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *secret;
@property (retain, nonatomic) NSString *unique_id;

- (void)setBundle_id:(id)arg0;
- (id)key;
- (id)init;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)unique_id;
- (id)bundle_id;
- (void)setUnique_id:(id)arg0;
- (id)secret;
- (void)setSecret:(id)arg0;

@end