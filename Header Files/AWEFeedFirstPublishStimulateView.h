//
//     Generated by private class-dump
//

@class NSString, NSBundle;

@interface AWEFeedFirstPublishStimulateView : UIView <LOTImageCache, AWEFirstPublishStimulateProtocol> {
    NSBundle *_feedBundle;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSBundle *feedBundle;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addFirstPublishStimulateView;
+ (id)firstPublishStimulateView;
+ (id)addFirstPublishStimulateViewWithCompletion:(id /* block */)arg0;

- (void)addMaskView;
- (void)addStimulateAnimation;
- (id)feedBundle;
- (id)imageWithClipImage:(id)arg0;
- (void)preLoadUserAvatarImage;
- (void)setFeedBundle:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)imageForKey:(id)arg0;
- (void)setUp;
- (void)setImage:(id)arg0 forKey:(id)arg1;

@end
