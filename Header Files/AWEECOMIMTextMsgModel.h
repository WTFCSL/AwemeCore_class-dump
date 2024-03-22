//
//     Generated by private class-dump
//

@class AWEECOMIMTextComponentModel;

@interface AWEECOMIMTextMsgModel : AWEECOMIMBaseMsgModel {
    AWEECOMIMTextComponentModel *_textModel;
    struct CGSize { double width; double height; } _textTotalDisplaySize;
}

@property (retain, nonatomic) AWEECOMIMTextComponentModel *textModel;
@property (nonatomic) struct CGSize { double width; double height; } textTotalDisplaySize;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContentInsets;
+ (Class)cellClass;

- (id)textModel;
- (struct CGSize { double x0; double x1; })textContentSize;
- (void)setTextModel:(id)arg0;
- (void)reBulildCellFullContentHeight;
- (struct CGSize { double x0; double x1; })textTotalDisplaySize;
- (void)setTextTotalDisplaySize:(struct CGSize { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg0;

@end
