//
//     Generated by private class-dump
//

@interface IESECLiveOldBridgeResult : IESLiveBridgeModel {
    long long _code;
    id _data;
}

@property (nonatomic) long long code;
@property (retain, nonatomic) id data;

+ (id)modelCustomPropertyMapper;

- (id)initWithData:(id)arg0 code:(long long)arg1;
- (void)setCode:(long long)arg0;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end
