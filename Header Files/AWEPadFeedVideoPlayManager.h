//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEPadFeedVideoPlayManager : NSObject <AWEPadFeedVideoPlayService> {
    AWEAwemeModel *_currentModel;
    NSString *_firstLandscapeItemId;
}

@property (weak, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) NSString *firstLandscapeItemId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)videoDidChangeTo:(id)arg0;
- (id)firstLandscapeItemId;
- (void)setFirstLandscapeItemId:(id)arg0;
- (void)didEnterLandscapeWithItem:(id)arg0;
- (void)didQuitLandscape;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end