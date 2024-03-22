//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, AWEHomePageRemoteModel, AWEHomePageRemoteHandleBusinessManager;
@protocol AWEHomePageRemoteManagerDelegate;

@interface AWEHomePageRemoteManager : NSObject {
    NSArray *_moduleControllerArray;
    AWEHomePageRemoteModel *_remoteModel;
    id<AWEHomePageRemoteManagerDelegate> _delegate;
    AWEHomePageRemoteHandleBusinessManager *_businessManager;
    NSArray *_originModuleControllerArray;
    NSDictionary *_remoteControllerMap;
    NSString *_initialChannelID;
}

@property (retain, nonatomic) AWEHomePageRemoteModel *remoteModel;
@property (weak, nonatomic) id<AWEHomePageRemoteManagerDelegate> delegate;
@property (retain, nonatomic) AWEHomePageRemoteHandleBusinessManager *businessManager;
@property (copy, nonatomic) NSArray *moduleControllerArray;
@property (copy, nonatomic) NSArray *originModuleControllerArray;
@property (copy, nonatomic) NSDictionary *remoteControllerMap;
@property (retain, nonatomic) NSString *initialChannelID;

+ (id)registerControllerWithModuleType;
+ (id)registerControllerWithBusinessType;
+ (id)supportModuleType;

- (void)setInitialChannelID:(id)arg0;
- (id)initialChannelID;
- (id)remoteModel;
- (id)consumedBusinessIDs;
- (void)businessRemoveAlertIfNeed;
- (id)getHomePageRemoteTrackContext;
- (void)panelPositiveCloseWithAnimateType:(long long)arg0;
- (void)setBusinessManager:(id)arg0;
- (id)originModuleControllerArray;
- (void)setModuleControllerArray:(id)arg0;
- (id)remoteControllerMap;
- (id)moduleControllerArray;
- (id)loadRemoteDataAndRegisterController:(id)arg0 moduleControllerArray:(id)arg1 itemControllersDictionary:(id)arg2;
- (void)setOriginModuleControllerArray:(id)arg0;
- (void)setRemoteControllerMap:(id)arg0;
- (void)setRemoteModel:(id)arg0;
- (long long)homePageRemoteCurrentThemeStyle;
- (id)homePageRemoteIdentity;
- (id)createControllerWithModuleType:(id)arg0 withItemModel:(id)arg1;
- (id)businessManager;
- (void)reloadRemoteModuleController;
- (id)homePageRemoteItemControllerWithBusinessId:(id)arg0;
- (BOOL)askAllControllersIfPanelCanShow;
- (void)loadRemoteDataAndRegisterController:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
