//
//     Generated by private class-dump
//

@class AWEPOIIMMsgRichTextModel;

@interface AWEPOIIMMsgRichTextCellViewModel : AWEPOIIMBaseMessageCellViewModelV2 {
    AWEPOIIMMsgRichTextModel *_richTextModel;
}

@property (retain, nonatomic) AWEPOIIMMsgRichTextModel *richTextModel;

- (id)richTextModel;
- (void)setRichTextModel:(id)arg0;
- (void)handleMessageBind;
- (void)callPhoneWithPhoneNums:(id)arg0;
- (BOOL)disableCopy;
- (void)showOrderListAction;
- (void)showGoodListAction;
- (void)linkActionWithLink:(id)arg0;
- (void).cxx_destruct;
- (long long)msgType;

@end
