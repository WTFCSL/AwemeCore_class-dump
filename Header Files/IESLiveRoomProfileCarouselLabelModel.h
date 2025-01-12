//
//     Generated by private class-dump
//

@class UIFont, NSString, UIColor, HTSLiveAnchorTabLabel;

@interface IESLiveRoomProfileCarouselLabelModel : IESLiveDynamicModel {
    BOOL _needReplaceAuthentication;
    NSString *_thirdInfo;
    id /* block */ _carouselAction;
    id /* block */ _trackAction;
    double _carouselHeight;
    long long _thirdInfoType;
}

@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) HTSLiveAnchorTabLabel *anchorTabLabel;
@property (retain, nonatomic) NSString *subInfo;
@property (retain, nonatomic) NSString *thirdInfo;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL canCarousel;
@property (copy, nonatomic) id /* block */ carouselAction;
@property (copy, nonatomic) id /* block */ trackAction;
@property (nonatomic) double carouselHeight;
@property (nonatomic) long long infoType;
@property (nonatomic) long long subInfoType;
@property (nonatomic) long long thirdInfoType;
@property (nonatomic) BOOL needAccessibility;
@property (nonatomic) BOOL needMoveUpAccessibility;
@property (nonatomic) BOOL needReplaceAuthentication;

- (id /* block */)trackAction;
- (double)carouselHeight;
- (id)thirdInfo;
- (void)setThirdInfo:(id)arg0;
- (id /* block */)carouselAction;
- (void)setCarouselAction:(id /* block */)arg0;
- (void)setTrackAction:(id /* block */)arg0;
- (void)setCarouselHeight:(double)arg0;
- (long long)thirdInfoType;
- (void)setThirdInfoType:(long long)arg0;
- (BOOL)needReplaceAuthentication;
- (void)setNeedReplaceAuthentication:(BOOL)arg0;
- (void).cxx_destruct;

@end
