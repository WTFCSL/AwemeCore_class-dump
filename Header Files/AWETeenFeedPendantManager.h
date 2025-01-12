//
//     Generated by private class-dump
//

@class AWETeenPendantModel;

@interface AWETeenFeedPendantManager : NSObject {
    BOOL _pendantShowTracked;
    AWETeenPendantModel *_pendantSettings;
}

@property (retain, nonatomic) AWETeenPendantModel *pendantSettings;
@property (nonatomic) BOOL pendantShowTracked;

+ (id)sharedInstance;

- (BOOL)shouldShowPendant;
- (void)trackTeenPendantClick;
- (id)pendantSettings;
- (void)trackTeenPendantHide;
- (id)pendantCacheKey;
- (void)setPendantShowTracked:(BOOL)arg0;
- (void)setPendantSettings:(id)arg0;
- (void)p_trackTeenPendantLoadWithError:(id)arg0 urlString:(id)arg1;
- (void)tryToShowPendant;
- (void)trackTeenPendantShow;
- (BOOL)pendantShowTracked;
- (void).cxx_destruct;

@end
