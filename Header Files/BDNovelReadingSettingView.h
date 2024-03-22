//
//     Generated by private class-dump
//

@class BDNovelReadingSettingChildView, NSString, UIView, BDReaderConfig;
@protocol BDNovelSettingViewDelegate;

@interface BDNovelReadingSettingView : BDNovelReaderBaseInsertView <BDNovelReaderSliderDelegate> {
    id<BDNovelSettingViewDelegate> _delegate;
    BDNovelReadingSettingChildView *_lightView;
    BDNovelReadingSettingChildView *_fontView;
    BDNovelReadingSettingChildView *_backgroundView;
    BDNovelReadingSettingChildView *_pageModeView;
    UIView *_lineView;
    BDReaderConfig *_configData;
}

@property (retain, nonatomic) BDNovelReadingSettingChildView *lightView;
@property (retain, nonatomic) BDNovelReadingSettingChildView *fontView;
@property (retain, nonatomic) BDNovelReadingSettingChildView *backgroundView;
@property (retain, nonatomic) BDNovelReadingSettingChildView *pageModeView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) BDReaderConfig *configData;
@property (weak, nonatomic) id<BDNovelSettingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupNewView;
- (void)setupOldView;
- (void)readerInsertedViewThemeConfigChange:(id)arg0;
- (void)readerInsertedViewLayoutConfigChange:(id)arg0;
- (void)readerInsertedViewPageModeConfigChange:(id)arg0;
- (void)readerInsertedViewBackgroundConfigChange:(id)arg0;
- (long long)insertPriority;
- (id)fontView;
- (void)setFontView:(id)arg0;
- (void)updateWithConfigData:(id)arg0;
- (void)setConfigData:(id)arg0;
- (id)configData;
- (id)lightView;
- (id)pageModeView;
- (void)setLightView:(id)arg0;
- (void)setPageModeView:(id)arg0;
- (void)dismiss;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end