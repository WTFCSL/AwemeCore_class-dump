//
//     Generated by private class-dump
//

@class IESECLiveBasicLogDataDataModel;

@interface IESECLiveBasicLogDataResultModel : IESLiveBridgeModel {
    long long _code;
    IESECLiveBasicLogDataDataModel *_data;
}

@property (nonatomic) long long code;
@property (retain, nonatomic) IESECLiveBasicLogDataDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void)setCode:(long long)arg0;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end