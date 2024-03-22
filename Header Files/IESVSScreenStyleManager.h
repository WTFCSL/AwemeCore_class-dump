//
//     Generated by private class-dump
//

@class NSString;

@interface IESVSScreenStyleManager : NSObject <IESVSScreenStyleAction> {
    unsigned long long _screenStyle;
}

@property (nonatomic) unsigned long long screenStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (id)fullScreenMode;
- (unsigned long long)closeBtnDidClick;
- (BOOL)usePadNewStyle;
- (unsigned long long)currentScreenStyleType;
- (unsigned long long)screenStyle;
- (unsigned long long)updateToFullScreenOrientation:(long long)arg0;
- (unsigned long long)updateToHalfScreenOrientation:(long long)arg0;
- (unsigned long long)updateToScreenStyle:(unsigned long long)arg0;
- (void)setScreenStyle:(unsigned long long)arg0;
- (unsigned long long)updateToOrientation:(long long)arg0;
- (unsigned long long)fullScreenBtnDidClick;
- (void)updateToFullScreen:(BOOL)arg0;
- (void)resetScreenStyleType;
- (BOOL)isFullScreen;

@end