//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCardModel, NSString, AWEEnterpriseCenterUserProfileEntryCard, AWEUserModel;

@interface AWEEnterpriseCenterUserProfileEntryController : NSObject <AWEEnterpriseCenterUserProfileEntryCardDelegate, AWEProfileExtensionAreaCardControllerProtocol> {
    BOOL _isTrackedShown;
    AWEUserModel *_userModel;
    AWEProfileExtensionAreaCardModel *_cardModel;
    AWEEnterpriseCenterUserProfileEntryCard *_cardView;
}

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) AWEEnterpriseCenterUserProfileEntryCard *cardView;
@property (nonatomic) BOOL isTrackedShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2;
+ (id)cardControllerWithUserModel:(id)arg0 cardModel:(id)arg1 cardIndex:(unsigned long long)arg2 extraInfo:(id)arg3 reloadCardListBlock:(id /* block */)arg4;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2 cardModel:(id)arg3;

- (BOOL)shouldShowCard;
- (void)cardWillAppear;
- (void)cardWillDisappear;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (double)widthOfCard;
- (BOOL)isTrackedShown;
- (void)setIsTrackedShown:(BOOL)arg0;
- (void)entryCardDidTapped;
- (void)__trackEnterpriseProfileButtonWithEventName:(id)arg0;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end