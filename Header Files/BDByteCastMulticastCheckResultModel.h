//
//     Generated by private class-dump
//

@class NSDictionary, NSError;

@interface BDByteCastMulticastCheckResultModel : NSObject {
    unsigned long long _result;
    NSDictionary *_extraInfo;
    NSError *_error;
}

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSError *error;

+ (id)descriptionOfResult:(unsigned long long)arg0;

- (void)setExtraInfo:(id)arg0;
- (void)setResult:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)result;
- (void)setError:(id)arg0;
- (id)description;
- (id)error;
- (id)extraInfo;

@end
