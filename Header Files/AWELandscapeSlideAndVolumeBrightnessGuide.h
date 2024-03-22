//
//     Generated by private class-dump
//

@class NSString, AWELandScapeGuideView;

@interface AWELandscapeSlideAndVolumeBrightnessGuide : AWELandscapeBaseGuide <AWELandscapeGuideProtocol> {
    BOOL _canSlide;
    AWELandScapeGuideView *_guideView;
}

@property (retain, nonatomic) AWELandScapeGuideView *guideView;
@property (nonatomic) BOOL canSlide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (BOOL)canSlide;
- (void)setCanSlide:(BOOL)arg0;
- (id)initWithTargetView:(id)arg0 canSlid:(BOOL)arg1 pageContext:(id)arg2;
- (BOOL)canShowSlideGuide;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)show;
- (id)identifier;
- (long long)priority;
- (void)setGuideView:(id)arg0;
- (id)guideView;

@end