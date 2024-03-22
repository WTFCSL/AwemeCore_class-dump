//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol AWEShareToStoryModelProtocol;

@interface AWEQuickShareInputTitleManager : NSObject {
    id<AWEShareToStoryModelProtocol> _storyModel;
    NSDictionary *_trackParams;
}

@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)sharedManager;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)showInputViewWithStoryModel:(id)arg0 trackParams:(id)arg1 cover:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
- (void)setStoryModel:(id)arg0;
- (id)storyModel;

@end
