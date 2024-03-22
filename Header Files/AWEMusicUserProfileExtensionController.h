//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCardModel, NSString, AWEMusicUserProfileEntryCardView, AWEUserModel;

@interface AWEMusicUserProfileExtensionController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    AWEMusicUserProfileEntryCardView *_entryCardView;
    AWEProfileExtensionAreaCardModel *_cardModel;
    AWEUserModel *_userModel;
    id /* block */ _reloadCardListBlock;
}

@property (retain, nonatomic) AWEMusicUserProfileEntryCardView *entryCardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2;
+ (id)cardControllerWithUserModel:(id)arg0 cardModel:(id)arg1 cardIndex:(unsigned long long)arg2 extraInfo:(id)arg3 reloadCardListBlock:(id /* block */)arg4;

- (BOOL)shouldShowCard;
- (void)cardWillAppear;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (double)widthOfCard;
- (void)setReloadCardListBlock:(id /* block */)arg0;
- (id /* block */)reloadCardListBlock;
- (id)entryCardView;
- (void)cardClick:(id)arg0;
- (id)subtitileWithCardModel:(id)arg0;
- (void)setEntryCardView:(id)arg0;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (BOOL)isCurrentUser;
- (id)cardView;

@end