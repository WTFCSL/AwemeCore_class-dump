//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEFollowListUserListHeader;

@interface AWEFollowListUserListSectionController : AWERelationUserListBaseSectionController <AWEListSectionControllerDelegate> {
    BOOL _initFinished;
    AWEFollowListUserListHeader *_header;
    NSNumber *_followingCount;
}

@property (weak, nonatomic) AWEFollowListUserListHeader *header;
@property (nonatomic) BOOL initFinished;
@property (retain, nonatomic) NSNumber *followingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;
+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didBindSectionViewModel;
- (id)enterFrom;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (void)configSupplementaryHeaderView:(id)arg0;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (void)configSupplementaryFooterView:(id)arg0;
- (id)followingCount;
- (void)addBinding;
- (id)aAWERelationDOUYINHTSAdapter;
- (unsigned long long)activeUserSourceType;
- (void)setFollowingCount:(id)arg0;
- (void)__moreOptionButtonTapped:(id)arg0 model:(id)arg1;
- (void)trackTopFollowingWithUserModel:(id)arg0 originalTopStatus:(long long)arg1 buttonType:(id)arg2 error:(id)arg3;
- (void)__showMenuWithUser:(id)arg0;
- (void)__updateStatisticCount:(id)arg0;
- (void)enterUnreadFeedWith:(id)arg0 logExtraDic:(id)arg1;
- (void)selectItemEnterUserProfileAtIndex:(long long)arg0 model:(id)arg1;
- (BOOL)showWidgetGuideIfNeeded;
- (void)__showFirstTimeGuideBubbleOnView;
- (void)__topFollowingUser:(id)arg0;
- (void)__untopFollowingUser:(id)arg0;
- (void)__groupFollowingUser:(id)arg0;
- (BOOL)initFinished;
- (void)setInitFinished:(BOOL)arg0;
- (id)init;
- (id)separatorColor;
- (void).cxx_destruct;
- (long long)type;
- (id)header;
- (void)setHeader:(id)arg0;
- (id)sectionBackgroundColor;
- (BOOL)isMine;
- (id)pageIdentifier;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end