//
//     Generated by private class-dump
//

@class UIImageView, IESLiveGCDTimer, UIView, UILabel;
@protocol IESLiveLanguageService;

@interface AWELivePreStreamInnerRoomCommentView : UIView {
    UIImageView *_commentIcon;
    UILabel *_preText;
    UILabel *_commentText;
    UILabel *_commentTime;
    UIView *_commentContainer;
    UIView *_dividerLine;
    IESLiveGCDTimer *_showTimer;
    UIView *_toCommentContainer;
    id<IESLiveLanguageService> _languageService;
}

@property (retain, nonatomic) UIView *commentContainer;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) IESLiveGCDTimer *showTimer;
@property (retain, nonatomic) UIView *toCommentContainer;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) UIImageView *commentIcon;
@property (retain, nonatomic) UILabel *preText;
@property (retain, nonatomic) UILabel *commentText;
@property (retain, nonatomic) UILabel *commentTime;

- (id)commentTime;
- (void)setShowTimer:(id)arg0;
- (void)setCommentTime:(id)arg0;
- (void)disableLocalizations;
- (id)dividerLine;
- (void)setDividerLine:(id)arg0;
- (id)preText;
- (id)commentContainer;
- (void)setCommentContainer:(id)arg0;
- (id)commentIcon;
- (id)languageService;
- (void)setCommentIcon:(id)arg0;
- (void)setPreText:(id)arg0;
- (id)toCommentContainer;
- (void)setToCommentContainer:(id)arg0;
- (void)setLanguageService:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)showTimer;
- (void)setupView;
- (id)commentText;
- (void)setCommentText:(id)arg0;

@end
