//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWETeenBasicDescriptionTextView : UITextView <NSLayoutManagerDelegate> {
    NSMutableDictionary *_highlightDic;
    NSMutableArray *_UIcontrolArr;
    NSMutableArray *_AttachmentArr;
}

@property (retain, nonatomic) NSMutableDictionary *highlightDic;
@property (retain, nonatomic) NSMutableArray *UIcontrolArr;
@property (retain, nonatomic) NSMutableArray *AttachmentArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)highlightDic;
- (void)setHighlightDic:(id)arg0;
- (id)UIcontrolArr;
- (id)AttachmentArr;
- (BOOL)hashtagClickableAreaChange;
- (BOOL)slideOptimize;
- (void)handleClickAction:(id)arg0;
- (void)controlClick:(id)arg0;
- (BOOL)refreshOptimize;
- (void)removeUIControlAndAttributeView;
- (void)addUIControlAndAttributeView;
- (void)setUIcontrolArr:(id)arg0;
- (void)setAttachmentArr:(id)arg0;
- (void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg0;
- (void)layoutManagerDidInvalidateLayout:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 textContainer:(id)arg1;

@end