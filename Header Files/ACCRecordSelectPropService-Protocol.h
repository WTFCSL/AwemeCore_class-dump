//
//     Generated by private class-dump
//

@protocol ACCRecordSelectPropService <NSObject>

@property (nonatomic) unsigned long long selectPropDisplayType;
@property (nonatomic, readonly) id canDisplayPropBtn;
@property (nonatomic, readonly) id canDisplayPropBtnTitle;
@property (nonatomic, readonly) id canShowStickerPanelAtLaunch;
@property (nonatomic, readonly) id clickSelectPropBtnSignal;
@property (nonatomic, readonly) id selectPropTitleDisplaySignal;

- (unsigned long long)selectPropDisplayType;
- (void)setSelectPropDisplayType:(unsigned long long)arg0;
- (id)canDisplayPropBtn;
- (id)canDisplayPropBtnTitle;
- (id)canShowStickerPanelAtLaunch;
- (id)clickSelectPropBtnSignal;
- (id)selectPropTitleDisplaySignal;
- (void)sendSignalAfterClickSelectPropBtn;
- (void)sendSignalChangeTitleDisplayState;

@end