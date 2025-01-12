//
//     Generated by private class-dump
//

@class NSString, AWEECOMIMCardBaseView;

@interface AWEECOMIMBaseCardCell : AWEECOMIMBaseUserMsgCell <AWEECOMIMCardBaseViewDelegate> {
    AWEECOMIMCardBaseView *_view;
    AWEECOMIMCardBaseView *_cardView;
}

@property (retain, nonatomic) AWEECOMIMCardBaseView *cardView;
@property (readonly, nonatomic) AWEECOMIMCardBaseView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)arg0 withModel:(id)arg1;

- (void)setCellModel:(id)arg0;
- (void)didCustomInit;
- (void)baseCardViewDidClickImage:(id)arg0 imageItemModel:(id)arg1;
- (void)baseCardViewDidClickQuestion:(id)arg0;
- (void)baseCardViewDidSendSelectableMsgCardMessage:(id)arg0;
- (void)cardViewDidChangeHeight:(id)arg0;
- (void)baseCardViewDidShowFullText:(id)arg0 isShowFullText:(BOOL)arg1;
- (void).cxx_destruct;
- (id)view;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end
