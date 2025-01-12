//
//     Generated by private class-dump
//

@class AWENearbyDynamicEventSubscriber, NSMutableDictionary;

@interface AWENearbyDiamondAutoRefreshManager : NSObject {
    NSMutableDictionary *_sceneHandlesMap;
    AWENearbyDynamicEventSubscriber *_diamondRefreshSubscriber;
    AWENearbyDynamicEventSubscriber *_diamondShouldRefreshSubcriber;
}

@property (retain, nonatomic) NSMutableDictionary *sceneHandlesMap;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *diamondRefreshSubscriber;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *diamondShouldRefreshSubcriber;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (BOOL)triggerUpdateCardDataIfNeedsWithSceneType:(long long)arg0;
- (void)registerSceneType:(long long)arg0 sceneController:(id)arg1;
- (void)triggerAutoRefreshIfNeedsWithSceneType:(long long)arg0;
- (id)__stringWithInteger:(long long)arg0;
- (void)setSceneHandlesMap:(id)arg0;
- (void)__registerDiamondRefreshJSBSubscriber;
- (long long)__timeFrequency;
- (id)sceneHandlesMap;
- (void)__recieveAutoRefreshMessage:(id)arg0;
- (void)setDiamondRefreshSubscriber:(id)arg0;
- (id)diamondRefreshSubscriber;
- (void)setDiamondShouldRefreshSubcriber:(id)arg0;
- (id)diamondShouldRefreshSubcriber;
- (void)__trackClientReceiveRefreshDiamondMsg:(id)arg0;
- (void)handleByteSyncMsg:(id)arg0;
- (void)cleanAutoRefreshModelsWithSceneType:(long long)arg0;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)__settings;

@end
