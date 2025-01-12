//
//     Generated by private class-dump
//

@class IESLiveMicPosTagInfo, UIImageView, NSString, UILabel;

@interface IESLiveUniformTag : UIView {
    UIImageView *_bgView;
    UILabel *_tagLabel;
    NSString *_linkUrl;
    IESLiveMicPosTagInfo *_tagInfo;
    long long _tagType;
}

@property (retain, nonatomic) IESLiveMicPosTagInfo *tagInfo;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) NSString *linkUrl;
@property (nonatomic) long long tagType;

- (void)setTagString:(id)arg0;
- (id)tagInfo;
- (void)setTagInfo:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)didClickTag;
- (void)updateTagInfo:(id)arg0;
- (void)trackTagShow:(id)arg0;
- (void)setBackgroundColorsARGBHexStr:(id)arg0;
- (BOOL)isLinkPanel;
- (BOOL)isVideoSeat;
- (void)trackTagShow:(id)arg0 extra:(id)arg1;
- (BOOL)isAudioSeat;
- (void)p_updateBg;
- (long long)tagType;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithType:(long long)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;
- (void)setTagType:(long long)arg0;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg0;
- (void)setTagColor:(id)arg0;

@end
