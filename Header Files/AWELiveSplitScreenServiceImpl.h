//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveSplitScreenServiceImpl : NSObject <IESLiveSplitScreenService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isSplitScreenMode;
- (double)fetchScreenAvailableWidth;
- (double)fetchScreenAvailableHeight;
- (void)splitScreenBreakPointUpdateAction;
- (id)init;
- (void)dealloc;

@end
