//
//     Generated by private class-dump
//

@class LSIMMessageRichTextModel;

@interface LSIMMessageRichTextCellViewModel : LSIMMessageCardBaseCellVM {
    LSIMMessageRichTextModel *_richTextModel;
}

@property (retain, nonatomic) LSIMMessageRichTextModel *richTextModel;

- (id)richTextModel;
- (void)setRichTextModel:(id)arg0;
- (void)callPhoneWithPhoneNums:(id)arg0;
- (BOOL)disableCopy;
- (void)showOrderListAction;
- (void)showGoodListAction;
- (void)linkActionWithLink:(id)arg0;
- (void)handleMessage;
- (void).cxx_destruct;

@end
