//
//     Generated by private class-dump
//

@class AWESimpleInfoView, UIImageView, NSString, AWEUserProfileEventCommonParamsHandler, AWEUserModel;

@interface AWEStarActivityEntranceView : UIView <AWEStarActivityEntranceViewProtocol> {
    AWEUserProfileEventCommonParamsHandler *_eventCommonParamsHandler;
    AWESimpleInfoView *_billboardRankView;
    AWESimpleInfoView *_hitRankView;
    UIImageView *_backgroundImageView;
    AWEUserModel *_userModel;
    NSString *_enterFrom;
    NSString *_tagID;
}

@property (retain, nonatomic) AWESimpleInfoView *billboardRankView;
@property (retain, nonatomic) AWESimpleInfoView *hitRankView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *tagID;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)configWithModel:(id)arg0;
- (void)configUI;
- (void)updateEnterFrom:(id)arg0;
- (void)updateTagID:(id)arg0;
- (void)updateHitRankAvatarBorderColor:(id)arg0;
- (id)eventCommonParamsHandler;
- (void)setEventCommonParamsHandler:(id)arg0;
- (id)billboardRankView;
- (id)hitRankView;
- (void)clickBillboardRank;
- (void)clickHitRank;
- (id)defaultSettingsValue;
- (void)transferToHandledSchemaUsingSchema:(id)arg0;
- (void)clickWithLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setBillboardRankView:(id)arg0;
- (void)setHitRankView:(id)arg0;
- (id)init;
- (id)tagID;
- (void)setTagID:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;

@end
