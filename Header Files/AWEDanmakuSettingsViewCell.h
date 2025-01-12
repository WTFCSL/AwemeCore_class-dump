//
//     Generated by private class-dump
//

@class NSString, AWEDanmakuSettingsConfigModel, UILabel, AWEDanmakuSettingsSlider, UIView;

@interface AWEDanmakuSettingsViewCell : UITableViewCell <AWEDanmakuSettingsSliderDelegate> {
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    AWEDanmakuSettingsSlider *_slider;
    AWEDanmakuSettingsConfigModel *_configModel;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) AWEDanmakuSettingsSlider *slider;
@property (retain, nonatomic) AWEDanmakuSettingsConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)setupUI:(unsigned long long)arg0;
- (void)didSlideOnPointIndex:(long long)arg0 needUpdate:(BOOL)arg1;
- (void)didSlideOnValuePercent:(double)arg0 needUpdate:(BOOL)arg1;
- (void)updateWithConfigModel:(id)arg0 scene:(unsigned long long)arg1;
- (id)container;
- (void).cxx_destruct;
- (id)slider;
- (void)setContainer:(id)arg0;
- (id)titleLabel;
- (void)setSlider:(id)arg0;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end
