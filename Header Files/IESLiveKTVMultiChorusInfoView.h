//
//     Generated by private class-dump
//

@class NSArray, UILabel, IESLiveKTVMultiChorusInfoViewConfig;

@interface IESLiveKTVMultiChorusInfoView : UIView {
    IESLiveKTVMultiChorusInfoViewConfig *_config;
    NSArray *_avatarImageViews;
    UILabel *_totalLabel;
    UILabel *_ellipsisLabel;
}

@property (retain, nonatomic) IESLiveKTVMultiChorusInfoViewConfig *config;
@property (copy, nonatomic) NSArray *avatarImageViews;
@property (retain, nonatomic) UILabel *totalLabel;
@property (retain, nonatomic) UILabel *ellipsisLabel;

- (id)totalLabel;
- (void)setTotalLabel:(id)arg0;
- (id)avatarImageViews;
- (void)setAvatarImageViews:(id)arg0;
- (void)updateWithAvatars:(id)arg0;
- (id)ellipsisLabel;
- (void)setEllipsisLabel:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)setupSubviews;

@end
