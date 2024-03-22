//
//     Generated by private class-dump
//

@class NSString, AWEDislikeEntityModel, NSIndexPath, AWEDislikePanelInputTextView;
@protocol AWEDislikeInputViewCellDelegate;

@interface AWEDislikeInputViewCell : UICollectionViewCell <AWEDislikePanelInputViewDelegate> {
    id<AWEDislikeInputViewCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    AWEDislikeEntityModel *_model;
    AWEDislikePanelInputTextView *_textView;
}

@property (retain, nonatomic) AWEDislikePanelInputTextView *textView;
@property (weak, nonatomic) id<AWEDislikeInputViewCellDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) AWEDislikeEntityModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)textViewDidChangeText:(id)arg0;
- (void)textViewWillChangeHeight:(float)arg0;
- (void)textViewDidChangeHeight:(float)arg0;
- (void)keyboardWillShowWithAdditionalAnimation:(struct CGSize { double x0; double x1; })arg0;
- (void)keyboardWillChangeFrameWithAdditionalAnimation:(struct CGSize { double x0; double x1; })arg0;
- (void)keyboardWillHideWithAdditionalAnimation:(struct CGSize { double x0; double x1; })arg0;
- (id)textView;
- (void)keyboardDidHide:(struct CGSize { double x0; double x1; })arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setIndexPath:(id)arg0;
- (void)keyboardWillShow:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)keyboardWillHide:(struct CGSize { double x0; double x1; })arg0;
- (id)indexPath;
- (id)delegate;
- (void)setSelected:(BOOL)arg0;
- (void)setTextView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)keyboardDidChangeFrame:(struct CGSize { double x0; double x1; })arg0;
- (void)keyboardDidShow:(struct CGSize { double x0; double x1; })arg0;
- (void)keyboardWillChangeFrame:(struct CGSize { double x0; double x1; })arg0;

@end