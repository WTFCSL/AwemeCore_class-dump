//
//     Generated by private class-dump
//

@class NSString, AWEMusicChallengeGuideModel;

@interface AWEMusic2ChallengeGuideView : AWEBaseGuideView <AWEConfigBaseGuideViewProtocol> {
    BOOL _isCommerce;
    AWEMusicChallengeGuideModel *_guideModel;
    NSString *_musicID;
}

@property (retain, nonatomic) AWEMusicChallengeGuideModel *guideModel;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *musicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (BOOL)isCommerce;
- (id)musicID;
- (void)setIsCommerce:(BOOL)arg0;
- (void)setMusicID:(id)arg0;
- (void)configAvatarImageView;
- (void)configTitleLabel;
- (void)configDescriptionLabel;
- (void)onChallengeGuideViewTapped:(id)arg0;
- (void)configWithMusicModel:(id)arg0;
- (void).cxx_destruct;

@end
