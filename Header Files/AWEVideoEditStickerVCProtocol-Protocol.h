//
//     Generated by private class-dump
//

@class ACCStickerPannelDataConfig, ACCStickerPannelUIConfig;
@protocol ACCStickerPannelLogger, AWEVideoEditStickersVCDelegate, ACCStickerPannelFilter;

@protocol AWEVideoEditStickerVCProtocol <NSObject>

@property (weak, nonatomic) id<AWEVideoEditStickersVCDelegate> delegate;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (nonatomic) BOOL isTeenUpgradeEnable;

- (id)dataConfig;
- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (void)setDataConfig:(id)arg0;
- (BOOL)isTeenUpgradeEnable;
- (void)setIsTeenUpgradeEnable:(BOOL)arg0;
- (id)pannelFilter;
- (void)setPannelFilter:(id)arg0;
- (id)logger;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setLogger:(id)arg0;

@end