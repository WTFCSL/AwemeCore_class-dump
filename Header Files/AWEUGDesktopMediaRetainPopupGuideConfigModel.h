//
//     Generated by private class-dump
//

@class AWEUGDesktopChannelGuideInstallConfigModel, NSString, AWEUGDesktopChannelGuideTrackerInfoModel, UIImage;

@interface AWEUGDesktopMediaRetainPopupGuideConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subTitle;
    NSString *_guideVideoResourceUrl;
    NSString *_guideVideoResourcePath;
    NSString *_loadingBackgroundUrl;
    UIImage *_loadingBackgroundImage;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
    AWEUGDesktopChannelGuideInstallConfigModel *_installConfig;
    AWEUGDesktopChannelGuideTrackerInfoModel *_trackerInfo;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *guideVideoResourceUrl;
@property (copy, nonatomic) NSString *guideVideoResourcePath;
@property (copy, nonatomic) NSString *loadingBackgroundUrl;
@property (retain, nonatomic) UIImage *loadingBackgroundImage;
@property (copy, nonatomic) NSString *leftButtonText;
@property (copy, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) AWEUGDesktopChannelGuideInstallConfigModel *installConfig;
@property (retain, nonatomic) AWEUGDesktopChannelGuideTrackerInfoModel *trackerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (void)setTrackerInfo:(id)arg0;
- (id)installConfig;
- (void)setInstallConfig:(id)arg0;
- (id)guideVideoResourcePath;
- (id)guideVideoResourceUrl;
- (id)loadingBackgroundImage;
- (id)loadingBackgroundUrl;
- (void)setGuideVideoResourcePath:(id)arg0;
- (void)setLoadingBackgroundImage:(id)arg0;
- (void)setGuideVideoResourceUrl:(id)arg0;
- (void)setLoadingBackgroundUrl:(id)arg0;
- (id)trackerInfo;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (void)setLeftButtonText:(id)arg0;
- (id)leftButtonText;
- (void)setRightButtonText:(id)arg0;
- (id)rightButtonText;

@end
