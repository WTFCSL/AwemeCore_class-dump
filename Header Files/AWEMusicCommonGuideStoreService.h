//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicCommonGuideStoreService : NSObject <AWEMusicGuideStoreProtocol> {
    NSString *_key;
}

@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowCollectionGuide;
- (void)userPlayingInBack;
- (BOOL)canShowBgGuide;
- (Class)guidePopupViewClass;
- (void)bgGuideDidShow;
- (id)bgGuideTutorialType;
- (void)collectionGuideDidShow;
- (BOOL)canShowGotoMyCollectionGuide;
- (void)gotoMyCollectionGuideDidShow;
- (BOOL)canShowChangeSongGuide;
- (void)changeSongGuideDidShow;
- (id)initWithKey:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;

@end