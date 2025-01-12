//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDUGLuckyCatSetStorageItemXBridgeModel : BDXBridgeModel {
    NSString *_key;
    NSString *_data;
    NSNumber *_expireTime;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *data;
@property (retain, nonatomic) NSNumber *expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setKey:(id)arg0;
- (id)expireTime;
- (void)setExpireTime:(id)arg0;

@end
