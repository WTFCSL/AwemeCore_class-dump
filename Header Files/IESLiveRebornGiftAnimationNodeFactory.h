//
//     Generated by private class-dump
//

@class NSNumber, NSMutableDictionary;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveRebornGiftAnimationNodeFactory : NSObject {
    BOOL _isBigScale;
    BOOL _enableAggregateBigGiftTray;
    BOOL _giftImageFormatUseWebp;
    BOOL _trayGroupModeServerControl;
    unsigned long long _scene;
    id<IESLiveRoomServiceAdapter> _roomModel;
    NSNumber *_mp4ExpireDuration;
    NSMutableDictionary *_flymicCache;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) NSNumber *mp4ExpireDuration;
@property (nonatomic) BOOL isBigScale;
@property (retain, nonatomic) NSMutableDictionary *flymicCache;
@property (nonatomic) BOOL enableAggregateBigGiftTray;
@property (nonatomic) BOOL giftImageFormatUseWebp;
@property (nonatomic) BOOL trayGroupModeServerControl;
@property (nonatomic) unsigned long long scene;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (id)initWithRoomModel:(id)arg0;
- (void)setGiftImageFormatUseWebp:(BOOL)arg0;
- (BOOL)enableAggregateBigGiftTrayWithGroupMode:(int)arg0;
- (id)buildNodeWithGiftMessage:(id)arg0 split:(BOOL)arg1;
- (id)buildNodeWithBindingMessage:(id)arg0;
- (id)buildNodeWithAssetMessage:(id)arg0;
- (id)buildNodeWithFunctionalAssetMessage:(id)arg0;
- (id)buildNodeWithLightGiftMessage:(id)arg0;
- (id)buildGiftBaseInfoFor:(id)arg0 gift:(id)arg1 type:(unsigned long long)arg2;
- (id)combineBaseInfo:(id)arg0 videoInfo:(id)arg1 giftMessage:(id)arg2 giftModel:(id)arg3 comboKey:(id)arg4;
- (id)giftMessageComboKeyWithBaseInfo:(id)arg0;
- (id)buildLightGiftMessageNode:(id)arg0 videoInfo:(id)arg1 giftInfo:(id)arg2 giftModel:(id)arg3;
- (void)initTypeForNode:(id)arg0 giftModel:(id)arg1 sendTogether:(id)arg2;
- (id)transformToNativeAnimUser:(id)arg0;
- (id)flymicConfigForGift:(id)arg0;
- (id)trayBaseImgWithTrayInfo:(id)arg0;
- (id)buildAttributedString:(id)arg0 toUserName:(id)arg1 giftName:(id)arg2 withDisplayText:(id)arg3;
- (BOOL)giftImageFormatUseWebp;
- (BOOL)isBigScale;
- (id)mp4ExpireDuration;
- (id)flymicCache;
- (BOOL)trayGroupModeServerControl;
- (BOOL)enableAggregateBigGiftTray;
- (id)nodeWithMessage:(id)arg0;
- (id)fakeNodeWithParamModel:(id)arg0;
- (void)setMp4ExpireDuration:(id)arg0;
- (void)setIsBigScale:(BOOL)arg0;
- (void)setFlymicCache:(id)arg0;
- (void)setEnableAggregateBigGiftTray:(BOOL)arg0;
- (void)setTrayGroupModeServerControl:(BOOL)arg0;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)scene;

@end
