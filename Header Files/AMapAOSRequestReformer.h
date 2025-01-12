//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AMapAOSRequestReformer : AMapRequestReformer {
    NSArray *_signParameters;
    NSString *_channel;
    NSString *_serverKey;
    NSString *_xxKey;
    NSString *_keyt;
}

@property (copy, nonatomic) NSArray *signParameters;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *serverKey;
@property (copy, nonatomic) NSString *xxKey;
@property (copy, nonatomic) NSString *keyt;

- (void)reformParameters:(id)arg0 result:(id /* block */)arg1;
- (void)setXxKey:(id)arg0;
- (void)setKeyt:(id)arg0;
- (void)setSignParameters:(id)arg0;
- (id)signParameters;
- (id)xxKey;
- (id)keyt;
- (id)channel;
- (id)init;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setServerKey:(id)arg0;
- (id)serverKey;

@end
