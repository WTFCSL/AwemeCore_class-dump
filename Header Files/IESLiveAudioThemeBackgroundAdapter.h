//
//     Generated by private class-dump
//

@class UIImage, IESLiveAudioBackgroundBaseModel, HTSLiveAudioBGData;
@protocol IESLiveRoomService;

@interface IESLiveAudioThemeBackgroundAdapter : NSObject {
    BOOL _isThumbnail;
    BOOL _themeEnabled;
    IESLiveAudioBackgroundBaseModel *_dataModel;
    HTSLiveAudioBGData *_bgData;
    id<IESLiveRoomService> _room;
    id /* block */ _dataModelUpdateAction;
    id /* block */ _abSource;
}

@property (retain, nonatomic) IESLiveAudioBackgroundBaseModel *dataModel;
@property (nonatomic) BOOL isThumbnail;
@property (retain, nonatomic) HTSLiveAudioBGData *bgData;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL themeEnabled;
@property (copy, nonatomic) id /* block */ dataModelUpdateAction;
@property (copy, nonatomic) id /* block */ abSource;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) UIImage *defaultImage;

- (void)setImageAnimatedBg:(id)arg0;
- (BOOL)themeEnabled;
- (void)setGifImageData:(id)arg0;
- (void)setVideoBgFileUrl:(id)arg0;
- (void)setImageBg:(id)arg0;
- (void)setDowngradingBg:(id)arg0;
- (void)setBackgroundImageViewHidden:(BOOL)arg0;
- (void)setBackgroundAnimatedImageViewHidden:(BOOL)arg0;
- (void)setBackgroundVideoPlayerHidden:(BOOL)arg0;
- (void)setBackgroundMaskViewHidden:(BOOL)arg0;
- (void)setBackgroundInAuditMaskHidden:(BOOL)arg0;
- (id /* block */)abSource;
- (id)initWithAudioBgData:(id)arg0 isThumbnail:(BOOL)arg1 abSource:(id /* block */)arg2 updateAction:(id /* block */)arg3;
- (id)bgData;
- (void)updateRoomThemeImageBgUrls:(id)arg0 imageAnimatedBgUrls:(id)arg1 imageStaticBgUrls:(id)arg2;
- (void)refreshTheme:(id)arg0 isForce:(BOOL)arg1 isAnchor:(BOOL)arg2;
- (void)updateBackgroundIfNeededWithPlaceholderImage:(id)arg0;
- (void)updateBackgroundImageViewHidden:(BOOL)arg0;
- (void)updateWithThemeEnabled:(BOOL)arg0;
- (void)updateWithStrategy:(id)arg0;
- (void)setAbSource:(id /* block */)arg0;
- (void)setBgData:(id)arg0;
- (void)setDataModelUpdateAction:(id /* block */)arg0;
- (id /* block */)dataModelUpdateAction;
- (void)setupWithAvailableBgData:(id)arg0 isAnchor:(BOOL)arg1;
- (long long)bgTypeWithAudioBGData:(id)arg0;
- (void)setupAnimatedBgWithAvailableData:(id)arg0 isAnchor:(BOOL)arg1;
- (void)setThemeEnabled:(BOOL)arg0;
- (id)placeholderImage;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (long long)backgroundType;
- (void)setBackgroundType:(long long)arg0;
- (void)setPlaceholderImage:(id)arg0;
- (BOOL)isVideo;
- (BOOL)isThumbnail;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (id)defaultImage;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)clean;
- (void)setIsThumbnail:(BOOL)arg0;

@end
