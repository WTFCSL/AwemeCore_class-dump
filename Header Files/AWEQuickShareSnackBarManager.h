//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWEAwemeModel;
@protocol AWEShareToStoryModelProtocol;

@interface AWEQuickShareSnackBarManager : NSObject <AWEQuickShareSnackBarDelegate, AWEPublishTaskMessage> {
    id<AWEShareToStoryModelProtocol> _storyModel;
    NSDictionary *_trackParams;
    AWEAwemeModel *_previousAweme;
}

@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEAwemeModel *previousAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)previousAwemeWithCreationID:(id)arg0;
- (void)snackBarEditButtonDidClickWithStoryModel:(id)arg0;
- (void)snackBarDismissDueToTimeOutWithStoryModel:(id)arg0;
- (void)snackBarDismissDueToTouchSpaceWithStoryModel:(id)arg0;
- (void)setPreviousAweme:(id)arg0;
- (id)previousAweme;
- (void)showSnackBarWithStoryModel:(id)arg0 trackParams:(id)arg1;
- (void).cxx_destruct;
- (void)setStoryModel:(id)arg0;
- (id)storyModel;

@end
