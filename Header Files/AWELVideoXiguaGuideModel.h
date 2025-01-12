//
//     Generated by private class-dump
//

@class AWELVideoXiguaGuidePopupModel, NSString, NSNumber, AWEURLModel;

@interface AWELVideoXiguaGuideModel : AWEBaseApiModel {
    BOOL _guide;
    NSString *_minRatio;
    NSString *_labelText;
    AWEURLModel *_icon;
    NSString *_title;
    NSNumber *_fullScreenControl;
    long long _playDoneControl;
    AWELVideoXiguaGuidePopupModel *_guidePopup;
}

@property (nonatomic) BOOL guide;
@property (copy, nonatomic) NSString *minRatio;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *fullScreenControl;
@property (nonatomic) long long playDoneControl;
@property (retain, nonatomic) AWELVideoXiguaGuidePopupModel *guidePopup;

+ (id)iconJSONTransformer;
+ (id)guidePopupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)fullScreenControl;
- (void)setFullScreenControl:(id)arg0;
- (long long)playDoneControl;
- (void)setPlayDoneControl:(long long)arg0;
- (id)guidePopup;
- (void)setGuidePopup:(id)arg0;
- (id)icon;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (id)labelText;
- (id)title;
- (void)setIcon:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)minRatio;
- (void)setMinRatio:(id)arg0;
- (BOOL)guide;
- (void)setGuide:(BOOL)arg0;

@end
