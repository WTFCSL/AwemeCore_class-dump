//
//     Generated by private class-dump
//

@class AWELifeLiveMessageDrawLotteryResult, NSString, AWELifeLiveMessageRefresh, AWELifeLiveMessageUpdate, AWELifeLiveMessageAtmosphereInfo;

@interface AWELifeLiveMessage : MTLModel <MTLJSONSerializing> {
    unsigned long long _updateType;
    NSString *_pushTime;
    AWELifeLiveMessageRefresh *_refreshGrouponInfo;
    AWELifeLiveMessageUpdate *_updatedGrouponInfo;
    AWELifeLiveMessageUpdate *_updatedGrouponInfoNew;
    AWELifeLiveMessageRefresh *_refreshGrouponInfoNew;
    AWELifeLiveMessageDrawLotteryResult *_drawLotteryResult;
    AWELifeLiveMessageDrawLotteryResult *_lifeLotteryDraw;
    AWELifeLiveMessageAtmosphereInfo *_atmosphereInfo;
}

@property (nonatomic) unsigned long long updateType;
@property (copy, nonatomic) NSString *pushTime;
@property (copy, nonatomic) AWELifeLiveMessageRefresh *refreshGrouponInfo;
@property (copy, nonatomic) AWELifeLiveMessageUpdate *updatedGrouponInfo;
@property (retain, nonatomic) AWELifeLiveMessageUpdate *updatedGrouponInfoNew;
@property (retain, nonatomic) AWELifeLiveMessageRefresh *refreshGrouponInfoNew;
@property (retain, nonatomic) AWELifeLiveMessageDrawLotteryResult *drawLotteryResult;
@property (retain, nonatomic) AWELifeLiveMessageDrawLotteryResult *lifeLotteryDraw;
@property (retain, nonatomic) AWELifeLiveMessageAtmosphereInfo *atmosphereInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lifeLotteryDraw;
- (id)pushTime;
- (id)updatedGrouponInfo;
- (id)updatedGrouponInfoNew;
- (id)refreshGrouponInfo;
- (id)refreshGrouponInfoNew;
- (id)drawLotteryResult;
- (id)atmosphereInfo;
- (void)setPushTime:(id)arg0;
- (void)setRefreshGrouponInfo:(id)arg0;
- (void)setUpdatedGrouponInfo:(id)arg0;
- (void)setUpdatedGrouponInfoNew:(id)arg0;
- (void)setRefreshGrouponInfoNew:(id)arg0;
- (void)setDrawLotteryResult:(id)arg0;
- (void)setLifeLotteryDraw:(id)arg0;
- (void)setAtmosphereInfo:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)updateType;
- (void)setUpdateType:(unsigned long long)arg0;

@end