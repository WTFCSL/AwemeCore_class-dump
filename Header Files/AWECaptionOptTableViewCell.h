//
//     Generated by private class-dump
//

@class AWECaptionOptTextView, NSIndexPath, NSString, UIView, AWEStudioCaptionModel, ACCAnimatedButton;
@protocol AWECaptionOptCellDelegate;

@interface AWECaptionOptTableViewCell : UITableViewCell <UITextViewDelegate> {
    BOOL _shouldDeleteInLine;
    id<AWECaptionOptCellDelegate> _delegate;
    id /* block */ _textFieldWillReturnBlock;
    id /* block */ _textFieldDeleteInLineHeadBlock;
    id /* block */ _audioPlayBlock;
    AWEStudioCaptionModel *_captionModel;
    AWECaptionOptTextView *_captionTextView;
    UIView *_captionBgView;
    ACCAnimatedButton *_audioPlayButton;
    NSIndexPath *_currentIndexPath;
}

@property (retain, nonatomic) AWEStudioCaptionModel *captionModel;
@property (retain, nonatomic) AWECaptionOptTextView *captionTextView;
@property (retain, nonatomic) UIView *captionBgView;
@property (retain, nonatomic) ACCAnimatedButton *audioPlayButton;
@property (nonatomic) BOOL shouldDeleteInLine;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (weak, nonatomic) id<AWECaptionOptCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ textFieldWillReturnBlock;
@property (copy, nonatomic) id /* block */ textFieldDeleteInLineHeadBlock;
@property (copy, nonatomic) id /* block */ audioPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)captionTextView;
- (void)setCaptionTextView:(id)arg0;
- (id)captionModel;
- (void)configCellWithCaptionModel:(id)arg0 indexPath:(id)arg1;
- (void)setTextFieldWillReturnBlock:(id /* block */)arg0;
- (void)setTextFieldDeleteInLineHeadBlock:(id /* block */)arg0;
- (void)setAudioPlayBlock:(id /* block */)arg0;
- (void)switchEditMode:(BOOL)arg0;
- (void)updateCursorPositon:(long long)arg0;
- (void)configCaptionHighlight:(BOOL)arg0;
- (id)captionBgView;
- (void)setCaptionBgView:(id)arg0;
- (void)setCaptionModel:(id)arg0;
- (id)audioPlayButton;
- (void)setShouldDeleteInLine:(BOOL)arg0;
- (BOOL)hasValidText:(id)arg0;
- (id /* block */)textFieldWillReturnBlock;
- (id)attributesDic;
- (void)updateCellHeightAndShouldBeginUpdate:(BOOL)arg0 indexPath:(id)arg1;
- (BOOL)shouldDeleteInLine;
- (id /* block */)textFieldDeleteInLineHeadBlock;
- (id /* block */)audioPlayBlock;
- (void)p_textViewDeleteBackward:(id)arg0;
- (void)audioPlayButtonClicked;
- (void)setAudioPlayButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)currentIndexPath;
- (id)delegate;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)setHighlighted:(BOOL)arg0;
- (void)textViewDidBeginEditing:(id)arg0;
- (void)setCurrentIndexPath:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setupUI;
- (double)dynamicCellHeight;

@end
