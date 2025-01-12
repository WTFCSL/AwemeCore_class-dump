//
//     Generated by private class-dump
//

@class YYLabel, UIButton, NSString;

@interface AWEIMSecondaryNegativeCommentCell : AWEIMSecondaryCommentCell <AWEUserMessage> {
    BOOL _isDislikeBtnAnimated;
    YYLabel *_mentionTipLabel;
    UIButton *_userBlockButton;
    UIButton *_deleteButton;
    UIButton *_dislikeButton;
}

@property (nonatomic) BOOL isDislikeBtnAnimated;
@property (retain, nonatomic) YYLabel *mentionTipLabel;
@property (retain, nonatomic) UIButton *userBlockButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)arg0;
+ (id)identifier;

- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishUnBlockUser:(id)arg0 status:(long long)arg1;
- (void)configWithModel:(id)arg0;
- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (void)dislikeButtonTapped:(id)arg0;
- (void)commentDeleteNotification:(id)arg0;
- (void)deleteTapped:(id)arg0;
- (void)updateDislikeState:(BOOL)arg0;
- (void)updateUserBlockState:(BOOL)arg0;
- (void)updateDeleteLabelState;
- (id)mentionTipLabel;
- (id)userBlockButton;
- (void)updateCommonViewsAnchor;
- (void)updateMentionLabelAnchor;
- (void)updateBottomButtonsAnchor;
- (void)updateMentionLabelAttribute:(id)arg0 mentionStr:(id)arg1;
- (void)userBlockTapped:(id)arg0;
- (id)commentMentionTimeAttributedStringWithModel:(id)arg0 mentionStr:(id)arg1;
- (void)updateFoldCommentState:(BOOL)arg0;
- (id)flodCommentAttributedString:(id)arg0 content:(id)arg1;
- (id)contentLabelAttributedWithoutTimeStringWithModel:(id)arg0;
- (id)truncationAttributedWithoutTimeStringWithModel:(id)arg0;
- (void)commentDislikeActionNotification:(id)arg0;
- (BOOL)isDislikeBtnAnimated;
- (void)setIsDislikeBtnAnimated:(BOOL)arg0;
- (void)setMentionTipLabel:(id)arg0;
- (void)setUserBlockButton:(id)arg0;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id)deleteButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)addObservers;

@end
