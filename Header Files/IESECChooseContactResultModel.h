//
//     Generated by private class-dump
//

@class IESECChooseContactDataModel;

@interface IESECChooseContactResultModel : IESLiveBridgeModel {
    long long _permission;
    IESECChooseContactDataModel *_data;
}

@property (nonatomic) long long permission;
@property (retain, nonatomic) IESECChooseContactDataModel *data;

+ (id)modelCustomPropertyMapper;

- (long long)permission;
- (id)data;
- (void).cxx_destruct;
- (void)setPermission:(long long)arg0;
- (void)setData:(id)arg0;

@end
