//
//     Generated by private class-dump
//

@class AUCDTOFeatureToolBar, AUCDTOFeatureCameraSpeed, AUCDTOFeatureCameraCountDown, AUCDTOFeatureCameraBeauty, AUCDTOFeatureCameraSettings, AUCDTOFeatureCameraMusic, AUCDTOFeatureCameraEffect, AUCDTOFeatureCameraAlbum, AUCDTOFeatureCameraFilter;

@interface AUCDTOFeatureCamera : MTLModel {
    AUCDTOFeatureCameraBeauty *_beauty;
    AUCDTOFeatureCameraCountDown *_countDown;
    AUCDTOFeatureCameraMusic *_music;
    AUCDTOFeatureCameraFilter *_filter;
    AUCDTOFeatureCameraEffect *_effect;
    AUCDTOFeatureCameraSpeed *_speed;
    AUCDTOFeatureCameraSettings *_settings;
    AUCDTOFeatureCameraAlbum *_album;
    AUCDTOFeatureToolBar *_toolBar;
}

@property (retain, nonatomic) AUCDTOFeatureCameraBeauty *beauty;
@property (retain, nonatomic) AUCDTOFeatureCameraCountDown *countDown;
@property (retain, nonatomic) AUCDTOFeatureCameraMusic *music;
@property (retain, nonatomic) AUCDTOFeatureCameraFilter *filter;
@property (retain, nonatomic) AUCDTOFeatureCameraEffect *effect;
@property (retain, nonatomic) AUCDTOFeatureCameraSpeed *speed;
@property (retain, nonatomic) AUCDTOFeatureCameraSettings *settings;
@property (retain, nonatomic) AUCDTOFeatureCameraAlbum *album;
@property (retain, nonatomic) AUCDTOFeatureToolBar *toolBar;

- (void)setBeauty:(id)arg0;
- (void)setCountDown:(id)arg0;
- (id)beauty;
- (void)setToolBar:(id)arg0;
- (id)toolBar;
- (id)music;
- (void)setFilter:(id)arg0;
- (id)album;
- (id)effect;
- (id)filter;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)setEffect:(id)arg0;
- (void)setMusic:(id)arg0;
- (void)setSpeed:(id)arg0;
- (id)settings;
- (id)speed;
- (void)setAlbum:(id)arg0;
- (id)countDown;

@end
