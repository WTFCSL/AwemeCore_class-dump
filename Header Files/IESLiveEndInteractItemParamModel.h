//
//     Generated by private class-dump
//

@class IESLiveEndInteractItemOpenPlatformInteractInfoModel, NSNumber, NSString;

@interface IESLiveEndInteractItemParamModel : IESLiveBridgeModel {
    IESLiveEndInteractItemOpenPlatformInteractInfoModel *_openPlatformInteractInfo;
    NSNumber *_type;
    NSNumber *_dataType;
    NSNumber *_playmode;
    NSString *_source;
}

@property (retain, nonatomic) IESLiveEndInteractItemOpenPlatformInteractInfoModel *openPlatformInteractInfo;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *dataType;
@property (retain, nonatomic) NSNumber *playmode;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (id)openPlatformInteractInfo;
- (void)setOpenPlatformInteractInfo:(id)arg0;
- (id)playmode;
- (void)setPlaymode:(id)arg0;
- (void)setDataType:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)type;
- (id)dataType;
- (void)setType:(id)arg0;
- (void)setSource:(id)arg0;

@end
