//
//     Generated by private class-dump
//

@class NSString, AWEMarkView;

@interface AWEPlayInteractionDistanceTagElement : AWEPlayInteractionLeftElement <AWEFeedTagsPosPriorityAvoidElementProtocol> {
    AWEMarkView *_distanceTag;
}

@property (retain, nonatomic) AWEMarkView *distanceTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithModel:(id)arg0 context:(id)arg1;

- (void)initializeElement;
- (void)viewDidDisposed;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (long long)elementPriority;
- (void)dynamicWidthRemakeLayout;
- (void)distanceViewChangeInteraction;
- (void)hideComponent;
- (void)updateDistanceTag;
- (id)distanceTag;
- (void)setDistanceTag:(id)arg0;
- (void).cxx_destruct;
- (id)businessID;
- (void)dealloc;
- (void)viewDidLoad;

@end
