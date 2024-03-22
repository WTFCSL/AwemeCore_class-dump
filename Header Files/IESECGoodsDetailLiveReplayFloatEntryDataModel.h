//
//     Generated by private class-dump
//

@class IESECBackgroundDescribeInfo, IESECGoodsDetailReplayResponse, NSString, IESECImageModel, IESECTextElement;

@interface IESECGoodsDetailLiveReplayFloatEntryDataModel : MTLModel <MTLJSONSerializing> {
    long long _showStyle;
    long long _entryInitState;
    long long _entryInitPosition;
    IESECBackgroundDescribeInfo *_entryBackground;
    IESECImageModel *_floatEntryIcon;
    IESECTextElement *_textElement;
    IESECBackgroundDescribeInfo *_replayBG;
    IESECImageModel *_replayChangeAnimation;
    IESECImageModel *_textPrefixIcon;
    double _playTime;
    IESECGoodsDetailReplayResponse *_replayModel;
}

@property (nonatomic) long long showStyle;
@property (nonatomic) long long entryInitState;
@property (nonatomic) long long entryInitPosition;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *entryBackground;
@property (retain, nonatomic) IESECImageModel *floatEntryIcon;
@property (retain, nonatomic) IESECTextElement *textElement;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *replayBG;
@property (retain, nonatomic) IESECImageModel *replayChangeAnimation;
@property (retain, nonatomic) IESECImageModel *textPrefixIcon;
@property (nonatomic) double playTime;
@property (retain, nonatomic) IESECGoodsDetailReplayResponse *replayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)showStyle;
- (void)setPlayTime:(double)arg0;
- (void)setShowStyle:(long long)arg0;
- (id)replayModel;
- (void)setReplayModel:(id)arg0;
- (long long)entryInitState;
- (void)setEntryInitState:(long long)arg0;
- (long long)entryInitPosition;
- (void)setEntryInitPosition:(long long)arg0;
- (id)entryBackground;
- (void)setEntryBackground:(id)arg0;
- (id)floatEntryIcon;
- (void)setFloatEntryIcon:(id)arg0;
- (id)replayBG;
- (void)setReplayBG:(id)arg0;
- (id)replayChangeAnimation;
- (void)setReplayChangeAnimation:(id)arg0;
- (id)textPrefixIcon;
- (void)setTextPrefixIcon:(id)arg0;
- (void)setTextElement:(id)arg0;
- (void).cxx_destruct;
- (double)playTime;
- (id)textElement;

@end