//
//     Generated by private class-dump
//

@class NSDictionary, NSError;

@interface BDTuringTwiceVerifyResponse : NSObject {
    NSDictionary *_params;
    NSError *_error;
    unsigned long long _type;
}

@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setError:(id)arg0;
- (id)params;
- (id)error;
- (void)setParams:(id)arg0;

@end
