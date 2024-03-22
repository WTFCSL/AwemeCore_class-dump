//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEURLModel;

@interface AWESearchHotSpotRelatedVSProgramUserModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_userID;
    NSString *_secUserID;
    NSString *_nickname;
    AWEURLModel *_avatarThumb;
    NSNumber *_certType;
    NSString *_certLabel;
    NSString *_arrowLabel;
    NSString *_linkTo;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) NSNumber *certType;
@property (copy, nonatomic) NSString *certLabel;
@property (copy, nonatomic) NSString *arrowLabel;
@property (copy, nonatomic) NSString *linkTo;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)avatarThumb;
- (void)setAvatarThumb:(id)arg0;
- (id)certLabel;
- (void)setCertLabel:(id)arg0;
- (id)linkTo;
- (void)setLinkTo:(id)arg0;
- (id)userID;
- (id)nickname;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setNickname:(id)arg0;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)arrowLabel;
- (void)setArrowLabel:(id)arg0;
- (id)certType;
- (void)setCertType:(id)arg0;

@end