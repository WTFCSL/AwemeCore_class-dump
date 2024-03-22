//
//     Generated by private class-dump
//

@class NSString, AWEFeedPlayableIconModel;

@interface AWEFeedPlayableLoadingMaskModel : MTLModel <MTLJSONSerializing> {
    NSString *_bgColor;
    AWEFeedPlayableIconModel *_icon;
    NSString *_title;
    NSString *_subtitle;
    NSString *_capsuleTitle;
    NSString *_capsuleSubtitle;
    NSString *_loadingBGM;
    NSString *_loadingFinishBGM;
}

@property (copy, nonatomic) NSString *bgColor;
@property (retain, nonatomic) AWEFeedPlayableIconModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *capsuleTitle;
@property (copy, nonatomic) NSString *capsuleSubtitle;
@property (copy, nonatomic) NSString *loadingBGM;
@property (copy, nonatomic) NSString *loadingFinishBGM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)capsuleTitle;
- (void)setCapsuleTitle:(id)arg0;
- (id)loadingBGM;
- (id)loadingFinishBGM;
- (id)capsuleSubtitle;
- (void)setCapsuleSubtitle:(id)arg0;
- (void)setLoadingBGM:(id)arg0;
- (void)setLoadingFinishBGM:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)title;
- (void)setIcon:(id)arg0;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;

@end