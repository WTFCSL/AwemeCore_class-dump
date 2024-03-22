//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEUserModel, NSMutableDictionary, AWEProfileMenuVerticalSectionViewModel, AWEProfileMenuHorizontalSectionViewModel, NSObject, AWEProfileMoreMenuContext;
@protocol AWEOtherProfileSettingActionProtocol;

@interface AWEProfileMoreMenuViewModel : AWEBaseListViewModel <AWEUserMessage> {
    BOOL _isSolid;
    AWEProfileMoreMenuContext *_context;
    AWEProfileMenuHorizontalSectionViewModel *_horizontalSectionViewModel;
    AWEProfileMenuVerticalSectionViewModel *_verticalSectionViewModel;
    NSArray *_cardModels;
    NSArray *_barSectionsModels;
    AWEUserModel *_user;
    NSObject<AWEOtherProfileSettingActionProtocol> *_profileMenuActions;
    NSMutableDictionary *_orderDict;
}

@property (retain, nonatomic) AWEProfileMenuHorizontalSectionViewModel *horizontalSectionViewModel;
@property (retain, nonatomic) AWEProfileMenuVerticalSectionViewModel *verticalSectionViewModel;
@property (retain, nonatomic) NSArray *cardModels;
@property (retain, nonatomic) NSArray *barSectionsModels;
@property (retain, nonatomic) AWEProfileMoreMenuContext *context;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSObject<AWEOtherProfileSettingActionProtocol> *profileMenuActions;
@property (retain, nonatomic) NSMutableDictionary *orderDict;
@property (nonatomic) BOOL isSolid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getEnterFrom:(unsigned long long)arg0 trackParams:(id)arg1;

- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didSpecialFollowWithUser:(id)arg0 error:(id)arg1;
- (void)setupViewModel;
- (void)configWithContext:(id)arg0;
- (id)cardModels;
- (void)setCardModels:(id)arg0;
- (long long)cardModelsCount;
- (long long)barModelsTotalCount;
- (long long)barSectionsCount;
- (void)setHorizontalSectionViewModel:(id)arg0;
- (id)horizontalSectionViewModel;
- (id)barSectionsModels;
- (void)setVerticalSectionViewModel:(id)arg0;
- (id)verticalSectionViewModel;
- (void)setIsSolid:(BOOL)arg0;
- (void)setOrderDict:(id)arg0;
- (id)__setmodels;
- (void)setBarSectionsModels:(id)arg0;
- (id)orderDict;
- (id)imChatModel;
- (id)blockModel;
- (id)reportModel;
- (id)setAliasMode;
- (id)taIsFriendModel;
- (id)topUserModel;
- (id)specialFollowModel;
- (id)bellPushModel;
- (id)setGroupModel;
- (id)taIsCloseFriendModel;
- (id)hideMyPostModel;
- (id)hideHerPostModel;
- (id)removeFansModel;
- (id)goodsServiceModel;
- (id)poiGoodsServiceModel;
- (id)unFollowModel;
- (id)unFollowSecondModel;
- (void)addHangoutAndKnowledgeModelIfNeeded:(id)arg0 orderDict:(id)arg1;
- (id)profileMenuActions;
- (void)trackShareClick;
- (void)unfollowWithUser:(id)arg0 trackerParam:(id)arg1;
- (BOOL)supportEditNameInHeader;
- (void)setProfileMenuActions:(id)arg0;
- (void)setUser:(id)arg0;
- (id)init;
- (id)user;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;
- (id)shareModel;
- (BOOL)isSolid;

@end