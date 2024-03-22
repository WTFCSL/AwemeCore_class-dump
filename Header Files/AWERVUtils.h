//
//     Generated by private class-dump
//

@class NSString;

@interface AWERVUtils : NSObject <AWERVUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)portraitStatusBarHeight;
+ (double)screenAbsoluteWidth;
+ (double)screenAbsoluteHeight;
+ (id)feedVC;
+ (BOOL)isFakeLandscapeVideo:(id)arg0;
+ (BOOL)isLandscapeVideo:(id)arg0;
+ (void)addRoundingCornerWithView:(id)arg0 byRoundingCorners:(unsigned long long)arg1 cornerRadii:(struct CGSize { double x0; double x1; })arg2;
+ (BOOL)isPortraitVideo:(id)arg0;
+ (id)cardCoverMatchingPlaceholderFromModel:(id)arg0 isOneColumn:(BOOL)arg1;
+ (BOOL)isIOS11;
+ (BOOL)shouldUpdateMixCellTitleWithModel:(id)arg0;

@end
