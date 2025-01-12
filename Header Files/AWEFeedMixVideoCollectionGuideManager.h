//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedMixVideoCollectionGuideManager : NSObject <AWEFeedMixCollectionGuideManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMixCollectionGuideAboveMissLimit;
- (BOOL)isMixCollectionGuideAboveHiden;
- (void)cleanMixCollectionGuideAllRecording;
- (BOOL)isMixCollectionGuideSametDaySinceLastShow;
- (void)cleanMixCollectionGuideShowNum;
- (BOOL)isMixCollectionGuideAboveShowLimit;
- (BOOL)fitMixCollectionGuidePreCheck;
- (void)recordMixCollectionGuide;
- (void)cleanFeedMixCollectionGuideExitRecording;

@end
