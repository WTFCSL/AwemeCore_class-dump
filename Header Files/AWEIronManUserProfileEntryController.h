//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCardModel, NSString, AWEIronManCradView, AWEUserModel;

@interface AWEIronManUserProfileEntryController : NSObject <AWEIronManCradViewDelegate, AWEProfileExtensionAreaCardControllerProtocol> {
    BOOL _shouldReported;
    AWEIronManCradView *_cardView;
    AWEUserModel *_userModel;
    AWEProfileExtensionAreaCardModel *_cardModel;
}

@property (retain, nonatomic) AWEIronManCradView *cardView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) BOOL shouldReported;
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
- (void)cradViewDidClick:(id)arg0;
- (void)setShouldReported:(BOOL)arg0;
- (BOOL)shouldReported;
- (id)init;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end