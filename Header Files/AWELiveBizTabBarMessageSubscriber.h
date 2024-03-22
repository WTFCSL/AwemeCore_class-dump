//
//     Generated by private class-dump
//

@class NSString, AWETabbarLiveGuideBubbleManager;

@interface AWELiveBizTabBarMessageSubscriber : NSObject <AWEBizTabBarMessage> {
    AWETabbarLiveGuideBubbleManager *_liveGuideBubbleManager;
}

@property (retain, nonatomic) AWETabbarLiveGuideBubbleManager *liveGuideBubbleManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)setLiveGuideBubbleManager:(id)arg0;
- (id)liveGuideBubbleManager;
- (void).cxx_destruct;

@end
