//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFollowListSearchSectionController : AWERelationUserListBaseSectionController <AWECommonSearchBarDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (unsigned long long)activeUserSourceType;
- (void)__moreOptionButtonTapped:(id)arg0 model:(id)arg1;
- (void)trackTopFollowingWithUserModel:(id)arg0 originalTopStatus:(long long)arg1 buttonType:(id)arg2 error:(id)arg3;
- (void)__showMenuWithUser:(id)arg0;
- (void)refreshUserFriendStatus:(id)arg0;
- (void)__topFollowingUser:(id)arg0 succeed:(id /* block */)arg1;
- (void)__untopFollowingUser:(id)arg0 succeed:(id /* block */)arg1;
- (id)separatorColor;
- (long long)type;
- (id)sectionBackgroundColor;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;

@end
